#include<stdio.h>
int main(){
	int l, p, news[5], sum[5];
	scanf("%d %d", &l, &p);
	for(int i=0;i<5;i++){
		scanf("%d", &news[i]);
	}
	for(int i=0;i<5;i++){
		sum[i]=news[i]-l*p;
	}
	for(int i=0;i<5;i++){
		printf("%d ", sum[i]);
	}
	return 0;
}
