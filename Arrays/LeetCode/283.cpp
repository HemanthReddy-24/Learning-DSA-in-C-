class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s=nums.size();
        if(s==0 || s == 1){
            return ;
        }
        if(nums[0] == 0){
            swap(nums[0],nums[1]);
        }
        return moveZeroes(&nums+1);
    }
};
