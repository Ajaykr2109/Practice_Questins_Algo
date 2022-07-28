//Write a program to print all permutations of a given string
//Input: String = "ABCDSDEWD"
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    int n=str.length();
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(i!=j && i!=k && j!=k)
                {
                    cout<<str[i]<<str[j]<<str[k]<<endl;
                }
            }
        }
    }
    
    return 0;
}