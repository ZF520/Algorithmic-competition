#include<iostream>
using namespace std;
int main(){
	int grade;
	cin>>grade;
	switch(grade){
		case 5:
			cout<<"优秀"<<endl;break;
		case 4:
			cout<<"良"<<endl;break;
		case 3:
			cout<<"及格"<<endl;break;
		case 2:
			cout<<"不及格"<<endl;break;
		default:cout<<"太糟糕了！"<<endl;
	}
	system("pause");
	return 0;
}