#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{
 srand(time(0));
 int a=0;
 int c=1;
 int d=1;
 int e=0;
 int sum=0;
 int sum2=0;
 int b=0;//产生50以内的随机数bai
 printf("欢迎来到猜数游戏，每次有5次猜数机会，猜对一次加一分，祝你好运！\n");
 while(d==1){
 	b=(rand() % 50) + 1;
    printf("请输入1-50中你猜的数：\n");
 do{scanf("%d",&a);
    sum2=e++;
if(a==b){ 
    if(sum2<=4){ sum=c++;
 	printf("猜对了牛逼！\n");
 	printf("恭喜积分加一，你获得了%d分",sum);}
	else{printf("很抱歉，猜对了但次数超额，无法加分");} 
 	e=0;
	printf("是否继续？继续请按1，退出请按2\n");
 	scanf("%d",&d);
	  } 
else if(a<b){
 	printf("猜小了，请继续\n");}
else if(a>b){
 	printf("猜大了，请继续\n");}
	 }while(a<b or a>b);}
	printf("感谢游玩，您一共获得了%d分",sum); 
return 0;
}
