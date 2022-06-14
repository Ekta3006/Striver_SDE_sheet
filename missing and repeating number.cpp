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

//better approach
#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	 pair<int,int> ans={0,0};
    if(n==0)
        return ans;
    long long int total=(n*(n+1))/2;
    long long int sqtotal=(n*(n+1)*((2*n)+1))/6;
    for(int i=0;i<n;i++){
        total-=arr[i];
        sqtotal-=(arr[i]*arr[i]);
    }
    ans.first=((sqtotal/total)+total)/2;
    ans.second=ans.first-total;
    return ans;
}

