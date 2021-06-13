#include<iostream>
class one
{
    int var1;
    public: 
            int var2;
            one()
            {
                var1=5;
                var2=30;
            }
            
            void display()
            {
                std::cout<<"value of var1="<<var1<<"\nvalue of var2="<<var2;
            }
};

class two
{
  int var3;
  public: 
          two()
          {
              var3=15;
          }
          void print()
          {
              std::cout<<"\nvalue of var3="<<var3;
          }
          
};

class three:public one,public two
{
    int var4;
    public:
            three()
            {
               var4=50; 
            }
            
            void call()
            {
                display();
                print();
            }
            
            void output()
            {
                std::cout<<"\n value of var4="<<var4;
            }
};

int main()
{
    one ob1;
    two ob2;
    three ob3;
    ob3.call();
    ob3.output();
    return 0;
}