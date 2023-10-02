#include<stdio.h>
int ans =-1;
int ans2 = -1;
void firstocc(int arr[], int s, int e, int k)
{
    int mid;
    mid = s + (e-s)/2;

    if(s>e)
    {
        printf("first occurrence =  %d\n", ans);
        return;
    }


    if(arr[mid]==k)
    {
        ans = mid;

       firstocc(arr,s,mid-1,k);

    }
    else if(arr[mid]>k)
    {
         firstocc(arr,s,mid-1,k);
    }
    else
    {
         firstocc(arr,mid+1,e,k);
    }

}

void lastocc(int arr[], int s, int e, int k)
{
    int mid;
    mid = s+ (e-s)/2;
    if(s>e)
    {

        printf("last occurrence %d",ans2);
        return;
    }
    if(arr[mid] == k)
    {
        ans2 = mid;
         lastocc(arr,mid+1,e,k);
    }
    else if(arr[mid]>k)
    {
        lastocc(arr,s,mid-1,k);
    }
    else{
         lastocc(arr,mid+1,e,k);
    }
}
main()
{
    int array[6] = {1,2,3,3,3,4};
    int size = 6;
    int s =0;
    int e = size-1;
    int key=3;
    int index;


   firstocc(array,s,e,key);

    lastocc(array,s,e,key);

    printf("\ntotal no. of occurrence  = %d",(ans2-ans)+1);


}

