//Implement Binary Search using recursion. (Take array as input). 
#include<iostream>
using namespace std;
int binarySearch(int arr[], int low, int high, int search)
{
    if(low<=high)
    {
        int mid=(low+high)/2;
        for(int i=low;i<high;i++)
        {
            if(arr[mid]==search)
                return mid;

            else if(arr[mid]>search)
                return binarySearch(arr, low, high-1, search);
            
            else 
                return binarySearch(arr, low+1, high, search);
        }
    }
    return -1;
}
int main()
{
    int n, search;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter a sorted array: \n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Enter an element to search: ";
    cin>>search;

    int result = binarySearch(arr,0, n-1, search);
    if(result==-1)
        cout<<"Element not found!\n";
    else
        cout<<"Element found at position: "<<(result+1);
        cout<<endl;
}