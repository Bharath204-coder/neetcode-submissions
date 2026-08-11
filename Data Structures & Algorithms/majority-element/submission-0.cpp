class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1;
        int greatEle=nums[0];

        for(int i=1;i<nums.size();i++){
            if(nums[i]==greatEle){
                count++;
            }else{
                count--;
            }
            if(count==0){
                greatEle=nums[i];
                count=1;
            }
        }
        return greatEle;
    }
};