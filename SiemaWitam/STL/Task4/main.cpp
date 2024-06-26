// Section 20
// Challenge 4
// Identifying palindrome strings using a stack and queue
#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>

bool is_palindrome(const std::string& s)
{
    std::stack<char> s1;
    std::queue<char> q1;

    for(auto c : s)
    {
        if(std::isalpha(c))
        {
            s1.push(std::towupper(c));
            q1.push(std::towupper(c));
        }
    }
    while(!s1.empty())
    {
        char elem1 {};
        char elem2 {};
        elem1 = s1.top();
        elem2 = q1.front();
        if(elem1 != elem2)
            return false;
        s1.pop();
        q1.pop();
    }    
    return true;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}