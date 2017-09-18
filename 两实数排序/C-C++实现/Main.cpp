#include<iostream>
using namespace std;

int main(){
	float a,b,t;
	cout<<"ÇëÊäÈëa,bµÄÖµ£º";
	cin>>a>>b;
	if(a>b){
		t=a;
		a=b;
		b=t;
	}
	cout<<a<<" "<<b<<endl;
	system("pause");
	return 0;
}