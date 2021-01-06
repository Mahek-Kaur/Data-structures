#include<iostream>
using namespace std;

void display(int *arr,int n)
{
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
}

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void bubble_sort(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
}

int main()
{
    int n;
    cout<<"\n Enter the number of elements - ";
    cin>>n;
    int arr[n];

    cout<<"\n Enter the elements - "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<" "<<i+1<<"  Element - ";
        cin>>arr[i];
        cout<<endl;
    }

    cout<<"\n Array before sorting : "<<endl;
    display(arr,n);
    bubble_sort(arr,n);
    cout<<"\n \n \n Sorted array : "<<endl;
    display(arr,n);
    return 0;
}