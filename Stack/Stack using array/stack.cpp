#include <iostream>
using namespace std;
#define n 10
int  stack[n], top=-1;

void push()
{
    int num;
    cout<<"Enter the number you want to insert -"<<endl;
    cin>>num;
    if(top>=n-1)
    {
        cout<<"\nStack Overflow!!"<<endl;
    }
    else{
        top++;
        stack[top]=num;
        cout<<"\nElement inserted!!"<<endl;
    }
}

void pop()
{
    int x;
    if(top<0)
    {
        cout<<"\nStack Underflow!!"<<endl;
    }
    else{
        x=stack[top];
        top--;
        cout<<"\nElement deleted!!"<<endl;
        cout<<"Deleted Element is - "<<x<<endl;
    }
}

void peek()
{
    if(top<0)
    {
        cout<<"\nStack is empty!!"<<endl;
    }
    else{
        cout<<"\nTop most element is - "<<stack[top]<<endl;
    }
}

void display()
{
    if(top<0)
    {
        cout<<"\nStack is empty!!"<<endl;
    }
    else{
        cout<<"\nStack elements - "<<endl;
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<endl;
        }
    }
}

int main()
{
    int ch;
    while(1)
    {
        cout<<"\n Select -  \n 1. Insert in stack \n 2. Delete from stack \n 3. Display the top element \n 4. Display the stack \n 5. Exit \n\n";
        cin>>ch;
        switch(ch)
        {
            case 1: {
                push();
                break;
            }
            case 2: {
                pop();
                break;
            }
            case 3: {
                peek();
                break;
            }
            case 4: {
                display();
                break;
            }
            case 5: {
                cout<<"Exit!!"<<endl;
                exit(0);
            }
            default: {
                cout<<"Invalid choice!!!"<<endl;
            }
        }
    }
    return 0;
}