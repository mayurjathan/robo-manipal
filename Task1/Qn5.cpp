// 5. Write a C++ program to input a decimal number and print its equivalent hexadecimal,
//  octal and binary forms. 
// (If you are unaware of different number systems then please learn about them).
#include<iostream>
using namespace std;
string decimaltohex(int n);
int decimaltoct(int n);
int decimaltobin(int n);
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Hexadecimal Form : "<< decimaltohex(n)<< endl;
    cout << "Octadecimal Form : "<< decimaltoct(n)<< endl;
    cout << "Binary Form : "<< decimaltobin(n)<< endl;
}
string decimaltohex(int n)
{
    const char ch[]="0123456789ABCDEF";
    string hex;
    if(n==0)
    return 0;
    while(n>0)
    {
        int rem=n%16;
        hex=ch[rem]+hex;
        n/=16;
    }
    return hex;
}
int decimaltoct(int n)
{
    int oct=0,base =1;
    if(n==0)
    return 0;
    while(n>0)
    {
        int rem=n%8;
        oct=rem*base+oct;
        n/=8;
        base*=10;

    }
    return oct;
}
int decimaltobin(int n)
{
    int bin=0,base =1;
    if(n==0)
    return 0;
    while(n>0)
    {
        int rem=n%2;
        bin=rem*base+bin;
        n/=2;
        base*=10;

    }
    return bin;
}