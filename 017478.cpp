#include<stdio.h>
int j=0;
int jh(int n);
int so(int n);
int main(){
	int n;
	scanf("%d", &n);
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	jh(n);
	for(int i=1;i<n+j;i++) printf("____");
	printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
	so(n);
	return 0;
}
int so(int n){
	if(n==0) return 0;
	for(int i=1;i<n;i++) printf("____");
	printf("��� �亯�Ͽ���.\n");
	so(n-1);
}											 
int jh(int n){
	for(int i=1;i<n+j;i++) printf("____");
	printf("\"����Լ��� ������?\"\n");
	if(n==0) return 1;
	j++;												//�� j++�� ��ġ�� ���� �� ����� 
	for(int i=0;i<n+j;i++) printf("____");
	printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
	for(int i=0;i<n+j;i++) printf("____");
	printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
	for(int i=0;i<n+j;i++) printf("____");
	printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
	jh(n-1);
}
