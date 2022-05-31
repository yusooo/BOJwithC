#include<stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	char b[a];
	scanf(" %s", &b);
	switch(b[a-1]){
		case 'k':
		case 'i':
		case 'j':
		case 'u':
		case 'h':
		case 'y':
		case 'n':
		case 'b':
		case 'm':
		case 'l':
		case 'o':
		case 'O':
		case 'p':
		case 'P':
			printf("0");
			break;
		default :
			printf("1");
			break;
	}
	return 0;
}
