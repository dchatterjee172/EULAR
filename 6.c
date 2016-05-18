#include "stdio.h"
int main(){
	int sq=0,sum=0;
	for(int i=1;i<=100;i++){
		sq+=i*i;
		sum+=i;
	}
	printf("%d\n",sum*sum-sq);
	return 0;
}
