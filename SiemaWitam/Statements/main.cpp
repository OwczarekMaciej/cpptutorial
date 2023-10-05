#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{4, 2, 3, 1};
    int size = vec.size();
    char selection{};
    do
    {
        cout << "\n-----------------------------" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\n Enter your selection: " << endl;
        cin >> selection;

        switch (selection)
        {
        case 'P':
        case 'p':
            if (size == 0)
                cout << "[] - the list is empty" << endl;
            else
            {
                cout << "[ ";
                for (int num : vec)
                    cout << num << " ";
                cout << "]";
            }
            break;
        case 'A':
        case 'a':
        {
            int new_num{0};
            cout << "Enter an integer to add to the list: ";
            cin >> new_num;
            vec.push_back(new_num);
            cout << new_num << " added" << endl;
            break;
        }
        case 'M':
        case 'm':
        {
            if (size == 0)
                cout << "Unable to calculate the mean - no data" << endl;
            else
            {
                int total{0};
                double average{0};
                for (int num : vec)
                    total += num;
                average = static_cast<double>(total) / size;
                cout << "Mean value: " << average << endl;
            }
            break;
        }
        case 'S':
        case 's':
        {
            if (size == 0)
                cout << "Unable to determine the smallest number - list is empty" << endl;
            else
            {
                int smallest_num = vec.at(0);
                for(int num : vec)
                {
                    if(num < smallest_num)
                        smallest_num = num;
                }
                cout << "The smallest number is " << smallest_num << endl;
            }
            break;
        }
        case 'L':
        case 'l':
        {
            if (size == 0)
                cout << "Unable to determine the largest number - list is empty" << endl;
            else
            {
                int largest_num = vec.at(0);
                for(int num : vec)
                {
                    if(num > largest_num)
                        largest_num = num;
                }
                cout << "The largest number is " << largest_num << endl;
            }
            break;
        }
        default:
            cout << "Unknown selection, please try again" << endl;
        }
    } while (selection != 'q' && selection != 'Q');
    cout << "Goodbye" << endl;

    return 0;
}