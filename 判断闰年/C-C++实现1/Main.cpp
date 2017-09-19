#include<iostream>
using namespace std;
int main(){
	int year;
	cin>>year;
	if(year%400==0)
		cout<<year<<"是闰年！"<<endl;
	else if(year%100!=0)
	{
		if(year%4==0)
			cout<<year<<"是闰年！"<<endl;
		else
			cout<<year<<"不是闰年！"<<endl;
	}
	else
		cout<<"不是闰年！"<<endl;
	system("pause");
	return 0;
}