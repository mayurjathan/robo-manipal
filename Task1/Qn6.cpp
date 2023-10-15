// Write a function for Bubble and Selection Sort. 
// Ask the user for which method to use: ‘s’ for Selection Sort and ‘b’ for Bubble Sort. 
// Call the correct function based on the user’s choice. 
// After sorting the array, call another function that implements Binary Search to
//  find the position of the number taken as input from the user.
//   [Take the array as input from the user
#include<iostream>
using namespace std;

void BubbleSort(int* arr, int n)
{
    int i, j, temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void SelectionSort(int* arr, int n)
{
    int pass, j, temp, min;
    for(pass=0;pass<n-1;pass++)
    {
        min=pass;
        for(j=pass+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            min=j;
        }
        if(min!=pass)
        {
            temp=arr[min];
            arr[min]=arr[pass];
            arr[pass]=temp;
        }
    }
}

int BinarySearch(int arr[], int num, int n)
{
    int mid, high, low;
    high=n-1;
    low=0;
    for(int i=0;i<n;i++)
    {
        mid=(low+high)/2;
        if(arr[mid]==num)
            return mid;
        else if(arr[mid]<num)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main()
{
    int n, num;
    char choice;

    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: \n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Bubble Sort (b) or Selection Sort (s)\n";
    cin>>choice;

    switch(choice)
    {
        case 'b':   BubbleSort(arr, n);
                    break;
        case 's':   SelectionSort(arr, n);
                    break;
        default: cout<<"Invalid Choice\n";
    }

    cout<<"\nSorted Array: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    cout<<"\nEnter the number to search: ";
    cin>>num;
    int k=BinarySearch(arr,num,n);
    if(k==-1)
        cout<<"Entered Number not found in array\n";
    else
        cout<<"Entered Number found at position "<<k+1<<"\n";
}