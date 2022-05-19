#include<stdio.h>
int main(){
	int a, i, j, k;
	scanf("%d", &a);
	for(i=a;i>0;i--){
		for(j=a-i;j>0;j--){
			printf(" ");
		}
		for(k=0;k<i;k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
