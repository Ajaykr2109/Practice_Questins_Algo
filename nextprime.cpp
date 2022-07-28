#include <iostream>
#include<string>
using namespace std;
//linear search duplicate element in string
int main()
{
    string s="Hello Everyone!";
    int a[s.length()/2];
    char b[s.length()/2];
    int index=0;
    for(int i=0;i<s.length();i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
            if(s[i]==s[j])
            {
                b[index]=s[i];
                a[index]=i;
                index++;
            }
        }
    }

    //printing the duplicate element
    for(int i=0;i<index;i++)
    {
        cout<<b[i]<<" "<<a[i]<<endl;
    }
    return 0;
}
