// 643. Maximum Average Subarray I

class Solution {
public:
double slidingWindow(vector<int> &nums, int &k){
    int i=0,j=k-1;
    int sum=0;
    for(int y=i;y<=j;y++)
        sum+=nums[y];
    int maxSum=sum;
    j++;
    while(j<nums.size()){
        sum-=nums[i++];
        sum+=nums[j++];
        maxSum=max(sum,maxSum);
    }
    double maxAvg=maxSum/(double)k;
    return maxAvg;

}
    double findMaxAverage(vector<int>& nums, int k) {
        return slidingWindow(nums,k);
    }
};

// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//         double currSum = 0, maxSum = 0;
        
//         // Initialize currSum and maxSum to the sum of the initial k elements
//         for (int i = 0; i < k; i++)
//             currSum += nums[i];
//         maxSum = currSum;
        
//         // Start the loop from the kth element 
//         // Iterate until you reach the end
//         for (int i = k; i < nums.size(); i++) {
//             // Subtract the left element of the window
//             // Add the right element of the window
//             currSum += nums[i] - nums[i - k];
            
//             // Update the max
//             maxSum = max(maxSum, currSum);
//         }
        
//         // Since the problem requires average, we return the average
//         return maxSum / k;
//     }
// };
