#include<stdio.h>
int main(){
	int i=0;
	do{
	printf("请输入一个数\n");
	scanf("%d",&i); 
	}while(i<=0);
	printf("循环结束！");
	return 0;
} 
