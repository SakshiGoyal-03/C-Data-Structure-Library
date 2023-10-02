#include<stdio.h>
void printpattern(int);
main()
{
    int n;

    printf("Enter the n : ");
    scanf("%d",&n);
    printpattern(n);
}
void printpattern(int n)
{


    for(int i=0; i<9 ; i++)
    {
        for(int j =0 ; j<9 ; j++)
        {
            if(i==0 || i==8 || j==0 || j==8)
            {
                printf("%d ",n);
            }
        }
        printf("\n");

    }

}
