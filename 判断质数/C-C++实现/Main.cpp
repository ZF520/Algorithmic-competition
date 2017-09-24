#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int number, i, k;
	cin>>number;
	k=sqrt(number);
	for(i=2; i<=k; i++)
		if(number%i == 0)
			break;
	if(i > k)
		cout<<number<<"是一个素数"<<endl;
	else
		cout<<number<<"不是一个素数"<<endl;
	system("pause");
	return 0;
}