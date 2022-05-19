#include<stdio.h>
int main(){
	int a, count=0;
	scanf("%d", &a);
	do{
		if((a-3)%5==0 && a-3>0){
			a-=3;
			count++;
		}
		else if((a-5)%3==0 && a-5>0){
			a-=5;
			count++;
		}
		else break;
	}while(a>0);
	do{
		if(a%5==0){
			a-=5;
			count++;
		}
		else if(a%3==0){
			a-=3;
			count++;
		}
		else break;
	}while(a>0);
	if(a==0) printf("%d", count);
	else printf("-1");
	return 0;
}
