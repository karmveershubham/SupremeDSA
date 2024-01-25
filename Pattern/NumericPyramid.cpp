#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;

cout<<"Numeric Half Pyramid\n\n";
  
for(int row=0; row<n; row++){
    for(int col=0;col<row+1; col++){
        cout<<col+1<<" ";
    }
    cout<<endl;
}

cout<<"Numeric Inverted Half Pyramid\n\n";

for(int row=0;row<n;row++){
    for(int col=0;col<n-row; col++){
    cout<<col+1<<" ";
    }
    cout<<endl;
}

cout<<"Hollow Rectangle \n\n";

for(int rows=0;rows<n; rows++){
    for(int col=0;col<n; col++){
      if(rows==0||rows==n-1){
        cout<<"*  ";
      }else{
        if(col==0||col==n-1){
          cout<<"*  ";
        }else{
          cout<<"   ";
        }
      }
    }
    cout<<endl;
  }

  cout<<"hollow Pyramid \n\n";



}



 
