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
 int b=0;//����50���ڵ������bai
 printf("��ӭ����������Ϸ��ÿ����5�β������ᣬ�¶�һ�μ�һ�֣�ף����ˣ�\n");
 while(d==1){
 	b=(rand() % 50) + 1;
    printf("������1-50����µ�����\n");
 do{scanf("%d",&a);
    sum2=e++;
if(a==b){ 
    if(sum2<=4){ sum=c++;
 	printf("�¶���ţ�ƣ�\n");
 	printf("��ϲ���ּ�һ��������%d��",sum);}
	else{printf("�ܱ�Ǹ���¶��˵���������޷��ӷ�");} 
 	e=0;
	printf("�Ƿ�����������밴1���˳��밴2\n");
 	scanf("%d",&d);
	  } 
else if(a<b){
 	printf("��С�ˣ������\n");}
else if(a>b){
 	printf("�´��ˣ������\n");}
	 }while(a<b or a>b);}
	printf("��л���棬��һ�������%d��",sum); 
return 0;
}
