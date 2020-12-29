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
    int num;
    cout<<"Enter the value you want to insert - "<<endl;
    cin>>num;
    temp=new node;
    temp->data=num;
    temp->next=NULL;
    if(rear==NULL)
    {
        rear=temp;
        front=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
    cout<<"Element inserted!!"<<endl;
}

void dequeue()
{
    if(front==NULL)
    {
        cout<<"Queue is empty!!"<<endl;
    }
    else{
        temp=front;
        front=front->next;
        cout<<"Element deleted!!"<<endl;
        cout<<"Deleted element is - "<<temp->data<<endl;
        free(temp);
    }
}

void display()
{
    if(front==NULL)
    {
        cout<<"Queue is empty!!"<<endl;
    }
    else{
        temp=front;
        cout<<"Queue elements - "<<endl;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
}

void peek()
{
    if(front==NULL)
    {
        cout<<"Queue is empty!!"<<endl;
    }
    else{
        cout<<"First element is - "<<front->data<<endl;
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