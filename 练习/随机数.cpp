#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{
 srand(time(0));
 int a=0;
 int b=(rand() % 50) + 1;//产生1000以内的随机数bai
 printf("请输入1-50中你猜的数：\n"); 
 do{
  scanf("%d",&a);
  if(a==b){
 	printf("猜对了牛逼！\n");
	 break; 
 	} else if(a<b){
 	printf("猜小了，请继续\n");
 	continue;
	}else if(a>b){
 	printf("猜大了，请继续\n");
 	continue;
 	}
	 }while(a<b or a>b);
return 0;
}
