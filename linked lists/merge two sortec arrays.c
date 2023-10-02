#include<stdio.h>
main()
{


    int a[30],b[30],c[60];
    int i,j,k=0;
    int m,n;
    printf("Enter m and n: ");
    scanf("%d %d",&m,&n);

    printf("Enter array 1 ;");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter array 2:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    i=0;
    j=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else if(a[i]>b[j])
        {
            c[k]=b[j];
            j++;
            k++;
        }
        else
        {
            c[k]=a[i];
            i++;
            j++;
            k++;
        }
    }
    while(i<m)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<n)
    {
        c[k]=b[j];
        k++;
        j++;
    }
    printf("merge array : \n");
    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }

}
