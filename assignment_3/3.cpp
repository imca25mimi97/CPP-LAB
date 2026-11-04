/*WAP in C++ to find the sum of all user entered numbers until the sum exceeds 100 using do while loop. */
#include <iostream>
using namespace std;

int main(){
	int n;
	int sum=0;
	do{
	cout<<"ENter the number"<<endl;
	cin>>n;
	sum=sum+n;
	}
	while(sum<=100);
	cout<<"Sum is:"<<sum;
	cout<<endl;
	return 0;
}
