#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr,int n,int sum)
    {
        if(sum==0)
            return 1;
        if(sum<arr[n])
            return solve(arr,n-1,sum);
        if(n<0)
            return 0;
            
        int c1 = solve(arr,n-1,sum);
        int c2 = solve(arr,n-1,sum-arr[n]);
        return c1+c2;
    }
    
int main()
    {
        vector<int>arr = {12,6,14,9,4,8,2,10,3};
        int sum = 1;
        int n = arr.size();
        cout<<solve(arr,n-1,sum)<<endl;
        return 0;
    }
