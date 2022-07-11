#include <stdio.h>
int main(){
	int scan[10]={0}, per[42]={0}, count=0;
	for(int i=0;i<10;i++){
		scanf("%d", &scan[i]);
		per[scan[i]]++;
	}
	for(int i=0;i<42;i++){
		if(per[i]!=0) count++;
	}
	printf("%d", count);
	return 0;
}