#include<stdio.h>
int main() {
	int a, b, c, sum, i, j, count[10]={0}, num[10]={0};
	scanf("%d %d %d", &a, &b, &c);
	sum=a*b*c;
	for(i=1;i<=9;i++){
		num[i]=sum%(10^i)/(10^(i-1));
	}
	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			if(num[i]==j) count[j]++;
		}
	}
	for(i=1;i<=9;i++){
		printf("%d\n", count[i]);
	}
	return 0;
}
