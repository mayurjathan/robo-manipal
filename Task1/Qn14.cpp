//Implement the Euclidean algorithm to find the greatest common divisor of two numbers. 
#include<iostream>
using namespace std;

int GCD(int a, int b)
{
    if(b==0)
        return a;
    return GCD(b,a%b);
}

int main()
{
    int a, b;
    cout<<"Enter the number a and b: ";
    cin>>a>>b;
    if(a>=b)
        cout<<"GCD of the numbers is: "<<GCD(a,b)<<"\n";
    else
        cout<<"GCD of the numbers is: "<<GCD(b,a)<<"\n";
}