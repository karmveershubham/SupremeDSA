//Find the unique element in an array
#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int> a){
    int ans=0;
    for(int i=0; i<a.size();i++){
        ans=ans^a[i];
    }
    return ans;
}
int main(){
    vector<int> arr{1,3,6,8,9,6,5,5,9,8,1};


    int unique=findUnique(arr);
    cout<<"Unnique element in the list is: "<<unique;
}
