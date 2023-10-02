
#include<stdio.h>
int pivot(int a[],int s, int e, int size)
{
    int mid;
    int i,sum1=0,sum2=0;
    mid = s + (e-s)/2;
    while(mid !=(size-1) && mid!=-1)
    {
        for(i=0;i<mid;i++)
        {
            sum1 +=a[i];
        }


        for(i=mid+1;i<size;i++)
        {
            sum2 +=a[i];
        }


        if(sum1==sum2)
            return mid;
        else if(sum1 > sum2)
            mid--;
        else
            mid++;
       sum1 =0;
       sum2=0;
    }
    return -1;
}
main()
{

    int arr[3]={2,1,-1};
    int size = 3;
    int start =0;
    int end = size-1;
    int index;

   index =   pivot(arr,start,end,3);
   printf("Index is at %d",index);

}
