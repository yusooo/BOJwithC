#include<stdio.h>
int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	if(((n-1)/m)%2==0){
		printf("Can win");
	}
	else printf("Can't win");
	return 0;
}
