#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

bool find_substring(const string &word_to_find, const string &target)
{
    size_t found = target.find(word_to_find);
    if(found == string::npos)
        return false;
    else
        return true;
}

int main(int argc, char const *argv[])
{
    fstream in_file;
    in_file.open("romeoandjuliet.txt");
    if (!in_file)
    {
        cerr << "Cannot open the file" << endl;
        exit(1);
    }

    long counter = 0;
    int correct_counter = 0;
    string key;
    string word;

    cout << "Enter the substring to search for: ";
    cin >> key;
    while(!in_file.eof())
    {
        in_file >> word;
        if(find_substring(key, word))
            correct_counter++;
        counter++;
    }

    cout << counter << " words were searched..." << endl;
    cout << "The substring Juliet was found " << correct_counter << " times." << endl;

    in_file.close();

    return 0;
}
