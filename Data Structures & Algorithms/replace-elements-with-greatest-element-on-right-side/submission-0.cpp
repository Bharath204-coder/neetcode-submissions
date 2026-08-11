class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int rightMax=-1;
        vector<int>ans(n);
        for(int i=arr.size()-1;i>=0;i--){
            ans[i]=rightMax;
            rightMax=max(arr[i],rightMax);
        }
        return ans;
    }
};