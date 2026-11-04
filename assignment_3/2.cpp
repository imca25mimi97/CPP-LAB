/*WAP in C++ to find Fibonacci series up to an entered number using do-while loop.*/
#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"ENter the number to which the fibonacci series to be printed"<<endl;
	cin>>n;
	int t1=0,t2=1,nextTerm=0;
	do{
        cout << t1 << " ";
	nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

    	} while (t1 <= n);
	cout<<endl;
	return 0;
}
