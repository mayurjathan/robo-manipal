//     8. Write two functions: 
// i.To perform matrix multiplication ii.To find the transpose of a matrix. 
// Use two matrices to verify the identity (A.B)’ = B’. A’ 
#include<iostream>
using namespace std;
int multiply(int a[][5],int b[][5],int z[][5],int m, int n, int r, int c);
int transpose(int z[][5],int m, int c);
int main()
{
    int m,n,i,j,a[5][5],b[5][5],z[5][5],y[5][5],r,c,k,flag=0;
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
    for(i =0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>b[i][j];
        }
    }
    multiply(a,b,z,m,n,r,c);
    cout <<  "(A.B)': "<< endl;
    transpose(z,m,c);
    for(i =0;i<m;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<z[i][j]<< " ";
        }
        cout<<endl;
    }
    transpose(a,m,n);
    transpose(b,r,c);
    cout <<  "A'.B': " << endl;
    multiply(a,b,y,m,n,r,c);
    for(i =0;i<m;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<y[i][j]<< " ";
            if(z[i][j]!=y[i][j])
            {
                flag=1;
            }
        }
        cout<<endl;
    }
    if(flag==1)
    {
        cout << "(A.B)'is not equal to A'.B'";
    }
    else
    {
        cout << "Hence (A.B)’ = B’. A’";

    }
    return 0;
    
}
int multiply(int a[][5],int b[][5],int z[][5],int m, int n, int r, int c)
{
    int i,j,k;
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
}
int transpose(int z[][5],int m, int c)
{
    int i,j,temp[5][5];
    for(i =0;i<m;i++)
    {
        for(j=0;j<c;j++)
        {
            temp[j][i]=z[i][j];
        }
    }
    for(i =0;i<m;i++)
    {
        for(j=0;j<c;j++)
        {
            z[i][j]=temp[i][j];
        }
    }
}

