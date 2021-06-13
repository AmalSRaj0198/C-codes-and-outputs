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

class two:public one
{
  int var3;
  public: 
          two()
          {
              var3=15;
          }
          void print()
          {
              std::cout<<"\nvalue of var3="<<var3<<"\nvalue of var2="<<var2;
          }
          
};

int main()
{
    one ob1;
    two ob2;
    ob1.display();
    ob2.print();
    return 0;
}

