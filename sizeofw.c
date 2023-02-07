#include<stdio.h>
int main()
{
  int a;
  float b;
  double c;
  char d;
  printf("size of int:%ld bytes\n",sizeof(a));
  printf("size of float:%ld bytes\n",sizeof(b));
  printf("size of double:%ld bytes\n",sizeof(c));
  printf("size of char:%ld byte\n",sizeof(d));
  return 0;
  
  }
  
  
  
  
  
  
  
  
 /* 
  output:
        ccf@ccf-Precision-Tower-3431:~$ ./a.out
size of int:4 bytes
size of float:4 bytes
size of double:8 bytes
size of char:1 byte
*/
