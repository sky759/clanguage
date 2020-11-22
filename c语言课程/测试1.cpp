#include<stdio.h>
int main(){
	int i=0;
	int t=0;
	int x=0;
	int y=0;
	int sum1=0;
	int sum2=0;//定义变量 
	printf("本程序可打印30以内奇数并且判断3的倍数！\n"); 
	for(i=1;i<=30;i++){
		if(i%2!=0){
			printf("奇数是：%d\n",i); }
		if(i%2!=0&&i%3==0){
			printf("3的倍数:%d\n",i);
		} 
		if(i%2!=0&&i%3!=0){
			sum1++;
			printf("沃德玛雅\n");
			 
		}//打印30以内奇数，其中3的倍数会在打印数字后表示出，不是3的倍数会在打印数字后会表示为“沃德玛雅” 
	}
	printf("沃德玛雅出现的次数是：%d\n",sum1);//统计沃德玛雅出现的次数 
	printf("请输入一个数：");
	scanf("%d",&t); 
	x=((t*t)+1)%2;//计算输入数的平方加一后除二的余数 
	printf("余数是：%d\n",x);//余数结果 
	for(y=1;y<=100;y++){
		if(y%2!=0 && y%3==0)
		 sum2 += y;
	}//计算100以内的3的倍数的和 
	printf("100以内3的倍数的和是：%d",sum2);//计算和的值 
	return 0;
	} 
