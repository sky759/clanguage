#include<stdio.h>
int main(){
	int i=12345;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	a=i/10000,b=(i/1000)%10,c=(i/100)%10,d=(i/10)%10,e=i%10;
	printf("��λ�ǣ�%d ʮλ�ǣ�%d ��λ�ǣ�%d ǧλ�ǣ�%d ��λ�ǣ�%d",e,d,c,b,a);
	return 0;
} 
