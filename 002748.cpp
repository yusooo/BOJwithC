#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	long long arr[91]={0,1};
	for(int i=2;i<=n;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	printf("%lld", arr[n]);
	return 0;
} 

/*
#include <stdio.h>
long long fibo(int n){										피보나치 함수 선언 
    long long fiboNum[2] = {0, 1};							피보나치 배열 1, 2번째 값 정의 
    for (int i = 1 ; i < n; i++)							for문 돌리기 
        fiboNum[(i+1)%2] = fiboNum[i%2] + fiboNum[(i-1)%2]; ??????????
    return fiboNum[n%2];									함수값 반환 
}
int main(){													main 함수 
    int n;													입력값 
    scanf("%d", &n);										
    printf("%lld", fibo(n));								반환받은 피보나치 값 출력 
}
*/

/*
#include<stdio.h>

long long fibo_memo[100] = {0}; 							피보나치 배열 선언 
long long fibo(int n)										피보나치 함수 선언 
{

	if (fibo_memo[n] != 0)									배열값이 정의가 되어있지 않은 상태일 때 
		return fibo_memo[n];								배열값 반환 
	else													배열값이 0일 때 (미정의 상태) 
	{
		if (n == 0) return 0;								실제로 값이 0일 때 => 0 반환 
		if (n == 1 || n == 2) return fibo_memo[n] = 1;		1번째 혹은 2번째 배열일 때 => 배열값을 1로 설정 
		else												미정의 상태 
		{
			fibo_memo[n] = fibo(n - 2) + fibo(n - 1);		현재 값 = 직전 값 + 직직전 값 으로 정의 
		}
		return fibo_memo[n];								배열값 반환 
	}
}
*/

/*
#include <stdio.h>
int main(){
    int n;		
    scanf("%d", &n);										값 입력 
    long long arr[91] = {0, 1};								피보나치 배열 선언 및 1, 2번째 값 초기화 

    for (int i = 2; i <= n; i++){							for문 돌리기 
        arr[i] = arr[i - 1] + arr[i - 2];					배열 arr[i]값은 직전값 + 직직전값으로 정의 
		}													를 i가 n값과 동일해질 때까지 돌린다 
    printf("%lld", arr[n]);									위의 for문에서 구한 arr[n]값을 출력 

    return 0;
}
*/

/*
#include<stdio.h>
long long dp[90];											dp[90] 배열 선언 (90칸 배열)		
long long fibonacci(int n){									피보나치 함수 선언 
	if(n==1 || n==2) return 1;								1, 2번째 함수값 1로 반환 
	if(dp[n] != 0) return dp[n];							배열의 n번째 값이 0이 아니면 (정의되어 있으면) 값 반환 
	else dp[n] = fibonacci(n-1) + fibonacci(n-2);			위의 조건들이 모두 아니면 피보나치 함수 n-1값과 n-2값을 더한 값으로 선언 
	return dp[n];											배열의 n번째 값 반환 
}
int main(){													main 함수 돌리기 
	int n;										
	scanf("%d", &n);										값 입력 
	printf("%lld", fibonacci(n));							피보나치 함수 n값 출력 
	return 0;
}
*/
