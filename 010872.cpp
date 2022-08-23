#include<stdio.h>
int facto(int n);
int main(){
	int n;
	scanf("%d", &n);
	printf("%d", facto(n));
}
int facto(int n){
	if(n<=1) return 1;
	int newfacto = facto(n--);
	return n*newfacto;
}
