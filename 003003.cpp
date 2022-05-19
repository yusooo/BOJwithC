#include<stdio.h>
int main(){
	int count[6]={1, 1, 2, 2, 2, 8}, num[6]={}, i;
	for(i=0;i<6;i++){
		scanf("%d", &num[i]);
	}
	for(i=0;i<6;i++){
		printf("%d ", count[i]-num[i]);
	}
	return 0;
}
