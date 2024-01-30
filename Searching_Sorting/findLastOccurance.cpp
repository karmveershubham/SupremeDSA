#include<iostream>
using namespace std;

int findLastOccurence(int arr[], int n, int target) {
  int s = 0;
  int e = n-1;
  int mid = s+(e-s)/2;
  
  int ans = -1;

  while(s<=e) {
    if(arr[mid]==target) {
      ans = mid;
      //right me jao
      s = mid+1;
    }
    else if(target > arr[mid]) {
      s = mid+1;
    }
    else if(target < arr[mid]) {
      e = mid-1;
    }
    
    mid =  s+(e-s)/2;
  }
  return ans;
}

int main(){
    int arr[]={4,5,6,6,6,8,9,10}; //sorted array
    int n=8;
    int target=6;
    int ansIndex = findLastOccurence(arr, n, target);

    if(ansIndex == -1) {
    cout << "Element not found " << endl;
    }
    else {
    cout << "Element found at Index: " << ansIndex << endl;
    }
    
}