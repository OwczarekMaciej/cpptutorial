#include <iostream>

using namespace std;

int main()
{
    const double price_per_small_room {25};
    const double price_per_large_room {35};
    const double tax_rate {0.06};
    const int days {30};

    cout << "Hello, welcome to Fank's Carpet Cleaning Service!\n\n";

    cout << "How many small rooms would you like cleaned?: ";
    int small_rooms {0};
    cin >> small_rooms;

    cout << "How many large rooms would you like cleaned?: ";
    int large_rooms {0};
    cin >> large_rooms;

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl << "Number of large rooms: " << large_rooms << endl;

    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;

    double cost;
    cost = (price_per_small_room * small_rooms) + (price_per_large_room * large_rooms);

    cout << "Cost: $" << cost << endl;

    double tax;
    tax = cost * tax_rate;
    cout << "Tax: $" << tax << endl;
    cout << "==============================" << endl;
    
    cout << "Total estimate: $" << cost + tax << endl;
    cout << "This estimate is valid for " << days << " days"<< endl;

    return 0;
}