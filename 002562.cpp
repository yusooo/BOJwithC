#include<stdio.h>
int main(){
	int a[9], max=0, maxnum, i;
	for(i=1;i<=9;i++){
		scanf("%d", &a[i]);
	}
	for(i=1;i<=9;i++){
		if(max<a[i]){
			max=a[i];
			maxnum=i;
		}
	}
	printf("%d\n%d", max, maxnum);
	return 0;
}
