#include<stdio.h>
int main(){
	int i=1;
	int a=0;
	int type=0;
	int money=0;
	int money2=0;
	int y=0;
	int g=0;//定义变量 
	printf("欢迎来到自助存取机,请插卡！\n");
	printf("请输入6位数密码"); 
	scanf("%d",&a);//输入密码，并进行判断密码是否正确 
	if(a==123456){
	printf("密码正确请选择业务！\n"); //密码正确进入循环 
	while(i==1){
		printf("查询余额请按1，存钱请按2，取钱请按3，帮助请按4，联系客服请按5\n"); //选择业务 
		scanf("%d",&type);
		switch(type){
			case 1:printf("您的余额剩余10000元整\n");
			       break;
			case 2:printf("请输入存钱数额\n");
				   scanf("%d",&money);
				   money=money+10000;
				   printf("存钱成功，余额%d元整\n",money);
				   break;
			case 3:printf("请输入取钱数额\n");
			       scanf("%d",&money2);	
				   if(money2<=10000){ y=10000-money2;
				   printf("取钱成功，余额剩余%d元\n",y);
				   }else{
				   printf("抱歉，您的余额不足\n");	
				   }break;    
		    case 4:printf("忘记密码请按1，机器故障请按2，吞卡请按3\n");
			       switch(g){
			       	case 1:printf("密码已为您重置为111111！\n");
			       	       break;
			       	case 2:printf("已为您通知技术人员前往修理解决,对您造成麻烦十分抱歉！\n");
					       break;
					case 3:printf("已为您联系专业人员为您处理，请耐心等待\n");
					       break;	             
				   } break;
		    case 5:printf("客服电话已接通！\n");
		           break;
		}
		printf("服务完成，继续操作请按1，退卡请按2\n");  //业务完成后可继续选择服务或者退出        以下2个判断同理！ 
	        scanf("%d",&i); 
	}
	    printf("感谢使用，祝您愉快，再见！\n"); 
    }//账号1的使用 
	if(a==456123){
    	printf("密码正确请选择业务！\n"); 
	while(i==1){ 
		printf("查询余额请按1，存钱请按2，取钱请按3，帮助请按4，联系客服请按5\n"); 
		scanf("%d",&type);
		switch(type){
			case 1:printf("您的余额剩余5000元整\n");
			       break;
			case 2:printf("请输入存钱数额\n");
				   scanf("%d",&money);
				   money=money+5000;
				   printf("存钱成功，余额%d元整\n",money);
				   break;
			case 3:printf("请输入取钱数额\n");
			       scanf("%d",&money2);	
				   if(money2<=5000){ y=5000-money2;
				   printf("取钱成功，余额剩余%d元\n",y);
				   }else{
				   printf("抱歉，您的余额不足\n");	
				   }break;    
		    case 4:printf("忘记密码请按1，机器故障请按2，吞卡请按3\n");
			       switch(g){
			       	case 1:printf("密码已为您重置为222222！\n");
			       	       break;
			       	case 2:printf("已为您通知技术人员前往修理解决,对您造成麻烦十分抱歉！\n");
					       break;
					case 3:printf("已为您联系专业人员为您处理，请耐心等待\n");
					       break;	             
				   } break;
		    case 5:printf("客服电话已接通！\n");
		           break;
		}
		printf("服务完成，继续操作请按1，退卡请按2\n");
	        scanf("%d",&i); 
	}
	 printf("感谢使用，祝您愉快，再见！\n"); 
    }//账号2的使用 
	if(a==789456){
	printf("密码正确请选择业务！\n"); 
	while(i==1){
		printf("查询余额请按1，存钱请按2，取钱请按3，帮助请按4，联系客服请按5\n"); 
		scanf("%d",&type);
		switch(type){
			case 1:printf("您的余额剩余20000元整\n");
			       break;
			case 2:printf("请输入存钱数额\n");
				   scanf("%d",&money);
				   money=money+20000;
				   printf("存钱成功，余额%d元整\n",money);
				   break;
			case 3:printf("请输入取钱数额\n");
			       scanf("%d",&money2);	
				   if(money2<=20000){ y=20000-money2;
				   printf("取钱成功，余额剩余%d元\n",y);
				   }else{
				   printf("抱歉，您的余额不足\n");	
				   }break;    
		    case 4:printf("忘记密码请按1，机器故障请按2，吞卡请按3\n");
			       switch(g){
			       	case 1:printf("密码已为您重置为333333！\n");
			       	       break;
			       	case 2:printf("已为您通知技术人员前往修理解决,对您造成麻烦十分抱歉！\n");
					       break;
					case 3:printf("已为您联系专业人员为您处理，请耐心等待\n");
					       break;	             
				   } break;
		    case 5:printf("客服电话已接通！\n");
		           break;
		}
		printf("服务完成，继续操作请按1，退卡请按2\n");
	        scanf("%d",&i); 
	}
	printf("感谢使用，祝您愉快，再见！\n"); 
    }//账号3的使用 
	if(a!=123456 && a!=456123 && a!=789456){
	printf("密码错误，请核对后重输\n");
}//密码错误，不存在此账号 
  return 0;
} 
