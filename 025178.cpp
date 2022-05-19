#include<stdio.h>
int main(){
	int i, n, t[100000]={0};
	scanf("%d", &n);
	char a[100000]={}, b[100000]={};
	for(i=0;i<n;i++){
		scanf(" %s", a);
		if(a[i]=='a') i--;
		else if(a[i]='e') i--;
		else if(a[i]='i') i--;
		else if(a[i]='o') i--;
		else if(a[i]='u') i--;
	}
	for(i=0;i<n;i++){
		scanf(" %s", b);
		if(a[i]=='a') i--;
		else if(a[i]='e') i--;
		else if(a[i]='i') i--;
		else if(a[i]='o') i--;
		else if(a[i]='u') i--;
	}
	for(i=0;i<n;i++){
		if(a[i]!=b[i]){
			t[i]=0;
			break;
		} 
		else t[i]=1;
	}
	if(t[i]) printf("YES");
	else printf("NO");
	return 0;
}
