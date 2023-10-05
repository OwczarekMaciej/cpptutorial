#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string message;
    cout << "Enter your secret message: ";
    getline(cin, message);

    cout << "\nEncrypting message..." << endl;
    
    for (size_t i = 0; i < message.length(); i++)    
    {
        if(isalpha(message.at(i)))
        {
            if(islower(message.at(i)))
            {
                message.at(i) -= 32;
            }
            else
            {
                message.at(i) += 32;
            }
        }
    }

    cout << "\nEncrypted message: " << message << endl;

    cout << "\nDecrypting message..." << endl;

    for (size_t i = 0; i < message.length(); i++)    
    {
        if(isalpha(message.at(i)))
        {
            if(islower(message.at(i)))
            {
                message.at(i) -= 32;
            }
            else
            {
                message.at(i) += 32;
            }
        }
    }

    cout << "\nDecrypted message: " << message << endl;

    return 0;
}