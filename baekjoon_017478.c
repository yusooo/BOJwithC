#include<stdio.h>
#define shift(n) for(int i=0;i<(n)*4;i++) printf("_");                                                          //매크로 함수 선언
int jh(int n);                                                                                                  //함수원형 선언
int so(int n);                                                                                                  //함수원형 선언
int main(){
	int n;
	scanf("%d", &n);                                                                                            //재귀횟수 입력받기
	printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
	printf("\"재귀함수가 뭔가요?\"\n");
	jh(n);                                                                                                      //jh함수 호출
	so(n);                                                                                                      //so함수 호출
	return 0;
}
int so(int n){                                                                                                  //so함수 본체 선언
	if(n==0) return 0;
	shift(i);                                                                                                   //shift 매크로 함수 호출
	printf("라고 답변하였지.\n");
	so(n-1);                                                                                                    //재귀
}
int jh(int n){                                                                                                  //jh함수 본체 선언
	if(n!=0){                                                                                                   //인수 n이 0이 아닐 때의 대사
		shift(i);
		printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
		shift(i);
		printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
		shift(i);
		printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\n");
		i++;
		shift(i);
		printf("\"재귀함수가 뭔가요?\"\n");
	}                                                                                   
	else{                                                                                                       //인수 n이 0일 때의 대사
		printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
		return 0;                                                                                               //값 반환 및 함수 종료
	} 
	jh(n-1);                                                                                                    //재귀
}


//결과 : 에러 발생