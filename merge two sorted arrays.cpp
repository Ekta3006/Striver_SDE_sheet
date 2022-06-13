class Solution {
public:
    vector<int> merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        int i = m-1;
        int j = n-1;
        int index = m+n-1;
        while(i>=0 && j>=0){
            if(arr1[i]<arr2[j]){
                arr1[index] = arr2[j];
                j--;
            }else{
                arr1[index] = arr1[i];
                i--;
            }
            index--;
        }
        while(j>=0){
            arr1[index] = arr2[j];
            j--;
            index--;
        }
        return arr1;
    }
};