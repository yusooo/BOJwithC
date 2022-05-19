#include<stdio.h>
int main(){
	int a, b, c, gold, max;
	scanf("%d %d %d", &a, &b, &c);
	if(a==b && b==c) gold=10000+a*1000;
	else if(a==b) gold=1000+a*100;
	else if(b==c) gold=1000+b*100;
	else if(a==c) gold=1000+c*100;
	else{
		a>b ? max=a : max=b;
		max>c ? gold=max*100 : gold=c*100;
	}
	printf("%d", gold);
	return 0;
}
