
#include <iostream>
using namespace std;
class Fun_ovd
{
public:
        int a,b,sum,pdt,sub;
        
        Fun_ovd()
        {
            a=30;
            b=20;
        }
        
        void arithmetic(int a)
        {
             sum=a+b;
        }
        
        int arithmetic(void)
        {
             sub=a-b;
            return sub;
        }
        
        void arithmetic(int a, int b)
        {
             pdt=a*b;
        }
        
        void display()
        {
            std::cout<<"sum="<<sum<<std::endl<<"product="<<pdt;
        }
        
};


int main()
{
    Fun_ovd ob;
    ob.arithmetic(30);
    std::cout<<"Difference="<<ob.arithmetic()<<std::endl;
    ob.arithmetic(30,20);
    ob.display();
    return 0;
}