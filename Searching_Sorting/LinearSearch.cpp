#include<iostream>
using namespace  std;
int linearSearch(int arr[], int n, int target){
  for(int i=0; i<n; i++){
    if( arr[i]==target)
      return  i;
  }
  return -1;
}
int main(){
  int array[]={6,7,3,9,4,2};
  int target;
  cin>>target;
  int searchElementIndex=linearSearch(array, 6, target);
  cout<<"Element found at index: "<<searchElementIndex<<endl;
}
