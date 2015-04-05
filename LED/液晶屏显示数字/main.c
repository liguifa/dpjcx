/*
 *作者：李贵发
 *时间：2015-04-05
 *功能：让单片机的液晶屏显示数字
 *文件：main.c
 */
#include<reg51.h>

sbit LED_0=P2^0;
sbit LED_1=P2^1;
sbit LED_2=P2^2;
sbit LED_3=P2^3;
sbit LED_4=P2^4;
sbit LED_5=P2^5;
sbit LED_6=P2^6;
sbit LED_7=P2^7;


/*定义延时函数*/
void display(int i)
{
	while(i--);
}

/*定义数字0的引脚给电情况*/
void Zero()
{
	P2=0;
	LED_2=1;
	LED_3=1;
	LED_4=1;
	LED_5=1;
	LED_6=1;
	LED_7=1;
}

/*定义数字1的引脚给电情况*/
void One()
{
	P2=0;
	LED_5=1;
	LED_6=1;
}

/*定义数字2的引脚给电情况*/
void Two()
{
	P2=0;
	LED_1=0;
	LED_3=0;
	LED_4=0;
	LED_6=1;
	LED_7=1;
}

/*定义数字3的引脚给电情况*/
void Three()
{
	P2=0;
	LED_1=1;
	LED_4=1;
	LED_5=1;
	LED_6=1;
	LED_7=1;
}

/*定义数字4的引脚给电情况*/
void Four()
{
	P2=0;
	LED_1=1;
	LED_2=1;
	LED_5=1;
	LED_6=1;
}

/*定义数字5的引脚给电情况*/
void Five()
{
	P2=0;
	LED_1=1;
	LED_2=1;
	LED_4=1;
	LED_5=1;
	LED_7=1;
}

/*定义数字6的引脚给电情况*/
void Six()
{
	P2=0;
	LED_1=1;
	LED_2=1;
	LED_3=1;
	LED_4=1;
	LED_5=1;
	LED_7=1;
}

/*定义数字7的引脚给电情况*/
void Seven()
{
	P2=0;
	LED_5=1;
	LED_6=1;
	LED_7=1;
}

/*定义数字8的引脚给电情况*/
void Eight()
{
	P2=0;
	LED_1=1;
	LED_2=1;
	LED_3=1;
	LED_4=1;
	LED_5=1;
	LED_6=1;
	LED_7=1;
}

/*定义数字9的引脚给电情况*/
void Nine()
{
	P2=0;
	LED_1=1;
	LED_2=1;
	LED_4=1;
	LED_5=1;
	LED_6=1;
	LED_7=1;
}

/*定义选择函数*/
void choose(int i)
{
	switch(i)
	{
		case 0:Zero();break;
		case 1:One();break;
		case 2:Two();break;
		case 3:Three();break;
		case 4:Four();break;
		case 5:Five();break;
		case 6:Six();break;
		case 7:Seven();break;
		case 8:Eight();break;
		case 9:Nine();break;
	}
	display(100000);
}

void main()
{
	int i;
	P2=0x00;
	while(1)
	{
		for(i=0;i<=9;i++)
		{
			choose(i);
		}
	}
}