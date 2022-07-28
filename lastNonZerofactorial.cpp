//Last Non-Zero Digit Factorial
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int fact=1;
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    cout<<"Factorial of the number is: "<<fact<<endl;
    int lastnonzero=0;
    while(fact%10==0)
    {
        fact=fact/10;
    }
    while(fact%10!=0)
    {
        fact=fact/10;
        lastnonzero++;
    }
    cout<<"Last non-zero digit of the factorial is: "<<lastnonzero<<endl;
    return 0;
}
