#include<stdio.h>
int main(){
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	printf("���һλ��ʼͶƱ ͬ�⣺1 ���ԣ�0\n");
	scanf("%d",&a);
	if(a!=0 && a!=1){
		
		printf("��������Ч"); 
	}
	printf("��ڶ�λ��ʼͶƱ ͬ�⣺1 ���ԣ�0\n");
	scanf("%d",&b);
	if(b!=0 && b!=1){
	
		printf("��������Ч"); 
	}
	printf("�����λ��ʼͶƱ ͬ�⣺1 ���ԣ�0\n");
	scanf("%d",&c);
	if(c!=0 && c!=1){
	
		printf("��������Ч"); 
	}
	d=a*100+b*10+c;
	if(d==111 || d==110 || d==011 || d==101){
	    printf("�˷���ͨ����"); 
	} else{
		printf("���ź��˷���δͨ��"); 
	}
	 return 0;
}
