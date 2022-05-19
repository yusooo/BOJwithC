#include<stdio.h>
int main(){
	int a, i, j, k;
	scanf("%d", &a);
	for(i=0;i<a-1;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(k=0;k<(a-i)*2-1;k++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=a;i++){
		for(j=a-i;j>0;j--){
			printf(" ");
		}
		for(k=0;k<i*2-1;k++){
			printf("*");
		}
		printf("\n");
		hello: ;
	}
	return 0;
}
