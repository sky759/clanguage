#include<stdio.h>
int main(){
	int i=0;
	do{
	i=i+1;
	if(i%2==0){
		printf("ż����",i);
	} else{
		printf("������",i);
	}
	printf("%d\n",i);
	}while(i<100);
	return 0;
} 
