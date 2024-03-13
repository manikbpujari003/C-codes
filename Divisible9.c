int DiviseNine(int N);
#include<stdio.h>
main()
{
    int N;
    int sum;
    printf("Enter A number\n");
    scanf("%d",&N);
    sum=DeviseNine(N);
    if(sum==1)
    printf("%d is Divisible by 9",N);
    else
     printf("%d is not Divisible by 9",N);
    }

int DeviseNine(int N)
{
     int sum=0;
     int r;
     while(N!=0)  //
     {
         r=N%10; //extracting last digit
         sum+=r;
         N=N/10;
    }
    if(sum%9==0)
    return 1;
    else
    return 0;
}
