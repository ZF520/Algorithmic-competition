#include<iostream>
using namespace std;

int main(){
	int n;
	for(n=100; n<=200; n++)
	{
		if(n%3 == 0)
			continue;
		cout<<n<<" ";
	}
	system("pause");
	return 0;
}