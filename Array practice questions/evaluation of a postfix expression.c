#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char stack[50];
int top = -1;
int size = 50;
void push(int item)
{
    if(top == size-1)
    {
        return;
    }
    else
    {
        top++;
        stack[top] = item;
    }

}
int pop()
{
    int a;
    if(top == -1)
    {
        return;
    }
    else
    {
        a = stack[top];
        top--;

        return a;

    }
}
void evaluation(char postfix[])
{
    int x,y,res;
    char value;
    int i=0;

     printf("Postfix expression is : %s",postfix);

    while(postfix[i]!= '\0')
    {

        value = postfix[i];
        i++;

        if(isdigit(value))
        {
            push(value-'0');

        }
        if(value == '/' || value == '*' || value =='+' || value == '-')
        {
            x = pop();


            y = pop();


            switch(value)
            {
               case '/':
                   res = y/x;
                   break;
                case '*':
                     res = y*x;
                       break;
                case '%':
                  res = y%x;
                  break;
                case '+':
                   res = y+x;
                   break;
                case '-':
                res = y-x;
                break;

            }

            push(res);

        }

    }
    int ans = pop();
    printf("\n%d",ans);
}
main()
{
    char postfix[50];
    printf("Enter the postfix expression: \n");
    scanf("%s",postfix);

     evaluation(postfix);

}

