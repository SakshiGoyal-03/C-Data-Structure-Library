#include<stdio.h>

int getSum(int num)
{
    if(num == 0)
        return 0;
    if(num == 1)
        return 1;
    return(num + (getSum(num-1)));
}

main()
{
    int n,sum;
    printf("Enter the value of n : \n");
    scanf("%d",&n);
    printf("\n");
    sum = getSum(n);
    printf("Sum of fist %d natural numbers is %d ",n,sum);
}
