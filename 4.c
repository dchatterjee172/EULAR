#include "stdio.h"
#include "stdlib.h"
int palin(int num){
	int temp=num,rev=0;
	while(num!=0){
		rev=rev*10+num%10;
		num/=10;
	}
	if(temp==rev)
		return 1;
	return 0;
}
int main(){//can be optimized
	int max=0;
	for(int i=999;i>=100;i--){
		for(int j=999;j>=100;j--){
			if(palin(i*j)){
				if(max<i*j)
					max=i*j;
			}
		}
	}
	printf("%d\n",max);
	return 0;
}

