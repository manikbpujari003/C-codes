#include<stdio.h>
void Even(int,int);
main()
{
    int Llimit;
    int Ulimit;
    printf("Enter the range\n");
    scanf("%d%d",&Llimit,&Ulimit);
    Even(Llimit,Ulimit);
}

void Even(int L,int U)
{
int i;
i=L;
while(i<=U)
{
    if(i%2==0)
    printf("%d\n",i);
    else
    printf("Hello....!\n");
    i++;
}
i++;
}
