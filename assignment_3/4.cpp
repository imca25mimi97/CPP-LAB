/*WAP in C++ to find the factorial of any user entered number using for loop*/
#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	int fact=1,i;
	if(n==1){
		cout<<"1"<<endl;
	}
	else{
		for(i=1;i<=n;i++){
			fact=fact*i;
		}
	}
	cout<<"FActorial of"<<n<<"is:"<<fact<<endl;
	return 0;
}

