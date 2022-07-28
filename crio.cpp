#include<iostream>
#include<string>

using namespace std;

string ViratOrRohit(string s,int n)
{
    int size=s.length(),check=0;
    char vir[size/2], roh[size/2];
    int count1=0;int count=0;
    
    if(n%2==0)
    check=1;

    if(check==1)
    {
        //putting first half of the string in to vir[]
        for(int i=0;i<size/2;i++)
        {
            vir[i]=s[i];
        }
       //putting second half of the string in roh[]
        for(int i=size/2;i<size;i++)
        {
            roh[i]=s[i];
        }

       //checking the vowels count in both of the char array vir[] and roh[]        
        for(int i=0;i<size/2;i++)
        {
            if(vir[i]=='a'||vir[i]=='e'||vir[i]=='i'||vir[i]=='o'||vir[i]=='u')
            {
                count++;
            }
        }
        
        for(int i=0;i<size/2;i++)
        {
            if(roh[i]=='a'||roh[i]=='e'||roh[i]=='i'||roh[i]=='o'||roh[i]=='u')
            {
                count1++;
            }
        }
    }
    else{
         //putting first half of the string in to roh[]
        for(int i=0;i<size/2;i++)
        {
            roh[i]=s[i];
        }
         //putting second half of the string in to vir[]
        for(int i=size/2;i<size;i++)
        {
            vir[i]=s[i];
        }
        //checking the vowels count in both of the char array vir[] and roh[]
        for(int i=0;i<size/2;i++)
        {
            if(vir[i]=='a'||vir[i]=='e'||vir[i]=='i'||vir[i]=='o'||vir[i]=='u')
            {
                count++;
            }
        }

        for(int i=0;i<size/2;i++)
        {
            if(roh[i]=='a'||roh[i]=='e'||roh[i]=='i'||roh[i]=='o'||roh[i]=='u')
            {
                count1++;
            }
        }
    }
   
   return count>count1?"Virat":"Rohit";
}

int main()
{
    int a;
    cin>>a;
    string s1;
    cin>>s1;
    cout<<ViratOrRohit(s1,a);
}