#include<stdio.h>
int main(){
	int n, m, i, sum=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%1d", &m);
		sum+=m;
	}
	printf("%d", sum);
	return 0;
}
