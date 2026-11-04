/*WAP in C++ to print all odd numbers in a given range. */
#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"ENter the range to print the odd numbers to there"<<endl;
	cin>>n;
	int i=1;
	while(i<n){
		if(i%2!=0){
			cout<<i<<endl;
		}
		i++;
	}
	return 0;
}



