#include<stdio.h>
int main(){
	char a='a';
	printf("请输入一个字符：",a);
	scanf("%c",&a);
	printf("%c的十进制=%d\n",a,a);
	printf("%c的八进制=%o\n",a,a);
	printf("%c的十六进制=%0x\n",a,a);
	return 0;
}
