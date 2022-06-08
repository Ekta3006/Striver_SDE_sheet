#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n=prices.size();
        int max_difference=prices[1]-prices[0];
        int min=prices[0];
        for(int i=0;i<n;i++)
        {
            if(prices[i]-min>max_difference)
                max_difference=prices[i]-min;
            if(prices[i]<min)
                min=prices[i];
        }
        return max_difference;
        
}