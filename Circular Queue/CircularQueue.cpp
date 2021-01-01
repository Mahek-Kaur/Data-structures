#include <iostream>
using namespace std;
struct node {
   int data;
   struct node *next;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;

void enqueue()
{
    temp=new node;
    int num;
    cout<<"Enter the value you want to insert - "<<endl;
    cin>>num;
    temp->data=num;
    temp->next=NULL;
    if(front==NULL)
    {
        front=temp;
        front->next=NULL;
        rear=temp;
        rear->next=front;
    }
    else{
        rear->next=temp;
        rear=temp;
        rear->next=front;
    }
    cout<<"Value inserted!!"<<endl;
}

void dequeue()
{
    if(front==NULL)
    {
        cout<<"Queue is empty!!"<<endl;
    }
    else if(rear==front)
    {
        cout<<"Deleted value is - "<<front->data<<endl;
        free(front);
        front=NULL;
        rear=NULL;
        cout<<"Value deleted!!"<<endl;
    }
    else{
        temp=front;
        rear->next=front->next;
        front=front->next;
        cout<<"Value deleted!!"<<endl;
        cout<<"Deleted value is - "<<temp->data<<endl;
        free(temp);
    }
}

void display()
{
    temp=front;
    if(front==NULL)
    {
        cout<<"Queue is empty!!"<<endl;
    }
    else{
        cout<<"Queue elements - "<<endl;
        while(temp->next!=front)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }
}

void peek()
{
    if(front==NULL)
    {
        cout<<"Queue is empty!!"<<endl;
    }
    else{
        cout<<"Front element is - "<<front->data<<endl;
    }
}

int main()
{
     int ch;
    while(1)
    {
        cout<<"\n Select -  \n 1. Insert element in Queue \n 2. Delete element from Queue \n 3. Display the front element \n 4. Display the Queue \n 5. Exit \n\n";
        cin>>ch;
        switch(ch)
        {
            case 1: {
                enqueue();
                break;
            }
            case 2: {
                dequeue();
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