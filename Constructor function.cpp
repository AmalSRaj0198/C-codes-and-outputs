#include<string>
#include <iostream>
using namespace std;
class Constructor
{

public:
    string name;
    int age;
    Constructor()
    {
        name="Arjun";
        age=19;
    }
    
    void print()
    {
        std::cout<<"The name that is initalised using the consstructor is"<<' '<<name<<std::endl;
        std::cout<<"The age that is initialised using the constructor is"<<' '<<age;
    }
    
};