#include <iostream>

using namespace std;

int main()
{
    const int dollar {100};
    const int quarter {25};
    const int dime {10};
    const int nickel {5};
    const int penny {1};

    int no_of_cents {0};
    cout <<  "Enter an amount in cents: ";
    cin >> no_of_cents;

    cout << "You can provide change for this change as follows: " << endl;

    cout << "dollars\t : " << no_of_cents / dollar << endl;
    no_of_cents %= dollar;

    cout << "quarters : " << no_of_cents / quarter << endl;
    no_of_cents %= quarter;

    cout << "dimes\t : " << no_of_cents / dime << endl;
    no_of_cents %= dime;

    cout << "nickel\t : " << no_of_cents / nickel << endl;
    no_of_cents %= nickel;

    cout << "pennie\t : " << no_of_cents / penny << endl;

    return 0;
}