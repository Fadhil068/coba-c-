#include<iostream>
using namespace std;
int main(){
	int temp;
	int a = 8;
	int b = 14;
	
	cout<<"Sebelum ditukar"<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	
	temp = a;
	a=b;
	b=temp;
	
	cout<<"Setelah ditukar"<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	
	return 0;
}
