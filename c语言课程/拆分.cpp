#include<stdio.h>
int main(){
	int i=12345;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	a=i/10000,b=(i/1000)%10,c=(i/100)%10,d=(i/10)%10,e=i%10;
	printf("个位是：%d 十位是：%d 百位是：%d 千位是：%d 万位是：%d",e,d,c,b,a);
	return 0;
} 
