class Solution {
public:
    void sortColors(vector<int>& arr) {
   //   Write your code here
    
        int n= arr.size();
        int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
        }
    
}
    }
};