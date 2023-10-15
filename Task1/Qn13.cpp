// Find sum of digits of a number with and without recursion. 

#include<iostream>
using namespace std;

int sumRec(int n)
{
    static int sum=0;
    if(n==0)
        return sum;
    sum+=n%10;
    return sumRec(n/10);
}

int sumFunc(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum+=(n%10);
        n/=10;
    }
    return sum;
}

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Sum of digits with Recursion: "<<sumRec(num)<<"\n";
    cout<<"Sum of digits without Recursion: "<<sumFunc(num)<<"\n";
}