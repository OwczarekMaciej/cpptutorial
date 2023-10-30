#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int grade(string &first, string &second)
{
    int score = 0;
    for (size_t i = 0; i < first.length(); i++)
    {
        if (first[i] == second[i])
            score++;
    }
    return score;
}

int main(int argc, char const *argv[])
{
    fstream in_file;
    in_file.open("responses.txt");
    if (!in_file)
    {
        cerr << "Cannot open the file" << endl;
        exit(1);
    }
    string key;
    in_file >> key;
    string name;
    string response;
    double average;
    int score;
    int num = 0;

    cout << setw(15) << left << "Student"
         << setw(5) << right << "Score" << endl;

    cout << setw(20) << setfill('-') << "" << endl;
    cout << setfill(' ');

    while (!in_file.eof())
    {
        in_file >> name;
        in_file >> response;
        score = grade(key, response);
        cout << setw(15) << left << name
             << setw(5) << right << score
             << endl;
        num++;
        average += score;
    }
    average = average/num;
    cout << setw(20) << setfill('-') << "" << setfill(' ') << endl;
    cout <<  setw(15) << left << "Average score"
        << setw(5) << right << average << endl;

    in_file.close();
    

    return 0;
}
