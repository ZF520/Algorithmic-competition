#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a,b,c,disc,x1,x2,p,q;
	cin>>a>>b>>c;
	if(fabs(a)<=1e-6)
		cout<<"不是一元二次方程！！！"<<endl;
	else{
		disc=b*b-4*a*c;
		if(fabs(disc)<=1e-6){
			p=(-b)/2*a;
			q=sqrt(disc)/(2*a);
			x1=p+q;
			x2=p-q;
			if(x1==x2)
				cout<<"方程的实根为x1=x2="<<x1<<endl;
		}
		else if(fabs(disc)>1e-6){
			p=(-b)/2*a;
			q=sqrt(disc)/(2*a);
			x1=p+q;
			x2=p-q;
			cout<<"方程的实根x1="<<x1<<endl;
			cout<<"方程的实根x2="<<x2<<endl;
		}
		else
			cout<<"无实根"<<endl;
	}
	system("pause");
	return 0;
}