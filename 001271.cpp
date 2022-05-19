#include<stdio.h>
int main(){
	unsigned long long int n, m;
	scanf("%llu %llu", &n, &m);
	printf("%llu\n%llu", n/m, n%m);
	return 0;
}
