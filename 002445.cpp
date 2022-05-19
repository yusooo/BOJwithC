#include<stdio.h>
int main(){
	int n, i, j, k;
	scanf("%d", &n);
	for(i=1;i<n;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		for(k=(n-i)*2-1;k>=0;k--){
			printf(" ");
		}
		for(j=i;j>0;j--){
			printf("*");
		}
		printf("\n");
	}
	for(i=n;i>0;i--){
		for(j=i;j>0;j--){
			printf("*");
		}
		for(k=(n-i)*2-1;k>=0;k--){
			printf(" ");
		}
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
