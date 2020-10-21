#include<stdio.h>
int main(){
	double foot;
	double inch;
	printf("请分别输入身高的英尺和英寸\n""(例如输入5 7意为五英尺七英寸)\n");
	scanf("%lf %lf",&foot,&inch);
	printf("您的身高是%f米。\n",(foot+inch/12)*0.3048);
	return 0;
} 
