#include<stdio.h>
/*定义了三个全局变量*/
float data1 =0 , data2=0;
float result = 0 ; 
int n=0;
/*求和*/
void sum() 
{
	result = data1 + data2 ;
}
/*减法*/
void sub() 
{
	result = data1 - data2 ;
}
/*乘法*/
void mul() 
{
	result = data1 * data2 ;
}
/*除法*/
void div() 
{
	result = data1 * data2 ;
}

int main()
{
    int select_num = 0 ; 
	  // 值为1 2 3 4 时分别为加减乘除
    do{
	printf("请输入两个数据：");
    scanf("%f", &data1) ;
    scanf("%f", &data2) ;
	printf("请输入你要对应运算1加，2减，3乘，4除，请选择：");
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
    printf("计算结果为 %f", result); 
    printf("是否继续计算，继续：1 退出：2",n);
    scanf("%d",&n);
	}while(n==1);  
}





