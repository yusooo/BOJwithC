#include<stdio.h>
int main(){
	int c, i, j, stu, sum=0, avg=0;
	scanf("%d", &c); // 테스트 케이스 개수 입력받기 
	double per[c] = {0}; // 학생 비 
	for(i=0;i<c;i++){  // 각 케이스 입력받기 
		scanf("%d", &stu); // 학생의 수 입력받기 
		int sco[j]={0};  // 점수 
		for(j=0;j<stu;j++){  // 학생마다 점수 입력받기 
			scanf("%d", &sco[j]); // 배열에 각 학생의 점수값 
			sum+=sco[j];  	// 평균 구하기 위해 합계 
		}
		for(j=0;j<stu;j++){  // 평균보다 큰 인원 구하기 
			if(sco[j]>(double)sum/(double)j) avg++; // 
		}
		per[i]=(double)avg/(double)stu; // 평균보다 큰 인원 비율 구하기 
		sum=0, avg=0;  // 합계 초기화 
	}
	for(i=0;i<c;i++){  // 각 케이스마다 비율 출력 
		printf("%.3lf%%\n", per[i]); // 셋째자리까지 출력하기 
	}
	return 0; 
}
