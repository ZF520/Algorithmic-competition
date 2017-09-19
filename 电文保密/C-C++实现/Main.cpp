#include<iostream>
#include<math.h>
using namespace std;

int main(){
	char c;
	while((c=getchar())!='\n'){
		if((c>='a' && c<='z') || (c>='A' && c<='Z')){
			c+=4;
			if(c>='Z' && c<='Z'+4 || c>'z')
				c-=26;
		}
		cout<<c<<endl;
	}
	system("pause");
	return 0;

}