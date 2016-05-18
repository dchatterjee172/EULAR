#include "stdio.h"
#include "math.h"
int prime(long int num){
	if(num!=2&&num%2==0||num!=3&&num%3==0||num!=7&&num%7==0)	return 0;
	int temp=sqrt(num);
	for(int i=3;i<=temp;i++){
		if(num%i==0)	return 0;
	}
	return 1;
}
int main(){
	int count=0,i;
	for(i=2;count<10001;i++){
		if(prime(i)){
			count++;
		}
		if(i>2) i++;
	}
	printf("%d\n",i-2);
}
