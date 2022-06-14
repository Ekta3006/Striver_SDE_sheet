#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    pair<int,int> p;
    sort(arr.begin(),arr.end());
    int total=(n+1)*(n)/2,s;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1]){
            s=arr[i];
            arr[i]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        total=total-arr[i];
    }
    p.first=total;
    p.second=s;
    return p;
}
