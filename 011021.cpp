#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	int a, b, sum[t], i;
	for(i=0;i<t;i++){
		scanf("%d %d", &a, &b);
		sum[i]=a+b;
	}
	for(i=0;i<t;i++){
		printf("Case #%d: %d\n", i+1, sum[i]);
	}
	return 0;
}
