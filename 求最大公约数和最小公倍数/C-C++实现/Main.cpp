#include<iostream>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int c=a*b;
	if(a < b){
		swap(a, b);
	}
	while(b != 0){
		int temp = a % b;
		a = b;
		b = temp;
	}
	cout<<"最大公约数:"<<a<<endl;
	cout<<"最小公倍数："<<c/a<<endl;
	system("pause");
	return 0;
}

void swap(int a, int b){
	int temp=a;
	a=b;
	b=temp;
}