#include<stdio.h>
int main(){
	int hour1,minute1;
	int hour2,minute2;
	printf("请输入地点A的时刻：\n");
	scanf("%d %d",&hour1,&minute1);
	printf("请输入地点B的时刻：\n");
	scanf("%d %d",&hour2,&minute2);
	int t1=hour1*60+minute1;
	int t2=hour2*60+minute2;
	int T=t2-t1;
	printf("时间差为%d时%d分\n",T/60,T%60);
	return 0;
} 
