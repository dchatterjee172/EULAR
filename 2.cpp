#include <iostream>
using namespace std;
void foo(int limit){
	int a,b,c,sum=0;
	a=1;b=2;c=a+b;
	sum+=b;
	while(c<limit){
		a=b;
		b=c;
		c=a+b;
		if(c%2==0 && c<limit) sum+=c;
		
	}
	cout<<sum<<endl;
}
int main(){
	foo(4000000);
	return 0;
}
