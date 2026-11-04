/*WAP in C++ to Display the binary equivalent of an entered decimal number.*/
#include <iostream>
using namespace std;

int main(){
	int temp,rem;
	float decimal;
	int base=1;
	int binary=0;
	cout<<"Enter the decimnal number"<<endl;
	cin>>decimal;
	temp=decimal;
	while(temp!=0){
		rem=temp%2;
		binary+=base*rem;
		base=base*10;
		temp=temp/2;
	}
	cout<<binary<<endl;
}


