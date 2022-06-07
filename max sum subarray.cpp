class Solution {
public:
    int maxSubArray(vector<int>& a) {
    int n=a.size();
    int curr_sum=a[0];
    int max_sum=a[0];
    for(int i=1;i<n;i++)
    {
        curr_sum=max(a[i],curr_sum+a[i]);
        max_sum=max(curr_sum,max_sum);
    }
    return max_sum;
}   
};