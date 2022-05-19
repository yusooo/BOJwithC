#include<stdio.h>
int main(){
	char a[8][8]={};
	int i, j, k=0;
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			scanf("%c", &a[i][j]);
		}
		scanf("\n");
	}
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			if(a[i][j]=='F' && i%2==j%2) k++;
		}
	}
	printf("%d", k);
	return 0;
}
