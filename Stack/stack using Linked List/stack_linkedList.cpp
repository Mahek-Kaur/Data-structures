#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* top = NULL;

void push()
{
    int num;
    cout<<"\nEnter the element you want to insert - "<<endl;
    cin>>num;
    struct Node* newnode=new Node;
    newnode->data=num;
    newnode->next=top;
    top=newnode;
    cout<<"\nElement inserted!!"<<endl;
}

void pop()
{
    if(top==NULL)
    {
        cout<<"\nStack is empty!!"<<endl;
    }
    else{
        struct Node* temp;
        temp=top;
        cout<<"\nDeleted!!"<<endl;
        cout<<"Deleted Element is - "<<top->data<<endl;
        top=top->next;
        free(temp);
    }
}

void peek()
{
    if(top==NULL)
    {
        cout<<"\nStack is empty!!"<<endl;
    }
    else{
        cout<<"\n Top most element is - "<<top->data<<endl;
    }
}

void display()
{
    struct Node* head;
    if(top==NULL)
    {
        cout<<"\nStack is empty!!"<<endl;
    }
    else{
        head=top;
        cout<<"\nStack elements - "<<endl;
        while(head != NULL)
        {
            cout<<head->data<<endl;
            head=head->next;
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