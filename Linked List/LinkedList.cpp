#include <iostream>
using namespace std;
struct node {
   int data;
   struct node *next;
};
struct node* head = NULL;
struct node* temp ;
struct node* newnode;
struct node* prevnode;

void insert_start()
{
    int num;
    cout<<"Enter the number you want to insert - "<<endl;
    cin>>num;
    newnode=new node;
    newnode->data=num;
    newnode->next=head;
    head=newnode;
    cout<<"Element inserted!!"<<endl;
}

void insert_end()
{
    int num;
    cout<<"Enter the number you want to insert - "<<endl;
    cin>>num;
    newnode=new node;
    newnode->data=num;
    newnode->next=NULL;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    cout<<"Element inserted!!"<<endl;
}

void insert_pos()
{
    int pos;
    int i=1;
    int num;
    int count=0;
    newnode=new node;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
        count++;
    }
    cout<<"Enter the position after which you want to insert - "<<endl;
    cin>>pos;
    if(pos>count || pos<1)
    {
        cout<<"Invalid position!!"<<endl;
    }
    else{
        temp=head;
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
        cout<<"\nEnter the number you want to insert - "<<endl;
        cin>>num;
        newnode->data=num;
        newnode->next=temp->next;
        temp->next=newnode;
        cout<<"Element inserted!!"<<endl;
    }

}

void del_start()
{
    if(head==NULL)
    {
        cout<<"List is empty!!"<<endl;
    }
    else{
        temp=head;
        head=head->next;
        cout<<"Deleted value is - "<<temp->data<<endl;
        free(temp);
    }
}

void del_end()
{
    if(head==NULL)
    {
        cout<<"List is empty!!"<<endl;
    }
    else{
        temp=head;
        while(temp->next!=NULL)
        {
            prevnode=temp;
            temp=temp->next;
        }
        if(temp==head)
        {
            head=NULL;
            cout<<"Element deleted!!"<<endl;
            cout<<"Element deleted is - "<<temp->data<<endl;
            free(temp);
        }
        else{
            prevnode->next=NULL;
            cout<<"Element deleted!!"<<endl;
            cout<<"Element deleted is - "<<temp->data<<endl;
            free(temp);
        }
    }
}

void del_pos()
{
    int pos;
    int i=1;
    int count=0;
    if(head==NULL)
    {
        cout<<"List is empty!!"<<endl;
    }
    else{
        cout<<"Enter the position - "<<endl;
        cin>>pos;
        temp=head;
        while(temp->next!=0)
        {
            temp=temp->next;
            count++;
        }
        if(pos>count)
        {
            cout<<"Invalid position!!"<<endl;
        }
        else if(pos==1)
        {
            cout<<"Select DELETE FROM STARTING from the menu to delete the first element!!"<<endl;
        }
        else{
            temp=head;
            while(i<pos)
            {
                prevnode=temp;
                temp=temp->next;
                i++;
            }
            prevnode->next=temp->next;
            cout<<"Element deleted!!"<<endl;
            cout<<"Deleted element is - "<<temp->data<<endl;
            free(temp);
        }
    }
}

void display()
{
    if(head==NULL)
    {
        cout<<"List is empty!!"<<endl;
    }
    else{
        temp=head;
        cout<<"List - "<<endl;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
}

int main()
{
     int ch;
    while(1)
    {
        cout<<"\n Select -  \n 1. Insert element in starting  \n 2. Insert element at end  \n 3. Insert element at a position \n 4. Delete first element \n 5. Delete last element \n 6. Delete element from a position \n 7. Display the List \n 8. Exit \n\n";
        cin>>ch;
        switch(ch)
        {
            case 1: {
                insert_start();
                break;
            }
            case 2: {
                insert_end();
                break;
            }
            case 3: {
                insert_pos();
                break;
            }
            case 4: {
                del_start();
                break;
            }
            case 5: {
                del_end();
                break;
            }
            case 6: {
                del_pos();
                break;
            }
            case 7: {
                display();
                break;
            }
            case 8: {
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