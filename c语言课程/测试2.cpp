#include<stdio.h>
int main(){
	int i=1;
	int a=0;
	int type=0;
	int money=0;
	int money2=0;
	int y=0;
	int g=0;//������� 
	printf("��ӭ����������ȡ��,��忨��\n");
	printf("������6λ������"); 
	scanf("%d",&a);//�������룬�������ж������Ƿ���ȷ 
	if(a==123456){
	printf("������ȷ��ѡ��ҵ��\n"); //������ȷ����ѭ�� 
	while(i==1){
		printf("��ѯ����밴1����Ǯ�밴2��ȡǮ�밴3�������밴4����ϵ�ͷ��밴5\n"); //ѡ��ҵ�� 
		scanf("%d",&type);
		switch(type){
			case 1:printf("�������ʣ��10000Ԫ��\n");
			       break;
			case 2:printf("�������Ǯ����\n");
				   scanf("%d",&money);
				   money=money+10000;
				   printf("��Ǯ�ɹ������%dԪ��\n",money);
				   break;
			case 3:printf("������ȡǮ����\n");
			       scanf("%d",&money2);	
				   if(money2<=10000){ y=10000-money2;
				   printf("ȡǮ�ɹ������ʣ��%dԪ\n",y);
				   }else{
				   printf("��Ǹ����������\n");	
				   }break;    
		    case 4:printf("���������밴1�����������밴2���̿��밴3\n");
			       switch(g){
			       	case 1:printf("������Ϊ������Ϊ111111��\n");
			       	       break;
			       	case 2:printf("��Ϊ��֪ͨ������Աǰ��������,��������鷳ʮ�ֱ�Ǹ��\n");
					       break;
					case 3:printf("��Ϊ����ϵרҵ��ԱΪ�����������ĵȴ�\n");
					       break;	             
				   } break;
		    case 5:printf("�ͷ��绰�ѽ�ͨ��\n");
		           break;
		}
		printf("������ɣ����������밴1���˿��밴2\n");  //ҵ����ɺ�ɼ���ѡ���������˳�        ����2���ж�ͬ�� 
	        scanf("%d",&i); 
	}
	    printf("��лʹ�ã�ף����죬�ټ���\n"); 
    }//�˺�1��ʹ�� 
	if(a==456123){
    	printf("������ȷ��ѡ��ҵ��\n"); 
	while(i==1){ 
		printf("��ѯ����밴1����Ǯ�밴2��ȡǮ�밴3�������밴4����ϵ�ͷ��밴5\n"); 
		scanf("%d",&type);
		switch(type){
			case 1:printf("�������ʣ��5000Ԫ��\n");
			       break;
			case 2:printf("�������Ǯ����\n");
				   scanf("%d",&money);
				   money=money+5000;
				   printf("��Ǯ�ɹ������%dԪ��\n",money);
				   break;
			case 3:printf("������ȡǮ����\n");
			       scanf("%d",&money2);	
				   if(money2<=5000){ y=5000-money2;
				   printf("ȡǮ�ɹ������ʣ��%dԪ\n",y);
				   }else{
				   printf("��Ǹ����������\n");	
				   }break;    
		    case 4:printf("���������밴1�����������밴2���̿��밴3\n");
			       switch(g){
			       	case 1:printf("������Ϊ������Ϊ222222��\n");
			       	       break;
			       	case 2:printf("��Ϊ��֪ͨ������Աǰ��������,��������鷳ʮ�ֱ�Ǹ��\n");
					       break;
					case 3:printf("��Ϊ����ϵרҵ��ԱΪ�����������ĵȴ�\n");
					       break;	             
				   } break;
		    case 5:printf("�ͷ��绰�ѽ�ͨ��\n");
		           break;
		}
		printf("������ɣ����������밴1���˿��밴2\n");
	        scanf("%d",&i); 
	}
	 printf("��лʹ�ã�ף����죬�ټ���\n"); 
    }//�˺�2��ʹ�� 
	if(a==789456){
	printf("������ȷ��ѡ��ҵ��\n"); 
	while(i==1){
		printf("��ѯ����밴1����Ǯ�밴2��ȡǮ�밴3�������밴4����ϵ�ͷ��밴5\n"); 
		scanf("%d",&type);
		switch(type){
			case 1:printf("�������ʣ��20000Ԫ��\n");
			       break;
			case 2:printf("�������Ǯ����\n");
				   scanf("%d",&money);
				   money=money+20000;
				   printf("��Ǯ�ɹ������%dԪ��\n",money);
				   break;
			case 3:printf("������ȡǮ����\n");
			       scanf("%d",&money2);	
				   if(money2<=20000){ y=20000-money2;
				   printf("ȡǮ�ɹ������ʣ��%dԪ\n",y);
				   }else{
				   printf("��Ǹ����������\n");	
				   }break;    
		    case 4:printf("���������밴1�����������밴2���̿��밴3\n");
			       switch(g){
			       	case 1:printf("������Ϊ������Ϊ333333��\n");
			       	       break;
			       	case 2:printf("��Ϊ��֪ͨ������Աǰ��������,��������鷳ʮ�ֱ�Ǹ��\n");
					       break;
					case 3:printf("��Ϊ����ϵרҵ��ԱΪ�����������ĵȴ�\n");
					       break;	             
				   } break;
		    case 5:printf("�ͷ��绰�ѽ�ͨ��\n");
		           break;
		}
		printf("������ɣ����������밴1���˿��밴2\n");
	        scanf("%d",&i); 
	}
	printf("��лʹ�ã�ף����죬�ټ���\n"); 
    }//�˺�3��ʹ�� 
	if(a!=123456 && a!=456123 && a!=789456){
	printf("���������˶Ժ�����\n");
}//������󣬲����ڴ��˺� 
  return 0;
} 
