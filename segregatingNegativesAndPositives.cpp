//segregating negatives and positives in an array

#include <bits/stdc++.h>
#include <vector>
using namespace std;


void segregate0and1(int arr[], int n)
{
   
    vector<int> v;
    for (int i = 0; i < n; i++)
        if (arr[i] <= 0)
        {
            v.push_back(arr[i]);
            
        }
    for (int i = 0; i < n; i++)
       if (arr[i] > 0)
        {
            v.push_back(arr[i]);
           
        }
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
}



int main()
{
    int arr[] = {23, -5, -4, -3, 1, 2, 3, 4, 5, -2, -1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    segregate0and1(arr, n);
    
    return 0;
}