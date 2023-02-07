#include<stdio.h> 
int main()
{
int a,b;

printf("enter the values for a and b");
scanf("%d%d",&a,&b);
printf("a=%d \n",a=b );
printf("a=%d \n",a+=b );
printf("a=%d \n",a-=b );
printf("a=%d \n",a*=b );
printf("a=%d \n",a/=b);
}








/*

output:
ccf@ccf-Precision-Tower-3431:~$ gcc assinw.c
ccf@ccf-Precision-Tower-3431:~$ ./a.out
enter the values for a and b20 10
a=10 
a=20 
a=10 
a=100 
a=10 

*/
