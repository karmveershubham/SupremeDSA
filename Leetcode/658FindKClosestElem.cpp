// 658. Find K Closest Elements
// Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.
// An integer a is closer to x than an integer b if:
// |a - x| < |b - x|, or
// |a - x| == |b - x| and a < b

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int start=0,end=arr.size()-1;
        while(end-start>=k){
            if(x-arr[start]>arr[end]-x){
                start++;
            }else{
                end--;
            }
        }
        return vector<int>(arr.begin()+start,arr.begin()+end+1);
    }
};

