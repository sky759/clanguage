#include<stdio.h>
#define PI 3.1415926 
int main(){
	float r=0;
	float s=0;
	float c=0;
	printf("请输入圆的半径：");
	scanf("%f",&r);
	s=PI*r*r;
	c=PI*r*2;
	printf("圆的面积是:%f\n",s);
	printf("圆的周长是:%f\n",c);
	return 0;
}
