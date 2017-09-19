#include<iostream>
using namespace std;
int factorial(int n){
	int result;
	if(n==0 || n==1)
		return 1;
	else
		result=factorial(n-1)*n;
	return result;
}
int main(){
	int n;
	cin>>n;
	cout<<factorial(n)<<endl;
	system("pause");
	return 0;
}

