#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{
 srand(time(0));
 int a=0;
 int b=(rand() % 50) + 1;//����1000���ڵ������bai
 printf("������1-50����µ�����\n"); 
 do{
  scanf("%d",&a);
  if(a==b){
 	printf("�¶���ţ�ƣ�\n");
	 break; 
 	} else if(a<b){
 	printf("��С�ˣ������\n");
 	continue;
	}else if(a>b){
 	printf("�´��ˣ������\n");
 	continue;
 	}
	 }while(a<b or a>b);
return 0;
}
