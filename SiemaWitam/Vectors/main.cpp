  #include <iostream>
  #include <vector>

  using namespace std;

  int main()
  {
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "\nFirst element in vector 1: " << vector1.at(0) << endl;
    cout << "Second element in vector 1: " << vector1.at(1) << endl;
    cout << "Size of vector 1: " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "\nFirst element in vector 2: " << vector2.at(0) << endl;
    cout << "Second element in vector 2: " << vector2.at(1) << endl;
    cout << "Size of vector 2: " << vector1.size() << endl;

    vector <vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
   
    cout << "\nVector_2D elements: " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << "\nVector_2D elements again: " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

  }