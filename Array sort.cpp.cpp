#include <iostream>
#include<algorithm>
int main()
{
  int array[10]={10,56,43,67,89,35,24,56,78,90},i,j;
  std::sort(array,array+10);
  std::cout<<"The sorted array is\n";
  for(i=0;i<10;i++)
  {std::cout<<array[i]<<' ';}
  
  return 0;
}