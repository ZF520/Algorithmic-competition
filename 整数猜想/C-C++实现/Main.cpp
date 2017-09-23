#include<iostream>
using namespace std;

int main(){
	int i;
	cout<<"请输入任一大于1的正整数：";
	cin>>i;
	while(i > 1){
		if(i/2)
			i/=2;
		else
			i=i*3+1;
		cout<<i<<endl;
	}
}