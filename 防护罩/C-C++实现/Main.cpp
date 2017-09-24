#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int N=0, i, temp;
	double r, l;
	cin>>r;
	l=floor(r);
	for(i=1; i<=1; i++)
	{
		temp=sqrt(r*r-i*i);
		N=N+temp;
	}
	cout<<N*4<<endl;
	system("pause");
	return 0;
}