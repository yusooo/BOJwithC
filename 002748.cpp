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
long long fibo(int n){										�Ǻ���ġ �Լ� ���� 
    long long fiboNum[2] = {0, 1};							�Ǻ���ġ �迭 1, 2��° �� ���� 
    for (int i = 1 ; i < n; i++)							for�� ������ 
        fiboNum[(i+1)%2] = fiboNum[i%2] + fiboNum[(i-1)%2]; ??????????
    return fiboNum[n%2];									�Լ��� ��ȯ 
}
int main(){													main �Լ� 
    int n;													�Է°� 
    scanf("%d", &n);										
    printf("%lld", fibo(n));								��ȯ���� �Ǻ���ġ �� ��� 
}
*/

/*
#include<stdio.h>

long long fibo_memo[100] = {0}; 							�Ǻ���ġ �迭 ���� 
long long fibo(int n)										�Ǻ���ġ �Լ� ���� 
{

	if (fibo_memo[n] != 0)									�迭���� ���ǰ� �Ǿ����� ���� ������ �� 
		return fibo_memo[n];								�迭�� ��ȯ 
	else													�迭���� 0�� �� (������ ����) 
	{
		if (n == 0) return 0;								������ ���� 0�� �� => 0 ��ȯ 
		if (n == 1 || n == 2) return fibo_memo[n] = 1;		1��° Ȥ�� 2��° �迭�� �� => �迭���� 1�� ���� 
		else												������ ���� 
		{
			fibo_memo[n] = fibo(n - 2) + fibo(n - 1);		���� �� = ���� �� + ������ �� ���� ���� 
		}
		return fibo_memo[n];								�迭�� ��ȯ 
	}
}
*/

/*
#include <stdio.h>
int main(){
    int n;		
    scanf("%d", &n);										�� �Է� 
    long long arr[91] = {0, 1};								�Ǻ���ġ �迭 ���� �� 1, 2��° �� �ʱ�ȭ 

    for (int i = 2; i <= n; i++){							for�� ������ 
        arr[i] = arr[i - 1] + arr[i - 2];					�迭 arr[i]���� ������ + ������������ ���� 
		}													�� i�� n���� �������� ������ ������ 
    printf("%lld", arr[n]);									���� for������ ���� arr[n]���� ��� 

    return 0;
}
*/

/*
#include<stdio.h>
long long dp[90];											dp[90] �迭 ���� (90ĭ �迭)		
long long fibonacci(int n){									�Ǻ���ġ �Լ� ���� 
	if(n==1 || n==2) return 1;								1, 2��° �Լ��� 1�� ��ȯ 
	if(dp[n] != 0) return dp[n];							�迭�� n��° ���� 0�� �ƴϸ� (���ǵǾ� ������) �� ��ȯ 
	else dp[n] = fibonacci(n-1) + fibonacci(n-2);			���� ���ǵ��� ��� �ƴϸ� �Ǻ���ġ �Լ� n-1���� n-2���� ���� ������ ���� 
	return dp[n];											�迭�� n��° �� ��ȯ 
}
int main(){													main �Լ� ������ 
	int n;										
	scanf("%d", &n);										�� �Է� 
	printf("%lld", fibonacci(n));							�Ǻ���ġ �Լ� n�� ��� 
	return 0;
}
*/
