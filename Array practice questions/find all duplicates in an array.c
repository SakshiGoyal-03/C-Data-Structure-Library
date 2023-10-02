#include<stdio.h>
main()
{
    int i;
    int flag,j;
    int array[10] = {1,2,2,3,3,4,5,6,6,7,7};
    int ans=0;
    for(j=1;j<10;j++)
    {
        for(i=0;i<10;i++)
        {
            ans = array[i]^j;
            if(ans == 0)
                flag++;
            if(flag == 2)
            {
                printf("%d ",array[i]);
            }
            flag=0;
        }











    }
}


