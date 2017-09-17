#include<iostream>
using namespace std;
int main(){
	char str1,str2,str3,str4,str5;
	int t;
	cout<<"please enter 5 character";
	cin>>str1>>str2>>str3>>str4>>str5;
	cout<<"please enter t valuse";
	cin>>t;
	str1+=t;
	str2+=t;
	str3+=t;
	str4+=t;
	str5+=t;
	cout<<str1<<str2<<str3<<str4<<str5;
	system("pause");
}