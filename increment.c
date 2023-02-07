#include <stdio.h>
int main()
{
  int a;
  printf("enter the value of a\n");
  scanf("%d",&a);
  printf("the prifix increatment of a is : %d \n",++a);
  printf("the postfix increatment of a is :%d \n",a++);
  printf("the current value of a is: %d \n",a);
  printf("the prefix decretment of a is :%d \n", --a);
  printf(" the postfix decrement of a is :%d \n",a--);
  printf("the current value of a is :%d \n",a);
  }
  
  
  
  
  
  
  
  
  /*
  output:
  ccf@ccf-Precision-Tower-3431:~$ gcc increment.c
ccf@ccf-Precision-Tower-3431:~$ ./a.out
enter the value of a
6
the prifix increatment of a is : 7 
the postfix increatment of a is :7 
the current value of a is: 8 
the prefix decretment of a is :7 
 the postfix decrement of a is :7 
the current value of a is :6 
  
  
  */


  
