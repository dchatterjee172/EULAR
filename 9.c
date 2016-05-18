#include "stdio.h"
#include "math.h"
int main(){
	int i=3,j=4,f=1,chk;
	float k=5;
	for(;f;i++){
		for(j=i+1;0<=1000-i-j-k;j++){
			k=sqrt(i*i+j*j);
			chk=(int)k;
			if(k-chk==0&&i+j+k==1000){
				f=0;
				break;
			}
		}
	}
	i--;
	printf("%d %d %f %f %f \n",i,j,k,i+j+k,i*j*k);
	return 0;
}
