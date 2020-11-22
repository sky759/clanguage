#include<stdio.h>
int main(){
	int data=0x12345678;//左右移是对于2进制来讲	，16进制要用4个2进制表示，所以右移8位2进制，16进制需要右移2位		 
	char txdata1=0,txdata2=0,txdata3=0,txdata4=0;//剩下0x123456，但是char的类型只表示一个字节，不够表达前面数，留下56一个字节 
	txdata4 = data;
	txdata3 = data>> 8;
	txdata2 = data>> 16;
	txdata1 = data>> 24;
	printf("拆分后的数据是%0x,%0x,%0x,%0x",txdata1,txdata2,txdata3,txdata4);
	return 0;
}
