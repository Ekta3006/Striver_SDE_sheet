class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int s) {
        vector<int> v;
    int n=arr.size();
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==s)
            {
                v.push_back(i);
                v.push_back(j);
        }
        }
    }
    return v;
    }
};  