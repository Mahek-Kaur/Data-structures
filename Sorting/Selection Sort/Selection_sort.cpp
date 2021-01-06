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

void selection_sort(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap(arr[min],arr[i]);
        }
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
    selection_sort(arr,n);
    cout<<"\n \n \n Sorted array : "<<endl;
    display(arr,n);
    return 0;
}