#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double a,b,c,p,area;
	cout<<"please enter a,b,c"<<endl;
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	area=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"三角形的面积是："<<area<<endl;
}