#include<iostream>
using namespace std;
int main(){
	float a,b,c,t;
	cout<<"ÇëÊäÈëa,b,cµÄÖµ£º";
	cin>>a>>b>>c;
	if(a>b){
		swap(a,b);
	}
	if(a>c){
		swap(a,c);
	}
	if(b>c){
		swap(b,c);
	}
	cout<<a<<" "<<b<<" "<<c<<endl;
	system("pause");
	return 0;
}

void swap(float x,float y){
	float temp;
	temp=x;
	x=y;
	y=temp;
}