#include<stdio.h>
int main(){
	int i=0;
	printf("请输入一个数：\n");
	scanf("%d",&i);
	if(i==1){
		printf("你输入的数字为1。\n");
	} else{
		printf("你输入的数字不是1\n"); 
	}
	return 0;
} 
