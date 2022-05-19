#include<stdio.h>
int main(){
	unsigned long long a, b;
	scanf("%llu %llu", &a, &b);
	printf("%llu\n%llu\n%llu", a+b, a-b, a*b);
	return 0;
}
