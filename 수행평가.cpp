#include<stdio.h>

int i;

struct product {
	int barcode;
	char slaename[100];
	int salecount;
}list[100] = { 0 };

void input()
{
	printf("��ǰ ���ڵ� ��ȣ : ");
	scanf("%d", &list[i].barcode);
	printf("��ǰ �̸� : ");
	scanf("%s", &list[i].slaename);
	printf("��ǰ ���� : ");
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
	printf("�Ǹ��� ��ǰ ���ڵ� ��ȣ �Է� : ");
	scanf("%d", &code);
	printf("�Ǹ��� ��ǰ�� ���� �Է� : ");
	scanf("%d", &cnt);
	printf("\n");

	for(int j = 0; j < i; j++) {
		if (code == list[j].barcode) {
			if(cnt>list[j].salecount) {
				printf("��� �����մϴ�.\n\n");
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
		printf("\n1. ��ǰ �߰�\t2. ��ǰ �����ֱ�\t3. �Ǹ��� ��ǰ\t0. ����\n\n");
		scanf("%d", p);
		if (1 == *p) {
			input();
			continue;
		}
		else if (2 == *p) {
			printf("��ǰ ���ڵ� ��ȣ\t��ǰ �̸�\t��ǰ ����\n");
			show();
			continue;
		}
		else if (3 == *p) {
			sold();
			continue;
		}
		else if (0 == *p) {
			printf("���α׷� ����\n");
			break;
		}
		else {
			printf("��ȣ�� �����ϴ�. �ٽ� �Է��ϼ���.\n\n");
		}
	}

	return 0;
}
