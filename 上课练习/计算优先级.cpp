#include<stdio.h>
int main(){
	int i=20;
	int j=5;
	int s=0;
	printf("%d\n",s=i/(j--)+(++j));
	printf("%d\n",j);
	printf("%d\n",i);
	return 0;
} 
