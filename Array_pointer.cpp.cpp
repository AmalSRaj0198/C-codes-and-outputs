
#include <iostream>
int main()
{
  int array[10]={10,87,67,90,56,76,56,23,47,100},*pointer;
  pointer=array;
  std::cout<<"The array elements are\n";
  
  for(int i=0;i<10;i++)
  {std::cout<<*(pointer+i)<<' ';}
  
  return 0;
}