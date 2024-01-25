//finding missing Numbers with elements from 1 to n and one element repeated:
// input: 1,2,3,4,5,5
// output: 6

#include <iostream>
using namespace std;
    
    void missingNumber(int *arr, int n){
        int i=0;
        while(i<n){
            int index=arr[i]-1;
            if(arr[i]!=arr[index]){
                swap(arr[i],arr[index]);
            }else{
                i++;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=i+1){
                cout<<i+1<<" ";
            }
        }
    }

int main() {

    int arr[] = {1,2,3,4,5,5};
    int n = 6;
    
    missingNumber(arr,n);
    
    return 0;
}
