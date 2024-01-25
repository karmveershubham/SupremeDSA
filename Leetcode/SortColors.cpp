sort colors

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int index=0,left=0,right=nums.size()-1;

        while(index<=right){
            if(nums[index]==0){
                swap(nums[index],nums[left]);
                left++;
                index++;
            }
            else if(nums[index]==2){
                swap(nums[index],nums[right]);
                right--;
            }
            else{
                index++;
            }
        } 
    }
};
