#include <iostream>
using namespace std;
void foo(int lim){
	int sum=0;
	while(--lim){
		if(lim%5==0 || lim%3==0) sum+=lim;
	}
	cout<<sum<<endl;
}
int main(){
	foo(1000);
	return 0;
}
