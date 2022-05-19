#include<stdio.h>
int main(){
	int n=0;
	double Max=0, sum=0;
	scanf("%d", &n);
	int a[n+1]={0};
	for(int i=1;i<=n;i++){
		scanf("%d", &a[i]);
		if(a[i]>a[i-1]) Max=a[i];
	}
	for(int i=1;i<=n;i++){
		a[i]=(a[i]/Max)*100;
		sum+=a[i];
	}
	printf("%lf", sum/(double)n);
	return 0;
}

