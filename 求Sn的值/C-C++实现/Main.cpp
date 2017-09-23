#include<iostream>
using namespace std;

int main(){
	int a, n;
	cin>>a>>n;
	int temp=a;
	for(int i=0; i<n; i++){
		cout<<a;
		a=a*10+temp;
		if( i ==  (n-1))
			break;
		cout<<"+";
		
	}
	cout<<endl;
	system("pause");
	return 0;
}