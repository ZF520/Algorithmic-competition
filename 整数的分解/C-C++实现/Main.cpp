#include<iostream>
using namespace std;
int main(){
	int num;
	int hundred,ten,indiv;
	cout<<"请输入一个三位数：";
	cin>>num;
	hundred=num/100;		// 分解百位数
	ten=num/10%10;			// 分解十位数
	indiv=num%10;			// 分解个位数
	cout<<"百位数为"<<hundred<<endl;
	cout<<"十位数为"<<ten<<endl;
	cout<<"个位数为"<<indiv<<endl;
	system("pause");
	return 0;
}