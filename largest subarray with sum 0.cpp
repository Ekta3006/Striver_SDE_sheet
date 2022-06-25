#include <bits/stdc++.h> 
#include<unordered_map>
int LongestSubsetWithZeroSum(vector<int> a) {
    int sum=0;
    int maxi=0;
    int n=a.size();
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum==0)
            maxi=i+1;
        else{
            if(mp.find(sum)!=mp.end()){
                maxi = max(maxi, i-mp[sum]);
         }
         else{
             mp[sum] = i;
         }
     }
 }
    return maxi;
}
  