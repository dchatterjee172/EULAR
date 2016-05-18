#include <stdio.h>
#include "math.h"
int prime(long long num){
	int limit=sqrt(num);
	if(num%2==0)
		return 0;
	for(int i=3;i<=limit;i+=2){
		if(num%i==0)
			return 0;
	}
	return 1;
}
long long foo(long long num){//num must be odd
	long long limit=ceil(sqrt(num)),temp1,maxprime;
	for(long long i=2;i<limit;i+=2){
		if(num%i==0){
			temp1=num/i;
			printf("i=%lld\n\ntemp=%lld\n\n",i,temp1);
			if(prime(temp1)){
				return temp1;
			}
			if(prime(i)){
				maxprime=i;
			}
		}
		if(i==2)
			i--;
	}
	return maxprime;
}
int main(){
	printf("%lld\n",foo(600851475143));
	return 0;
}
	
