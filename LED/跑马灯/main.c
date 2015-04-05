/*
 *作者：李贵发
 *时间：2015-04-05
 *功能：单片机LED跑马灯
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

/*根据参数点亮相应的灯*/
void LED(int i)
{
	P2=0x00;
	switch(i)
	{
		case 0:LED_0=1;break;
		case 1:LED_1=1;break;
		case 2:LED_2=1;break;
		case 3:LED_3=1;break;
		case 4:LED_4=1;break;
		case 5:LED_5=1;break;
		case 6:LED_6=1;break;
		case 7:LED_7=1;break;
	}
}

void main()
{
	int i;
	while(1)
	{
		for(i=0;i<=7;i++)
		{
			LED(i);
			display(10000);
		}
		for(i=7;i>=0;i--)
		{
			LED(i);
			display(10000);
		}
	}
}

