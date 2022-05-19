#include<stdio.h>
int main(){
	int T, i=0;
	scanf("%d", &T);
	int a[T], b[T];
	while(i!=T){
		scanf("%d %d", &a[i], &b[i]);
		i+=1;
	}
	i=0;
	while(i!=T){
		printf("%d\n", a[i]+b[i]);
		i++;
	}
}
