class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int i=0;
        int j=1;
        
        while(j<nums.size()){
            if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else if(nums[i]==0 && nums[j]==0){
                j++;
            }
            else if(nums[i]!=0 && nums[j]==0){
                i++;
                j++;
            }
            else if(nums[i]!=0 && nums[j]!=0){
                i++;
                j++;
            }
        }
    }
};

/*Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:
Input: nums = [0]
Output: [0]*/