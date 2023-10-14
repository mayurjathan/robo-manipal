//     9. (a) Given a 2D character array, where each row is a string, 
//write a function which rearranges the strings in ascending order based on their lengths. 
// Input: word  number  cat 
// Output: cat  word  number 
// (b) Also, sort each individual string in ascending order. 
// Output: act dorw 
// bemnru 
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,n,j;
    cout << "Enter the no of Strings : ";
    cin >> n;
    char a[20][20];
    char temp[20],t;
    cout << "Enter the String : ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
           if(strcmp(a[j],a[j+1])>0){
               strcpy(temp ,a[j]);
               strcpy( a[j] ,a[j+1] );
               strcpy( a[j+1], temp);
            }
        }
    }
    cout << "Rearranged String : ";
    for (i = 0; i < n; i++) {
        cout << a[i] << "    ";
    }
    cout << endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<strlen(a[i])-1;j++)
        {
            for(int k=0;k<strlen(a[i])-j-1;k++)
            {  
                if(a[i][k]>a[i][k+1]){
                   t=a[i][k];
                   a[i][k]=a[i][k+1];
                   a[i][k+1]=t;
                }
            }
        }
    }
    cout << "String in ascending order : ";
    for (i = 0; i < n; i++) {
        cout << a[i] << "    ";
    }
    cout << endl;
}
