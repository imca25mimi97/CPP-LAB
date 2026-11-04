/*WAP in C++ to Display the binary equivalent of an entered decimal number.*/
#include <iostream>
using namespace std;

int main(){
	int temp,rem;
	float binary;
	int base=1;
	int decimal=0;
	cout<<"Enter the binary number"<<endl;
	cin>>binary;
	temp=binary;
	while(temp!=0){
		rem=temp%10;
		decimal+=base*rem;
		base=base*2;
		temp=temp/10;
	}
	cout<<decimal<<endl;
}


