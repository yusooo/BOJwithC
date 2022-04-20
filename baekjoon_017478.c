#include<stdio.h>
int j=0;
int jh(int n);
int so(int n);
int main(){
	int n;
	scanf("%d", &n);
	printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
	jh(n); 
	for(int i=1;i<n;i++) printf("____");
	printf("\"재귀함수가 뭔가요?\"\n");
	for(int i=1;i<n;i++) printf("____");
	printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
	so(n);
	return 0;
}
int so(int n){
	if(n==0) return 0;
	for(int i=1;i<n;i++) printf("____");
	printf("라고 답변하였지.\n");
	so(n-1);
}											//여기까지는 문제없이 작동 
int jh(int n){								//문제의 시작 : jh 함수
	if(j==n) return 1;
	for(int i=1;i<j;i++) printf("____");
	printf("\"재귀함수가 뭔가요?\"\n");
	for(int i=1;i<j;i++) printf("____");
	printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
	for(int i=1;i<j;i++) printf("____");
	printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
	for(int i=1;i<j;i++) printf("____");
	printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
	j++;
	jh(n-1);
}