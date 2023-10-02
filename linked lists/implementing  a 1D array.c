#include<stdio.h>
main()
{
            int a[30];
            int n,element,key,temp,pos,flag=0,j;
            int i;
            int choice;
    do{
        printf("\nEnter choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:

            printf("Enter size of the array: ");
            scanf("%d",&n);
            printf("Enter elements of the array : ");
            for(i=0;i<n;i++)
            {

                scanf("%d",&a[i]);
            }
            break;

        case 2:
            printf("enter element to be inserted : ");
            scanf("%d",&element);

            printf("Enter element after which you want to insert : ");
            scanf("%d",&key);

            for(i=0;i<n;i++)
            {
                if(a[i]==key)
                {
                    pos = i;
                    break;
                }
            }
            for(i=n-1;i>pos;i++)
            {
                a[i+1] = a[i];
            }

            a[pos+1] = element;
            printf("%d",a[pos+1]);
            n++;
            break;

        case 3:
            printf("enter element to be deleted : ");
            scanf("%d",&element);
            for(i=0;i<n;i++)
            {
                if(a[i]==element)
                {
                    pos = i;
                    break;
                }
            }
            for(i=pos;i<n;i++)
            {
                a[i]=a[i+1];
            }
            n--;
            break;

        case 4:
            printf("enter element to be searched : ");
            scanf("%d",&element);
            for(i=0;i<n;i++)
            {
                if(a[i]==element)
                {
                    printf("Element found at %d index ",i);
                    flag++;
                    break;
                }


            }
            if(flag==0)
                {
                    printf("Element is not found");
                }
            break;

        case 5:
            for(i=1;i<n;i++)
            {
                for(j=0;j<n-i;j++)
                {
                    if(a[j]>a[j+1])
                    {
                        temp = a[j];
                        a[j] = a[j+1];
                        a[j+1] = temp;
                    }
                }
            }
            break;

            case 6: exit(0);

          default: printf("Invalid choice");
        }

        printf("\nAfter operation array becomes : ");
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
    }while(choice!=6);
}
