#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class Test {
private:
    int data;
public:
    Test(): data{0} { std::cout << "Test constructor (" << data << ")" << std::endl;}
    Test(int data): data{data} { std::cout << "Test constructor (" << data << ")" << std::endl;}
    int get_data() const {return data; }
    ~Test() {std::cout << "Test desctructor (" << data << ")" << std::endl; }
};

using namespace std;

int main(int argc, char const *argv[])
{

    //Test *t1 = new Test(1000);   
    //delete t1; 
    std::unique_ptr<Test> t1 {new Test {100}};
    std::unique_ptr<Test> t2 = std::make_unique<Test>(1000);

    std::unique_ptr<Test> t3;
    t3 = std::move(t1);

    return 0;
}
