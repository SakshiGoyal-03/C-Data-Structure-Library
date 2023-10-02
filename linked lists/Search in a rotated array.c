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
void binarysearch(int arr[], int s, int e, int n)
{
    int mid;
    mid = s +(e-s)/2;
    while(s<e)
    {
        if(arr[mid] == n)
        {
            printf("target is at index = %d",mid);
        }
        else if(arr[mid]>n)
        {
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
}
main()
{
    int array[5] = {7,9,1,2,3};
    int target;
    int size =5;
    int pivot,start =0, end = size-1;
    printf("Enter a element to be searched : ");
    scanf("%d",&target);

    pivot = getpivot(array,5);

    if(array[pivot]<=target && array[pivot]>=target)
         binarysearch(array,pivot,end,target);
    else
         binarysearch(array,start,pivot-1,target);

}
