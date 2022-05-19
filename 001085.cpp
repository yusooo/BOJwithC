#include<stdio.h>
int main(){
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	if(x<=w-x){
		if(x<=y || x<=h-y) printf("%d", x);
		else if(y<=h-y) printf("%d", y);
		else printf("%d", h-y);
	}
	else{
		if(w-x<=y || w-x<=h-y) printf("%d", w-x);
		else if(y<=h-y) printf("%d", y);
	 	else printf("%d", h-y);
	}
	return 0;
}
