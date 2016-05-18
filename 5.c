#include "stdio.h"
#include "math.h"
int prime(long long int num){
	if(num%2==0&&num!=2||num!=3&&num%3==0)	return 0;
	long long int temp=sqrt(num);
	for(long long int i=3;i<=temp;i+=2){
		if(num%i==0)	return 0;
	}
	return 1;
}
void sort(int *arr,int count){
	int swap,temp;
	do{
		swap=0;
		for(int i=0;i>count-1;i++){
			if(arr[i]<arr[i+1]){
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				swap=1;
			}
		}
	}while(swap);
}

int lcm(int *arr,int count){
	int flag=1;;
	int result=1;
	sort(arr,count);
	int max=arr[count-1]/2;
	printf("%d\n",max);
	for(int i=2;i<=max;i++){
		if(!prime(i))	continue;
		flag=1;
		for(int j=0;j<count&&flag;j++){
			if(arr[j]%i==0){
				arr[j]/=i;
				flag=2;
			}
			if(j==count-1){
				if(flag==2){
					result*=i;
					j=0;
					flag=1;
				}
				else{
					flag=0;
				}
			}
		}
		if(i>2)	i++;
	}
	for(int i=0;i<count;i++){
		result*=arr[i];
	}
	return result;
}
int main(){
	int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	
	printf("%d\n",lcm(arr,20));
	return 0;
}
