#include<iostream>
using namespace std;
int main(){
	int num=21;			// 火柴数
	int man;			// 楚继光
	while(num>=0){
		cout<<"现在的火柴数: "<<num<<endl;
		cout<<"楚继光取的火柴数:";
		cin>>man;
		
		if(man>4 || man<1){
			cout<<"违反规则，无效重取。"<<endl;
			continue;
		}else{
			cout<<"张琪曼取的火柴数:"<<5-man<<endl;
			cout<<"剩余的火柴数："<<num-5<<endl;
			
		}
		num-=5;
	}
	cout<<"你输了！！"<<endl;
	system("pause");
	return 0;
}