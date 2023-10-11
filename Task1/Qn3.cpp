// 3. In a given matrix for all zero elements the corresponding row and column must be replaced with zeroes. 
// Write a C++ program to do that. 
// Eg: Input: [ 1 2 0                 Output: [ 0 0 0 
//             2 3 4  	 	 	                2 3 0 
//             3 3 3 ]  	 	 	            3 3 0 ] 
#include<iostream>
using namespace std;
int main()
{
    int r ,c,i,j,a[5][5];
    cout<< "Enter Row and Coloumn : ";
    cin >> r >> c;
    cout << "Enter the Elements : ";
    for(i =0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    int col0=1;
    for(i =0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==0)
            {
                a[i][0]=0;
                if(j!=0)
                a[0][j]=0;
                else
                col0=0;

            }
        }
    }
    for(i =1;i<r;i++)
    {
        for(j=1;j<c;j++)
        {
            if(a[i][j]!=0)
            {
                if(a[0][j]==0||a[i][0]==0)
                {
                    a[i][j]=0;
                }
            }
        }
    }
    if(a[0][0]==0)
    {
        for(j=0;j<c;j++)
        a[0][j]=0;
    }
    if(col0==0)
    {
        for(i=0;i<r;j++)
        a[i][0]=0;
    }
    for(i =0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout << endl;
    }
}


    
            
