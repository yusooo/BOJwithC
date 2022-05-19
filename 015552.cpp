#include<stdio.h>
int main(){
	int t, i=0;
	scanf("%d", &t);
	int sum[t], a, b;
	for(i=0;i<t;i++){
		scanf("%d %d", &a, &b);
		sum[i]=a+b;
	}
	for(i=0;i<t;i++){
		printf("%d\n", sum[i]);
	}
	return 0;
}
