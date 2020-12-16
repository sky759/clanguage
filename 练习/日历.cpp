#include<stdio.h>
int main() {
	int  year=0,month=0,yeardays=0,day=0,monthday=0;
	int  b=0,c=0,d=0,e=0;
	int  i=0,y=0;
	int  weekday=0;
	int  x=0;
	printf("请输入年份");
	scanf("%d",&year);
	printf("请输入月份(1~12月)");
	scanf("%d",&month);
	for(b=1900; b<year; b++) {
		if(b%4==0 && b%100!=0|| b%400==0){
			yeardays=yeardays+366;
		} else {
			yeardays=yeardays+365;
		}
	}
	if(year%4==0 && year%100!=0 || year%400==0) {
		x=1;
	}  else {
		x=0;
	}
	c=month-1;
	if(x==1) {
		for(e=0; e<=c; e++) {
			if(e==1||e==3||e==5||e==7||e==8||e==10||e==12) {
				monthday=monthday+31;
			}
			if(e==4||e==6||e==9||e==11) {
				monthday=monthday+30;
			}
			if(e==2) {
				monthday=monthday+29;
			}
		}
	}
	if(x==0) {
		for(e=0; e<=c; e++) {
			if(e==1||e==3||e==5||e==7||e==8||e==10||e==12) {
				monthday=monthday+31;
			}
			if(e==4||e==6||e==9||e==11) {
				monthday=monthday+30;
			}
			if(e==2) {
				monthday=monthday+28;
			}
		}
	}
	day=yeardays+monthday;
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12) {
		d=31;
	}
	if(month==4||month==6||month==9||month==11) {
		d=30;
	}
	if(x==1 && month==2) {
		d=29;
	}
	if(x==0 && month==2) {
		d=28;
	}
	printf("——————————————\n");
	printf("%d年%d月日历\n",year,month);
	printf("周一\t周二\t周三\t周四\t周五\t周六\t周日\n");
	weekday=day%7;
	for(y=0; y<weekday; y++) {
		printf("\t");
	}
	for(i=1; i<=d; i++) {
		printf("%d\t",i);
		if((i+weekday)%7==0) {
			printf("\n");
		}
	}
}
