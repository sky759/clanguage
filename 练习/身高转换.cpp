#include<stdio.h>
int main(){
	double foot;
	double inch;
	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ��\n""(��������5 7��Ϊ��Ӣ����Ӣ��)\n");
	scanf("%lf %lf",&foot,&inch);
	printf("���������%f�ס�\n",(foot+inch/12)*0.3048);
	return 0;
} 
