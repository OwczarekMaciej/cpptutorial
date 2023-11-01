#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    fstream in_file;
    in_file.open("romeoandjuliet.txt");
    if (!in_file)
    {
        cerr << "Cannot open the file" << endl;
        exit(1);
    }

    ofstream out_file;
    out_file.open("romeoandjuliet_copy.txt");
    if (!out_file)
    {
        cerr << "Cannot open the file" << endl;
        exit(1);
    }

    long counter{};
    string line;

    while (getline(in_file, line))
    {
        counter++;
        out_file << setw(7) << left << counter
                 << line << endl;
    }

    cout << "File copied" << endl;

    in_file.close();
    out_file.close();

    return 0;
}
