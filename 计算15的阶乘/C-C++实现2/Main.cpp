#include<iostream>
using namespace std;
int main(){
	int i=15;
	int sum=1;
	while(i!=0){
		sum*=i;
		i--;
	}
	cout<<sum<<endl;
	system("pause");
	return 0;
}