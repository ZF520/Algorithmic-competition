#include<iostream>
using namespace std;

int main(){
	int N = 50;
	int sum = 0;
	while(N != 0){
		sum = sum + N*N;
		
		cout<<sum<<"---"<<N<<"*"<<N<<endl;
		N--;
		
	}
	cout<<sum<<endl;
	system("pause");
	return 0;
}