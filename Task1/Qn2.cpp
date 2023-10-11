// Write a C++ program to multiply two matrices and print the product. 
// If the entered matrices are not compatible then print a message saying so. 
#include<iostream>
using namespace std;
int main ()
{
    int m,n,i,j,a[5][5],b[5][5],z[5][5],r,c,k;
    cout << "Enter Row and coloum of Matrix A : ";
    cin >> m >> n;
    cout << "Enter Row and Coloumn of Matrix B: ";
    cin >> r >> c;
    if(n!=r)
    {
        cout << "Invalid Options!";
        return 1;
    }
    cout << "Enter the Element of A : ";
    for(i =0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout << "Enter the Element of B : ";
    for(i =0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }
    for(i =0;i<m;i++)
    {
        for(j=0;j<c;j++)
        {
            z[i][j]=0;
            for(k=0;k<n;k++)
            {
                z[i][j]+=a[i][k]*b[k][j];
            }

        }
    }
    for(i =0;i<m;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<z[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;

}