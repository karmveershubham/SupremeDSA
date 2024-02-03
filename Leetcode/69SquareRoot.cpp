// 69. Sqrt(x)

// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
// You must not use any built-in exponent function or operator.

class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int e=x;
        long long int mid=s+(e-s)/2;
        int ans=-1;

        while(s<=e){
            if(mid*mid <= x){
                ans=mid; //store
                s=mid+1;  //go right  
            }else{
                e=mid-1; //go left
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
};
