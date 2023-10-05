#include <iostream>
#include <vector>

using namespace std;

void display_menu();
char get_selection();

void handle_display(const vector<int> &);
void handle_add(vector<int> &);
void handle_mean(const vector<int> &);
void handle_smallest(const vector<int> &);
void handle_largest(const vector<int> &);
void handle_find(const vector<int> &);

bool find_number(const vector<int> &vec, int target);
void print_vector(const vector<int> &);
double calc_average(const vector<int> &);
int find_smallest(const vector<int> &);
int find_largest(const vector<int> &);

int main()
{
    vector<int> vec{4, 2, 3, 1};
    char selection{};
    do
    {
        display_menu();
        selection = get_selection();
        switch (selection)
        {
        case 'P':
            handle_display(vec);
            break;
        case 'A':
            handle_add(vec);
            break;
        case 'M':
            handle_mean(vec);
            break;
        case 'S':
            handle_smallest(vec);
            break;
        case 'L':
            handle_largest(vec);
            break;
        case 'F':
            handle_find(vec);
            break;
        default:
            cout << "Unknown selection, please try again" << endl;
        }
    } while (selection != 'Q');
    cout << "Goodbye" << endl;

    return 0;
}

char get_selection()
{
    char selection;
    cout << "\n Enter your selection: " << endl;
    cin >> selection;
    return toupper(selection);
}

void display_menu()
{
    cout << "\n-----------------------------" << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "F - Find a number" << endl;
    cout << "Q - Quit" << endl;
}

void print_vector(const vector<int> &vec)
{
    cout << "[ ";
    for (int num : vec)
        cout << num << " ";
    cout << "]";
}

void handle_display(const vector<int> &vec)
{
    if (vec.size() == 0)
        cout << "[] - the list is empty" << endl;
    else
        print_vector(vec);
}

void handle_add(vector<int> &vec)
{
    int new_num{0};
    cout << "Enter an integer to add to the list: ";
    cin >> new_num;
    vec.push_back(new_num);
    cout << new_num << " added" << endl;
}

double calc_average(const vector<int> &vec)
{
    int total{0};
    double average{0};
    for (int num : vec)
        total += num;
    return average = static_cast<double>(total) / vec.size();
}

void handle_mean(const vector<int> &vec)
{
    if (vec.size() == 0)
        cout << "Unable to calculate the mean - no data" << endl;
    else
    {
        double average = calc_average(vec);
        cout << "Mean value: " << average << endl;
    }
}

int find_smallest(const vector<int> &vec)
{
    int smallest_num = vec.at(0);
    for (int num : vec)
    {
        if (num < smallest_num)
            smallest_num = num;
    }
    return smallest_num;
}

int find_largest(const vector<int> &vec)
{
    int largest_num = vec.at(0);
    for (int num : vec)
    {
        if (num > largest_num)
            largest_num = num;
    }
    return largest_num;
}

void handle_smallest(const vector<int> &vec)
{
    if (vec.size() == 0)
        cout << "Unable to determine the smallest number - list is empty" << endl;
    else
    {
        int smallest_num = find_smallest(vec);
        cout << "The smallest number is " << smallest_num << endl;
    }
}

void handle_largest(const vector<int> &vec)
{
    if (vec.size() == 0)
        cout << "Unable to determine the largest number - list is empty" << endl;
    else
    {
        int largest_num = find_largest(vec);
        cout << "The largest number is " << largest_num << endl;
    }
}

void handle_find(const vector<int> &vec)
{
    int target{};
    cout << "Enter the number to find: ";
    cin >> target;
    if( find_number(vec, target))
    {
        cout << target << " was found";
    }
    else
        cout << target << " wasn't found";
}

bool find_number(const vector<int> &vec, int target)
{
    for(auto num : vec)
        if(num == target)
            return true;
    return false;
}
