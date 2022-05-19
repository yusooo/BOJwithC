#include<stdio.h>
int main(){
	int a[5], sum=0, i;
	for(i=5;i>0;i--){
		scanf("%d", &a[i]);
		sum+=(a[i]*a[i]);
	}
	printf("%d", sum%10);
	return 0;
}
