#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string s1{};

    cout << "Enter your string: ";
    getline(cin, s1);

    for (size_t i = 0; i < s1.length(); i++)
    {
        // for (size_t x = 0; x < (s1.length() - i); x++)
        // {
        //     cout << " ";
        // }
        string blank(s1.length()-i,' ');
        cout <<  blank;
        
        for (size_t j = 0; j <= i; j++)
        {
            cout << s1.at(j);
        }
        for (int k = i - 1; k >= 0; k--)
        {
            cout << s1.at(k);
        }
        
        cout << endl;
    }
    




    return 0;
}