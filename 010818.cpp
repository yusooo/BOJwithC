#include<stdio.h>
int main(){
	int a, max=-1000000, min=1000000, i;
	scanf("%d", &a);
	int b[a]={};
	for(i=0;i<a;i++){
		scanf("%d", &b[i]);
	}
	for(i=0;i<a;i++){
		if(max<b[i]) max = b[i];
		if(min>b[i]) min = b[i];
	}
	printf("%d %d", min, max);
	return 0;
}
