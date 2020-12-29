#include <iostream>
using namespace std;
#define n 10
int queue[n],  front = - 1, rear = - 1;

void enqueue()
{
    int num;
    if(rear>=n-1)
    {
        cout<<"Queue is full!!"<<endl;
    }
    else{
        cout<<"\nEnter the number you want to insert"<<endl;
        cin>>num;
        if(front==-1)
        {
            front++;
        }
        rear++;
        queue[rear]=num;
        cout<<"Element inserted!!"<<endl;
    }
}

void dequeue()
{
    if(rear== -1 || front > rear)
    {
        cout<<"Queue is empty!!"<<endl;
    }
    else{
        cout<<"Element deleted is - "<<queue[front];
        front++;
    }
}

void peek()
{
    if(rear== -1 || front > rear)
    {
        cout<<"Queue is empty!!"<<endl;
    }
    else{
        cout<<"Front element is - "<<queue[front];
    }
}

void display()
{
    if(rear== -1 || front > rear)
    {
        cout<<"Queue is empty!!"<<endl;
    }
    else{
        cout<<"QUEUE : "<<endl;
        for(int i=front;i<=rear;i++)
        {
            cout<<queue[i]<<endl;
        }
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