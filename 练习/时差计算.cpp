#include<stdio.h>
int main(){
	int hour1,minute1;
	int hour2,minute2;
	printf("������ص�A��ʱ�̣�\n");
	scanf("%d %d",&hour1,&minute1);
	printf("������ص�B��ʱ�̣�\n");
	scanf("%d %d",&hour2,&minute2);
	int t1=hour1*60+minute1;
	int t2=hour2*60+minute2;
	int T=t2-t1;
	printf("ʱ���Ϊ%dʱ%d��\n",T/60,T%60);
	return 0;
} 
