/*:Write a C program to print fibonacii series upto N digits.
Fibonacii Series: 0,1,1,2,3,5,8,13,.................*/
#include<stdio.h>
main()
{
int N;
int i;
int a = 0;
int b = 1;
int c;
printf("Enter N\n");
scanf("%d",&N);
printf("Fibonaci series:\n");
printf("%d\n%d\n",a,b);
for(i=1;i<=N-2;i++)
{
    c = a+b;
    printf("%d\n",c);
    a = b;
    b = c;
}
}
