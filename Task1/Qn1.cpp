// Write a C++ program to sort a character array alphabetically using bubble sort. 
// (lower case only). Eg: input: “worksheet” Output: “eehkorstw” 
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
        char word[20];
        cout << "Enter the Input : ";
        cin >> word;
        int n=strlen(word);
        bool swapped;
        for(int i =0;i<n-1;i++)
        {
                swapped=false;
                for(int j=0;j<n-i-1;j++)
                {
                        if(word[j]>word[j+1])
                        {
                                char temp=word[j];
                                word[j]=word[j+1];
                                word[j+1]=temp;
                        }
                }
                if(!swapped)
                {
                        break;
                }
        }
        

        cout << "The Output is : "<< word;
}

