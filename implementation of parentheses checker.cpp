#include<iostream>
#include<string.h>
#define max 10
using namespace std;
int stk[max];
int top=-1;
void push(char x);
char pop();
int main()
{

    char exp[max];
    int flag=1;
    char temp;
    cout<<"Enter an expression";
    gets(exp);
    for(int i=0;i<strlen(exp);i++)
    {
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
            push(exp[i]);
        if(exp[i]==')' || exp[i]=='}'||exp[i]==']')
        {
            if(top==-1)
                flag=0;
            else
            {
                temp=pop();
                if(exp[i]==')'&&(temp=='{'||temp=='['))
                    flag=0;
                if(exp[i]=='}'&&(temp=='('||temp=='['))
                    flag=0;
                if(exp[i]==']'&&(temp=='('||temp=='{'))
                    flag=0;
            }
        }
    }
    if(top>=0)
    {

        flag=0;
    }
    if(flag==1)
        cout<<"Valid expression\n";
    else
        cout<<"Invalid expression\n";

}
void push(char x)
           {
               if(top==(max-1))
                cout<<"\nStack is overflow\n";
               else
               {
                   top=top+1;
                   stk[top]=x;
               }

           }
char pop()
{
    if(top==-1)
        cout<<"\nunderflow\n";
    else
    {
        return(stk[top--]);
    }
}
