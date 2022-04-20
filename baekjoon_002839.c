#include<stdio.h>				//시작 
int main(){
	int i=0, n;					//i : 총 봉지의 개수, n : 배달해야하는 설탕의 양 
	scanf("%d", &n);			//설탕의 양 입력받기 
	while(1){					//무한반복문 start 
		if(n%5==0){				//n이 5배수면 반복문 즉시 탈출, i=n/5 
			i+=n/5;
			break;
		}
		n-=3;					//아니라면 3kg짜리 한 봉지 생성, 봉지 수 +1 
		i++;
		if(n<=0) break;			//만약 n이 0이거나 그보다 작아지면 반복문 탈출 
	}
	if(n<0) printf("-1");		//n이 0보다 작을 시 해결 불가능이므로 -1 출력 
	else printf("%d", i);		//n이 0이라면 봉지 수 출력 
	return 0;
}


//3kg와 5kg짜리 설탕봉지, 옮겨야 하는 설탕의 양 Nkg
//Nkg에 필요한 봉지 수 i
// <<포인트>> = 우선순위 : 5의 배수인가? -> 아니라면 3 빼기 -> 카운트 증가 -> 반복 -> n이 0 이하인가? -> 출력 
//										ㄴ> 왜 여기선 5를 빼지 않고 바로 3을 뺄까? 	ㄴ> 아니라면 0 이하일 때까지 반복 
//                                          ㄴ> 이거 모르겟음 아직


//										20220413 : 이유 확인 / 3을 빼다가 5의 배수가 되면 바로 5로 나누고 탈출 가능, 3으로 나누지 않는 이유 : 봉지수가 5로 나눌 때보다 더 많음