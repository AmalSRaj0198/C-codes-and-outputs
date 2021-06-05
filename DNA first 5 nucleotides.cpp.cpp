
#include <iostream>
#include<cstring>
int main()
{
  char dna_seq[300];int dna_length;
  std::cout<<"Input the DNA sequence";
  gets(dna_seq);
  dna_length=strlen(dna_seq);
  std::cout<<"The length of dna_seq="<<dna_length<<std::endl;
  std::cout<<"The first 5 nucleotides are\n";
  for(int i=0;i<5;i++)
  {std::cout<<dna_seq[i];}
  
  return 0;
}