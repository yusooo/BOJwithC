//함수 사용 없이 배열만으로 풀이한 경우

#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);					//n번째 입력받기
	long long arr[91]={0,1};			//입력의 제한이 90 이하의 자연수이므로 배열도 91까지 선언
	for(int i=2;i<=n;i++){				//i의 1번째 값은 0, 2번째 값은 1로 초기화해두었으므로 3번째 값부터 for문
		arr[i]=arr[i-1]+arr[i-2];		//배열 값을 직전 값과 직직전 값의 합으로 초기화
	}
	printf("%lld", arr[n]);				//배열의 n번째 값 (구하는 값)을 출력
	return 0;
} 