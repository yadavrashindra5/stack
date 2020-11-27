/*stack is the most important data structure which is used to store elements at the top most in the stack
                       representation of stack:
                       1: Array representation
                       2:Linked list representation

                       operation on stack:
                       1:push operation
                       2:pop operation
                       3:peek operation

*/


/*Array Representation*/
#include<iostream>
#define max 10
using namespace std;
int arr[max];
int top=-1;
void push(int arr[],int value)
{
    if(top==max-1)
    {
        cout<<"STACK OVERFLOW\n";

    }
    else
    {
        top++;
        arr[top]=value;
    }
}

int  pop(int arr[])
{
    if(top==-1)
    {
        cout<<"STACK UNDERFLOW\n";
    }
    int x=arr[top];
    top--;
    return x;
}

int  peek(int arr[])
{
    if(top==-1)
    {
        cout<<"STACK IS EMPTY\n";
        return -1;
    }
    else
    {
        int x=arr[top];
        return x;
    }
}


void display(int arr[])
{
    if(top==-1)
    {
        cout<<"STACK IS EMPTY\n";
    }
    for(int i=top;i>=0;i--)
    {
        cout<<arr[i]<<"\n";
    }
}

                          /*STACK IMPLEMENTATION USING LINKED LIST*/
                          /*STACK IS LIFO means Last In First Out*/






class Node{
int Data;
Node *next;
public:
    void push(int x);
    void pop();
    void peek();
    void display();
};
Node *head=NULL;
void Node::push(int x)
{   Node *temp=head;
    Node *newnode=new Node();
    newnode->Data=x;
    newnode->next=head;
    head=newnode;
}
void Node::pop()
{
    if(head==NULL)
    {
        cout<<"UNDER FLOW\n";

    }
    else{
        head=head->next;
    }
}
void Node::peek()
{
    if(head==NULL)
    {
        cout<<"stack is empty\n";
    }
    else{
        cout<<head->Data<<"\n";
    }
}
void Node::display()
{   Node *temp=head;
    if(head==NULL)
    {
        cout<<"stack is empty\n";
    }
    else{
        while(temp!=NULL)
        {
            cout<<"Data : "<<temp->Data<<"\n";
            temp=temp->next;
        }
    }
}

int main()
{
    void array();
    void linkedlist();
    do{
            cout<<"1:STACK IMPLEMENTATION USING ARRAY \n";
            cout<<"2:STACK IMPLEMENTATION USING LINKED LIST \n";
            cout<<"3:EXIT\n";
            cout<<"ENTER YOUR CHOICE\n";
            int x;
            cin>>x;
            if(x==3)
                break;
            switch(x)
            {
            case 1:
                array();
                break;
            case 2:
                linkedlist();
                break;
            }
    }while(true);





}
void linkedlist()
{
    Node n;
    do{
        cout<<"1:push\n";
        cout<<"2:pop\n";
        cout<<"3:peek\n";
        cout<<"4:display\n";
        cout<<"5:Exit\n";
        int choice;
        cout<<"\nEnter your choice \n";
        cin>>choice;
        if(choice==5)
            break;
        switch(choice)
        {
        case 1:
            cout<<"Enter the data you want to push into the stack \n";
            int x;
            cin>>x;
            n.push(x);
            break;
        case 2:
            n.pop();
            break;
        case 3:
            n.peek();
            break;
        case 4:
            n.display();
            break;
        }
        cout<<"\n";

    }while(true);

}
void array()
{
    int z;

do{

    cout<<"MAIN MENU\n";
    cout<<"1:PUSH\n";
    cout<<"2:POP\n";
    cout<<"3:PEEK\n";
    cout<<"4:DISPLAY\n";
    cout<<"5:Exit\n";
    cout<<"\nEnter your choice\n";
    int choice;
    cin>>choice;
    if(choice==5)
    {
        break;
    }
    switch(choice)
    {
    case 1:
        cout<<"Enter the value you want to push\n";
        int x;
        cin>>x;
        push(arr,x);
        break;
    case 2:

         z=pop(arr);
        if(z!=-1)
        {
            cout<<"Popped value "<<z<<"\n";
        }
        break;
    case 3:
        z=peek(arr);
        if(z!=-1)
        {
            cout<<"peek value is"<<z<<"\n";
        }
        break;
    case 4:
        display(arr);
        break;



}

}while(true);
}





