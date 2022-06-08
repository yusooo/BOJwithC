#include<stdio.h>
int sqr(int n);
int main() {
	int a, b, c, num[10];
	scanf("%d %d %d", &a, &b, &c);
	for(int i=1;i<10;i++){
		num[((a*b*c)%sqr(i))/((a*b*c)%sqr(i-1))]++;
	}
	num[(a*b*c)]++;
	for(int i=0;i<10;i++){
		printf("%d\n", num[i]);
	}
	return 0;
}
int sqr(int n){
	int a=1;
	for(int i=0;i<n;i++){
		a*=10;
	}
	return a;
}
