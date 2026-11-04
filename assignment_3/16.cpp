/*WAP in C++ to Compute reverse of a number and check whether the number is palindrome or not.*/
#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	int temp=num;
	int rev=0;
	
	while(temp>0){
		int digit=temp%10;
		rev=rev*10+digit;
		temp=temp/10;
	}
	if(num==rev){
		cout<<"It is palindrome"<<endl;
	}
	else{
		cout<<"It is not palindrome"<<endl;
	}
}
