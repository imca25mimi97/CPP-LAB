/*WAP in C++ to find the GCD of two entered numbers. */
#include<iostream>
using namespace std;

int main(){
	int n1,n2,temp;
	cout<<"Enter the 1st number";
	cin>>n1;
	cout<<"Enter the 2nd number";
	cin>>n2;
	int a=n1;
	int b=n2;
	while(n2!=0){
		temp=n2;
		n2=n1%n2;
		n1=temp;
	}
	cout<<"GCD of"<<a<<"and"<<b<<"is:"<<n1<<endl;
	return 0;
}	

