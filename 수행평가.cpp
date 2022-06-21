#include<stdio.h>

int i;

struct product {
	int barcode;
	char slaename[100];
	int salecount;
}list[100] = { 0 };

void input()
{
	printf("상품 바코드 번호 : ");
	scanf("%d", &list[i].barcode);
	printf("상품 이름 : ");
	scanf("%s", &list[i].slaename);
	printf("상품 개수 : ");
	scanf("%d", &list[i].salecount);
	i++;
}

void show() 
{
	for(int j=0;j<i;j++) {
		printf("\t\t%d\t\t%s\t\t%d\n\n", list[j].barcode, list[j].slaename, list[j].salecount);
	}
}

void sold()
{
	int code, cnt;
	printf("판매할 상품 바코드 번호 입력 : ");
	scanf("%d", &code);
	printf("판매할 상품의 개수 입력 : ");
	scanf("%d", &cnt);
	printf("\n");

	for(int j = 0; j < i; j++) {
		if (code == list[j].barcode) {
			if(cnt>list[j].salecount) {
				printf("재고가 부족합니다.\n\n");
			}
			else {
				list[j].salecount = list[j].salecount - cnt;
				printf("%d\t%s\t%d\n\n", list[j].barcode, list[j].slaename, list[j].salecount);
				break;
			}
		}
	}
}

int main()
{
	int n;
	int* p = &n;
	while (1) {
		printf("\n1. 상품 추가\t2. 상품 보여주기\t3. 판매할 상품\t0. 종료\n\n");
		scanf("%d", p);
		if (1 == *p) {
			input();
			continue;
		}
		else if (2 == *p) {
			printf("상품 바코드 번호\t상품 이름\t상품 개수\n");
			show();
			continue;
		}
		else if (3 == *p) {
			sold();
			continue;
		}
		else if (0 == *p) {
			printf("프로그램 종료\n");
			break;
		}
		else {
			printf("번호가 없습니다. 다시 입력하세요.\n\n");
		}
	}

	return 0;
}
