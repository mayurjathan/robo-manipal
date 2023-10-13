//7.Write a function to copy a string into another string using pointers. 
#include<iostream>
using namespace std;
void copy(const char* n,char* d)
{
    while(*n)
    {
        *d=*n;
        n++;
        d++;
    }
    *d='\0';
}
int main()
{
    char n[100],d[100];
    cout << "Enter a String : ";
    cin >> n;
    copy(n,d);
    cout<<"Copied String : "<< d <<endl;
}
