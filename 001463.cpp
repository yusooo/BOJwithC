#include<stdio.h>
#define MIN(X,Y) ((X) < (Y) ? (X) : (Y))
int main(){
    int n, i, dp[1000001]={0,0};
    scanf("%d", &n);
    for(i=2;i<=n;i++){
    	dp[i]=dp[i-1]+1;
    	if(i%2==0) dp[i]=MIN(dp[i],dp[i/2]+1);
    	if(i%3==0) dp[i]=MIN(dp[i],dp[i/3]+1);
	}
	printf("%d", dp[n]);
    return 0;
}
