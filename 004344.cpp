#include<stdio.h>
int main(){
	int c, i, j, stu, sum=0;
	scanf("%d", &c);
	double per[c] = {0};
	for(i = 0;i<c;i++){
		scanf("%d", &stu);
		int sco[j]={0};
		for(j=0;j<stu;j++){
			scanf("%d", &sco[j]);
			sum+=sco[j];
		}
		for(j=0;j<stu;j++){
			if(sco[j]>(double)sum/(double)j) per[i]++;
		}
		per[i]/=stu;
		sum=0;
	}
	for(i=0;i<c;i++){
		printf("%.3lf%%\n", per[i]);
	}
}
