#include<stdio.h>
main()
{
    char str[6];
    int start = 1;
    int end = 4;
    char temp;
    scanf("%s",str);

        while(start<end)
        {
            printf("\nstart = %d",start);
            printf("\nend = %d",end);
            temp = str[start];
            printf("%c %c ", str[start],temp);
            str[start] = str[end];
            str[end] = temp;
            printf(" end here is %c",str[end]);
            start++;
            end--;

        }
        printf("size = %d", sizeof(str));
fflush(stdin);
    printf("\n string =%s",str);
}
