#include<stdio.h>
int main(){
	int num=7;
	int sum=7;
	sum=(num++,sum++,++num);                                                                                                                                                                                                                                           
	printf("%d",sum);
	return 0;
	
} 
