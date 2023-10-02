#include<stdio.h>

int getpivot(int arr[], int size)
{
    int s=0;
    int e = size-1;
    int mid;
    mid = s +(e - s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
           s = mid+1;
        }
        else
        {
            e = mid;
        }
         mid = s +(e - s)/2;
    }
    return s;
}
main()
{
    int pivotindex;
    int a[5] = {5,6,1,2,4};
     pivotindex = getpivot(a,5);
     printf(" Index = %d",pivotindex);
}
