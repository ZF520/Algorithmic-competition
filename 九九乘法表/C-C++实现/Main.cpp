#include<iostream>
using namespace std;

int main(){
	for(int i=1; i<=9; i++)
	{
		for(int j=i; j<=9; j++){
			cout<<i<<"*"<<j<<"="<<i*j<<"\t";
		}
		cout<<endl;
	}
}