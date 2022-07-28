// max element in array

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a[]={100,23,6,112,56,100025,585,326,5487,32};
//     int mn = 1000000000, mx = -1;
//     for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
//         mn = min(a[i], mn); // what is min() function? min(a[i], mn) is the min value of a[i] and mn is the min value of all elements in a[]  so far.
//         mx = max(a[i], mx); // what is max() function? max(a[i], mx) is the max value of a[i] and mx is the max value of all elements in a[]  so far.
//     }
//     cout<<mn<<" "<<mx<<endl;

//     return 0;
// }







//reversing the array without using extra space

// #include<iostream>
// using namespace std;
// int main()
// { 
//     int b;
//     int a;
//     cin>>b;
//     cin>>a;
//     int arr[a]={0};
//     for (int i = 0; i < a; i++) {
//        arr[i]=rand()%a;
//        cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<endl;
//     //random fuction to select any value within the range of 0 to a-1
//     // int r = rand()%a;
//     // int temp = arr[r];
//     for (int i = 0; i < a/2; i++) {
//         int temp = arr[i]; // temp is the value of a[i]
//         arr[i] = arr[a-i-1]; // a[i] is the value of a[n-i-1]
//         arr[a-i-1] = temp; // a[n-i-1] is the value of temp
//     }
//     for (int i = 0; i < a; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }



//second largest element in an array

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[]={100,23,6,112,56,100025,585,326,5487,32};
//     int mn = 1000000000, mx = -1;
    
//     return 0;
// }

// N=5
// a=[{1,1},{2,2},{3,2},{4,3},{5,5}]
// queries=[{1,5,2},{2,4,1}]
// output=[2,3]

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> filter (int N,vector<vector<int> > A,  vector<vector<int> > queries)
{
    vector<int> ans;
    for (int i = 0; i < queries.size(); i++) {
        int x = queries[i][0];
        int y = queries[i][1];
        int z = queries[i][2];
        int count = 0;
        for (int j = 0; j < A.size(); j++) {
            if (A[j][0] >= x && A[j][0] <= y && A[j][1] == z) {
                count++;
            }
        }
        ans.push_back(count);
    }
    return ans;
}
int main()
{
   int N;
    cin >> N;
    vector<vector<int> > A(N, vector<int>(2));
    for (int i_A = 0; i_A < N; i_A++)
    {
    	for(int j_A = 0; j_A < 2; j_A++)
    	{
    		cin >> A[i_A][j_A];
    	}
    }
    int Q;
    cin >> Q;
    vector<vector<int> > queries(Q, vector<int>(3));
    for (int i_queries = 0; i_queries < Q; i_queries++)
    {
    	for(int j_queries = 0; j_queries < 3; j_queries++)
    	{
    		cin >> queries[i_queries][j_queries];
    	}
    }

    vector<int> out_;
    out_ = filter(N, A, queries);
    cout << out_[0];
    for(int i_out_ = 1; i_out_ < out_.size(); i_out_++)
    {
    	cout << " " << out_[i_out_];
    }
    return 0;
}