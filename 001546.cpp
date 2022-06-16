#include<stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	double sco[a]={0}, max=0, sum=0;
	for(int i=0;i<a;i++){
		scanf("%d", &sco[i]);
		if(max<sco[i]) max=sco[i];
	}
	for(int i=0;i<a;i++){
		sco[i]=sco[i]/max*100;
		sum+=sco[i];
	}
	printf("%lf", (double)sum/(double)a);
}

