#include<stdio.h>
int main(){
	int h, m, c;
	scanf("%d %d %d", &h, &m, &c);
	if(m+c>=60){
		if(h+((m+c)/60)>23) h=h-24+(m+c)/60;
		else h+=(m+c)/60;
		m=(m+c)%60;
	}
	else m+=c;
	printf("%d %d", h, m);
	return 0;
}
