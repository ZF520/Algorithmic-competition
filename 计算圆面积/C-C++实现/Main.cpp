#include<iostream>
using namespace std;
const float pi=3.14;

int main(){
	float area;
	int r;
	for(r=1; r<=10; r++)
	{
		area = pi * r * r;
		if(area > 100)
			break;
		cout<<r<<":area="<<area<<endl;
	}
	system("pause");
	return 0;
}