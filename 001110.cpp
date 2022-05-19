#include<stdio.h>
int main(){
	int a, i, j, n=0, b, l;
	scanf("%d", &a);
	b=a;
	while(1){
		i=a/10;
		j=a%10;
		l=(i+j)%10;
		a=(j*10)+l;
		n++;
		if(a==b) break;	
	}
	printf("%d", n);
	return 0;
}
