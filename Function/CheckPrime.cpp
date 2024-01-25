#include<iostream>
using namespace  std;
bool checkPrime(int num){
    for(int i=2; i<=num/2; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter a number to check prime:";
    cin>>n;

    bool isPrime=checkPrime(n);
    isPrime?cout<<"Prime":cout<<"Not Prime";

}


