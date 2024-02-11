//concept based on binary serach
// Exponential serach

#include<iostream>
using namespace std;
int bs(int arr[],int start,int end,int x){
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==x){
            return  mid;
        }else if(arr[mid]>x){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
}

int expSearch(int a[],int n,int x){
    if(a[0]==x) return 0;
    int i=1;
    while(i<n && a[i]<=x){
        i=i*2;
    }
    return bs(a,i/2,min(i,n-1),x);
}

int main(){
    int arr[]={2,4,5,6,7,9,12,17,19,23,24,28,30};
    int x=19;
    int size=13;
    int ans=expSearch(arr,size,x);
    cout<<ans<<endl;
    
}
