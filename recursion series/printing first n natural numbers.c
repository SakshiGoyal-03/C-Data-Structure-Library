#include<stdio.h>
#include<stdlib.h>

void print(int n)
{
    //base case
    if(n==0)
        return;



    //recursive relation
    print(n-1);

    //processing part

    printf("%d  ",n);

    //tail recursion
}

main()
{
    int n;
    printf("Enter the value of n : \n");
    scanf("%d",&n);

    printf("\n");
    print(n);
}
