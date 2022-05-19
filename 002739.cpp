#include<stdio.h>
int main(){
	int n, a=1;
	scanf("%d", &n);
	while(a<=9){
		printf("%d * %d = %d\n", n, a, n*a);
		a++;
	}
	return 0;
}
