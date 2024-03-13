//	Write a C program to check whether the given number is prime or not.
#include <stdio.h>
void PrimeCheck(int N);
 main()
  {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    PrimeCheck(n);
}
void PrimeCheck(int N)
{
int i;
int flag=0;
    for (i = 2; i <= N / 2; ++i)
    {
        // condition for non-prime
        if (N% i == 0) {
            flag = 1;
            break;
        }
    }

    if (N == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)
            printf("%d is a prime number.", N);
        else
            printf("%d is not a prime number.", N);
    }


}
