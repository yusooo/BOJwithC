#include<stdio.h>
int main(){
	int n, i, j, k;
	scanf("%d", &n);
	for(i=0;i<=n;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(k=1;k<=(n-i)*2-1;k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
