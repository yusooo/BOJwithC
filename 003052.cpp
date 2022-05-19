#include<stdio.h>
int main(){
	int f[10]={}, r[10]={}, i=0, j=0, count=0;
	for(i=0;i<10;i++){
		scanf("%d", &f[i]);
		r[i]=f[i]%42;
	}
	for(i=0;i<10;i++){
		while(j<=10){
			if(r[i]==r[j]) count++;
			j++;
		}
	}
	printf("%d", count);
	return 0;
}
