//Progrm for checking sizes of different datatypes in CPP

#include<iostream>
using namespace std;

int main(){
  //int -> 4 byte
	int num = 50;
	cout << num << endl;

	cout << sizeof(num) << endl;

	//character -> 1byte
  
	char ch = 'k';
	cout << ch << endl;
	cout << sizeof(ch) << endl;

	//float -> 4 byte
  
	float point = 1.69;
	cout << point << endl;
	cout << sizeof(point) << endl;

	//long -> 4 byte
  
	long number = 23;
	cout << number << endl;
	cout << sizeof(number) << endl;
	
}
