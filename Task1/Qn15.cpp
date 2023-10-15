// Implement a sort of your choice (bubble/selection) using recursion. (Take array as input). 

#include<iostream>
using namespace std;

void sort(int arr[], int size, int i)// bubble sort
{
    if(i==size-1)
        return;
    int temp;
    for(int j=0;j<size-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    sort(arr,size,i+1);
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,n,0);

    cout<<"Sorted Elements: \n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;    
}