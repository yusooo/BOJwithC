#include<stdio.h>
int main(){
	int a=1, b=1, i=0, sum[1000];
	for(i=1;i>0;i++){
		scanf("%d %d", &a, &b);
		if(a==0 && b==0) break;
		sum[i]=a+b;
	}
	for(a=1;a<i;a++){
		printf("%d\n", sum[a]);
	}
	return 0;
}
