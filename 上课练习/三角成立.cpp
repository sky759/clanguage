#include<stdio.h>
int main(){
	int a=0;
	int b=0;
	int c=0;
	printf("����������ľ������\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c&&a-b<c){
		printf("a-b-c:Y");
	} else{
		printf("a-b-c:N");
	}
	return 0;
} 
