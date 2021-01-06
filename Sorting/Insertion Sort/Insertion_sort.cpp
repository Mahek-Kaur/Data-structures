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

void insertion_sort(int *arr,int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
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
    insertion_sort(arr,n);
    cout<<"\n \n Sorted array : "<<endl;
    display(arr,n);
    return 0;
}