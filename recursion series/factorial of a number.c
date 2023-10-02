#include<stdio.h>

int factorial(int n)
{
    //base condition
    if(n==0)
        return 0;
    if(n==1)
        return 1;

    //recursive relation
    return(n*(factorial(n-1)));
}
main()
{
    int num;
    printf("Enter a number : \n");
    scanf("%d",&num);
    int fact = factorial(num);
    printf("Factorial of %d is %d ",num,fact);

}
