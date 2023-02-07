#include <stdio.h>
void main()
{
int a,b,AND,OR,XOR,BC,LS,RS;

printf("enter rhe the values for a and b");
scanf("%d%d",&a,&b);

      AND=(a&b);
      OR=(a|b);
      XOR=(a^b);
      BC=(~a);
      RS=(a>>2);
      LS=(b<<2);
      printf("AND operator value %d\n",AND);
      printf("XOR operator value %d\n",XOR);
      printf("OR operator value %d\n",OR);
      printf("BC operator value %d\n",BC);
      printf("RS operator value %d\n",RS);
      printf("LS operator value %d\n",LS);
      
      }
      
      
  /*    
      
 output:
 ccf@ccf-Precision-Tower-3431:~$ gcc bitwise.c
ccf@ccf-Precision-Tower-3431:~$ ./a.out
enter rhe the values for a and b
10 30
AND operator value 10
XOR operator value 20
OR operator value 30
BC operator value -11
RS operator value 2
LS operator value 120
ccf@ccf-Precision-Tower-3431:~$ 


      
    */  
      
      

           
       

