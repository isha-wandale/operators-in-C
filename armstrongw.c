#include<stdio.h>
int main()
{
int n,num,rem,sum;

  for(num=100;num<=999;num++)
  {
  sum=0;
  n=num;
  while(n>0)
  {
  rem=n%10;
  sum=sum+(rem*rem*rem);
  n=n/10;
  }
  if(num==sum)
  {
  printf("%d\n",num);
  }
  }
  }
 
  /*
  output:
  ccf@ccf-Precision-Tower-3431:~$ gcc amsteongw.c
ccf@ccf-Precision-Tower-3431:~$ ./a.out
153
370
371
407

 */
