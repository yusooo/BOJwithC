#include<stdio.h>
int main(){
	int n, m, score=0;
	scanf("%d %d", &n, &m);
	int now[1000]={0}, past[1000]={0};
	for(int i=0;i<n;i++) scanf("%d", &now[i]);
	for(int i=0;i<m;i++) scanf("%d", &past[i]);
	if(n>=m){
		for(int i=0;i<n;i++){
			score=score<past[i]-now[i]?past[i]-now[i]:score;
		}
	}
	else{
		for(int i=0;i<m;i++){
			score=score<past[i]-now[i]?past[i]-now[i]:score;
		}
	}
	printf("%d", score);
	return 0;
}