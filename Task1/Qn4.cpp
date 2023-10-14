// Write a C++ program to print whether a number is a hill number or not. 
// Note: Assume that a Hill Number is a natural number that has digits in ascending order followed by digits in descending order where consecutive digits are not the same i.e. the number has a peak and an ascending slope and descending slope. 
// Example: 
// Hill Number: 147521, 23454 
// Not Hill Number: 1, 12, 22, 12334, 123212321

#include<iostream>
using namespace std;

bool isHill(int n)
{
    int i,len=0,j,arr[100], temp;
    temp=n;
    while(temp>0){
        len++;
        temp /= 10;
    }
    for(i=len;i>=1;i--){
        arr[i] = n%10; 
        n /= 10;
    }
    for(i=1;i<=len-1;i++){
        if(arr[i]==arr[i+1])
            return false;
        
        else if(arr[i]>arr[i+1]){
            for(j=i+1;j<=len-1;j++){
                if(arr[j] == arr[j+1])
                    return false;
                
                else if(arr[j]<arr[j+1])
                    return false;
                
                else if(j==len-1)
                    return true;
            }
        }

        else if(i == len-1)
            return false;    
    }
    return false;
}

int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;

    if (isHill(number)) {
        cout << "Is Hill number\n";
    } else {
        cout << "Is Not Hill number\n";
    }

    return false;
}