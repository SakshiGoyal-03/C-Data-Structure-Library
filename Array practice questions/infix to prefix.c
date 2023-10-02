#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<string.h>
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
char pop()
{
    char a;
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
int isOperator(char symbol)
{
    if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '%' ||symbol == '+' || symbol == '-')
        return 1;
    else
        return 0;
}
int precedence(char symbol)
{
    printf("%c",symbol);
    if(symbol == '^')
        return 3;
    else if(symbol == '*' ||symbol == '/' ||symbol == '%')
        return 2;
    else if(symbol == '+' || symbol == '-')
        return 1;
    else
        return 0;
}
void prefixevaluation(char prefixexp[])
{
    int l,i,x,y,res,ans;
    char item;
    l = strlen(prefixexp)-1;
    for(i=l;i>=0;i--)
    {
        item = prefixexp[i];
        if(isdigit(item))
        {
            push(item-'0');
        }
        else
        {
            x =pop();
            y = pop();

            switch(item)
            {
            case '*':
                res = y*x;
                break;
            case '/':
                res = y/x;
                break;
            case '+':
                res = y+x;
                break;
            case '-':
                res = y-x;
                break;
            case '%':
                res = y%x;
                break;
            }
            push(res);

        }

    }
    ans = pop();
    printf("value is : %d",ans);
}
void prefixconversion(char postfixexp[])
{
    char prefixexp[50];
    int length;
    int i,j=0;
    length = strlen(postfixexp)-1;

    for(i=length; i>=0; i--)
    {
        prefixexp[j] = postfixexp[i];
        j++;
    }
    prefixexp[j] ='\0';
    printf("\nPrefix expression is : %s",prefixexp);

    prefixevaluation(prefixexp);
}

void postfixconversion(char reverseinfix[])
{
    strcat(reverseinfix,")");
    char postfix[50];
    int i=0;
    char item;
    int j=0;
     char x;
    push('(');
    while(reverseinfix[i] != '\0')
    {
        item  = reverseinfix[i];

        if(item == '(')
        {
            push(item);
        }
        else if(isdigit(item) || isalpha(item))
        {
            postfix[j] = item;
            j++;
        }
        else if(isOperator(item)  == 1)
        {

            x = pop();
            while((isOperator(x)==1 && (precedence(x)>= precedence(item))))
            {
                postfix[j]= x;
                printf("%d",x);
                j++;
                x = pop();
            }

            push(x);
            push(item);
        }
        else if(item == ')')
        {
            x =pop();

           while(x != '(')
          {
            postfix[j] = x;
            j++;
            x = pop();
          }
        }
        i++;
    }
     postfix[j]='\0';
    printf("\nPostfix Expression is : %s",postfix);

     prefixconversion(postfix);
}
main()
{
    char infix[50];
    char revinfix[50];
    int k,l=0;
    printf("Enter Infix Expression : ");
    scanf("%s",infix);
     k = strlen(infix)-1;
    while(k!=-1)
    {
        if(infix[k] == '(')
           {
               revinfix[l] = ')';
           }
         else if(infix[k] == ')')
         {
             revinfix[l] = '(';
         }
         else
         {
             revinfix[l] = infix[k];
         }
         l++;
         k--;
    }
    revinfix[l]='\0';
    printf("Reverse of infix expression : %s",revinfix);

    postfixconversion(revinfix);
}
