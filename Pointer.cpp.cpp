
#include <iostream>
int main()
{
  int *p,var=10;
  p=&var;
  std::cout<<"The value stored in var="<<*p<<"\nThe memmory adress of var="<<p;
  *p=*p+5;
  std::cout<<"\nThe new value of var="<<*p;
  
  return 0;
}