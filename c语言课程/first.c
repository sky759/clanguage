#include<stdio.h>
/*����������ȫ�ֱ���*/
float data1 =0 , data2=0;
float result = 0 ; 
int n=0;
/*���*/
void sum() 
{
	result = data1 + data2 ;
}
/*����*/
void sub() 
{
	result = data1 - data2 ;
}
/*�˷�*/
void mul() 
{
	result = data1 * data2 ;
}
/*����*/
void div() 
{
	result = data1 * data2 ;
}

int main()
{
    int select_num = 0 ; 
	  // ֵΪ1 2 3 4 ʱ�ֱ�Ϊ�Ӽ��˳�
    do{
	printf("�������������ݣ�");
    scanf("%f", &data1) ;
    scanf("%f", &data2) ;
	printf("��������Ҫ��Ӧ����1�ӣ�2����3�ˣ�4������ѡ��");
    scanf("%d", &select_num) ;
    if(select_num == 1) 
    {
    	sum() ;
	}
	if(select_num == 2) 
	{
		sub() ;
	}
	if(select_num == 3) 
	{
		mul() ;
	}
	if(select_num == 4) 
	{
		div() ;
	}
    printf("������Ϊ %f", result); 
    printf("�Ƿ�������㣬������1 �˳���2",n);
    scanf("%d",&n);
	}while(n==1);  
}





