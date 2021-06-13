#include <iostream>
class Classroom
{

public:
    char cl_name[20];
    int no_students;
    void print(char cl_name[20],int no_students)
    {
        std::cout<<"The class name is"<<' '<<cl_name<<std::endl<<"The number of students in the class="<<no_students;
    }
    
};

int main()
{
    Classroom ob;
    ob.print("M.Tech Computational Biology",16);
    return 0;
}