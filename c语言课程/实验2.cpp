#include<stdio.h>
int main(){
	int data=0x12345678;//�������Ƕ���2��������	��16����Ҫ��4��2���Ʊ�ʾ����������8λ2���ƣ�16������Ҫ����2λ		 
	char txdata1=0,txdata2=0,txdata3=0,txdata4=0;//ʣ��0x123456������char������ֻ��ʾһ���ֽڣ��������ǰ����������56һ���ֽ� 
	txdata4 = data;
	txdata3 = data>> 8;
	txdata2 = data>> 16;
	txdata1 = data>> 24;
	printf("��ֺ��������%0x,%0x,%0x,%0x",txdata1,txdata2,txdata3,txdata4);
	return 0;
}
