#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	int a[t], b[t], i;
	for(i=0;i<t;i++){
		scanf("%d %d", &a[i], &b[i]);
	}
	for(i=0;i<t;i++){
		printf("Case #%d: %d + %d = %d\n", i+1, a[i], b[i], a[i]+b[i]);
	}
	return 0;
}
