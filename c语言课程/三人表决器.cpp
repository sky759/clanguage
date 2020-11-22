#include<stdio.h>
int main(){
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	printf("请第一位开始投票 同意：1 反对：0\n");
	scanf("%d",&a);
	if(a!=0 && a!=1){
		
		printf("此数据无效"); 
	}
	printf("请第二位开始投票 同意：1 反对：0\n");
	scanf("%d",&b);
	if(b!=0 && b!=1){
	
		printf("此数据无效"); 
	}
	printf("请第三位开始投票 同意：1 反对：0\n");
	scanf("%d",&c);
	if(c!=0 && c!=1){
	
		printf("此数据无效"); 
	}
	d=a*100+b*10+c;
	if(d==111 || d==110 || d==011 || d==101){
	    printf("此方案通过！"); 
	} else{
		printf("很遗憾此方案未通过"); 
	}
	 return 0;
}
