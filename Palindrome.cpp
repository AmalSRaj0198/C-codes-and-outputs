#include <iostream>
#include<cstring>
int main()
{
  char string[50];
  int length,i,j,count=0;
  std::cout<<"Input the DNA sequence\n";
  gets(string);
  length=strlen(string);
  
  for(i=0,j=length-1;i<=j;i++,j--)
  {
      if(string[i]==string[j])
          count=1;
  else
       break;

 }
 
  if(count==1)
  std::cout<<"The entered string is a palindrome";
  else
       if(count==0)
  std::cout<<"The entered string is not a palindrome";
  
  return 0;
 }