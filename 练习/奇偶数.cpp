#include<stdio.h>
int main(){
	int i=0;
	do{
	i=i+1;
	if(i%2==0){
		printf("Å¼Êý£º",i);
	} else{
		printf("ÆæÊý£º",i);
	}
	printf("%d\n",i);
	}while(i<100);
	return 0;
} 
