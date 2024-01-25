//Segregate Negative Positive Numbers:
//Given:  1,-2,3,-4,5,-6
//solution: -2 -4 -6 1 5 3   or -2 -4 -6 1 5 3

#include <iostream>
using namespace std;

// void shiftNegativeOneSide(int arr[], int n) {
//   int j = 0;
  
//   for(int index=0; index<n; index++) {
//     if(arr[index] < 0) {
//       swap(arr[index], arr[j]);
//       j++;
//     }
//   }
// }

void shiftNegativeOneSide(int arr[], int n) {
    //Dutch national flag Algo
  int low=0; int high=n-1;
    while(low<high){
        if(arr[low]<0){
            low++;
        }else if(arr[high]>0){
            high--;
        }else{
            swap(arr[low],arr[high]);
        }
    }
}

int main() {
  int arr[] = {1,-2,3,-4,5,-6};
  int n = 6;

  shiftNegativeOneSide(arr, n);
  //print
  cout << "Printing the array " << endl;
  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
