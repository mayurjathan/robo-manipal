//6. Write a C++ program to find if two numbers are Amicable numbers. 
// Note: Amicable numbers are two different numbers such that the sum of
// proper divisors of each is equal to the other number. e.g. 220 and 284 
// Factors of 220 1 + 2+ 4+ 5+ 10+ 11+20 +22+44+55+110 = 284 
// Factors of 284 1 + 2+ 4+ 71+142 = 220 
#include <iostream>
using namespace std;
int main()
{
    int n1,n2,sum1=0,sum2=0,i;
    cout << " Enter the two numbers : ";
    cin >> n1 >> n2;
    for(i=1;i<=(n1/2);i++)
    {
        if(n1%i==0)
        sum1=sum1+i;
    }
    for(i=1;i<=(n2/2);i++)
    {
        if(n2%i==0)
        sum2=sum2+i;
    }
    if(n1==sum2 && n2==sum1)
    {
        cout << n1 <<" and "<< n2 <<" are amicable numbers ";
    }
    else
    cout << n1 <<" and "<< n2 <<" are not amicable numbers ";
}