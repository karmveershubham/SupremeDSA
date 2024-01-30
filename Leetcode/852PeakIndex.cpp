class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int n=arr.size();
        int start=0;
        int end=n-1;
        int mid=start+(end-start)/2;

        while(start<end){

            if(arr[mid]<arr[mid+1]){
                //on A go right
                start=mid+1;

            }else{
                //on B go left
                //dont bring end to mid-1 as peak will be lost
                end=mid;
            }

            mid=start+(end-start)/2;
;
        }
        return start;
        
    }
};
