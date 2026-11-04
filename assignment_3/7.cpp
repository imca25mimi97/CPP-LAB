/*WAP in C++ to find sum of all even numbers in a given range. */
#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the range to find the sum of all even numbers tilthat range"<<endl;
	cin>>n;
	int sum=0;
	int i=1;
	while(i<n){
		if(i%2==0){
			sum=sum+i;
		}
		i++;
	}
	cout<<"The sum of even numbers till"<<n<<"is:"<<sum<<endl;
	return 0;
}
