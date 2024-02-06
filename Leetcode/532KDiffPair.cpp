// 532. K-diff Pairs in an Array
// Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.
// A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:
// 0 <= i, j < nums.length
// i != j
// |nums[i] - nums[j]| == k
// Notice that |val| denotes the absolute value of val.


//approach by two pointer method using sorting,set and  pairs concept.

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
      
        sort(nums.begin(),nums.end());
        set<pair<int,int>> ans;
        int i=0,j=1;
        while(j<nums.size()){
            if(abs(nums[i]-nums[j])==k){
                ans.insert({nums[i],nums[j]});
                i++;j++;
            }
            else if(abs(nums[i]-nums[j])>k){
                i++;
            }else{
                j++;
            }
            if(i==j){
                j++;
            }
        }
        return ans.size();
    }
};

//Brute force solution.
// class Solution {
// public:
//     int findPairs(vector<int>& nums, int k) {
//         set<pair<int,int>> ans;
//         for(int i=0; i<nums.size()-1; i++){
//             for(int j=i+1; j<nums.size(); j++){
//                 if(abs(nums[i]-nums[j])==k){
//                     ans.insert({nums[i],nums[j]});
//                 }
        
//             }
//         }
//         return ans.size();  
//     }
// };
