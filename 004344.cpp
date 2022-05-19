#include<stdio.h>
int main(){
	int c, n, i, j, k, sum=0, count, av[c]={};
	scanf("%d", &c);
	for(i=0;i<c;i++){
		scanf("%d", &n);
		double per[n];
		int p[n]={};
		for(j=0;j<n;j++){
			scanf("%d", &k);
			sum+=k;
			p[j]=k;
		}
		av[i]=(float)sum/k;
		for(int u=0;u<n;u++){
			if(av[i]<p[u]) count++; 
		}
		per[i]=(float)count/n;
	}
	while(c>0){
		printf("%.3lf%%", per[i]);
		c--;
	}
	return 0;
}
