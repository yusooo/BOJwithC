#include<stdio.h>
int main(){
	int c, i, j, stu, sum=0, avg=0;
	scanf("%d", &c); // �׽�Ʈ ���̽� ���� �Է¹ޱ� 
	double per[c] = {0}; // �л� �� 
	for(i=0;i<c;i++){  // �� ���̽� �Է¹ޱ� 
		scanf("%d", &stu); // �л��� �� �Է¹ޱ� 
		int sco[j]={0};  // ���� 
		for(j=0;j<stu;j++){  // �л����� ���� �Է¹ޱ� 
			scanf("%d", &sco[j]); // �迭�� �� �л��� ������ 
			sum+=sco[j];  	// ��� ���ϱ� ���� �հ� 
		}
		for(j=0;j<stu;j++){  // ��պ��� ū �ο� ���ϱ� 
			if(sco[j]>(double)sum/(double)j) avg++; // 
		}
		per[i]=(double)avg/(double)stu; // ��պ��� ū �ο� ���� ���ϱ� 
		sum=0, avg=0;  // �հ� �ʱ�ȭ 
	}
	for(i=0;i<c;i++){  // �� ���̽����� ���� ��� 
		printf("%.3lf%%\n", per[i]); // ��°�ڸ����� ����ϱ� 
	}
	return 0; 
}
