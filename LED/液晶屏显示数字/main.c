/*
 *���ߣ����
 *ʱ�䣺2015-04-05
 *���ܣ��õ�Ƭ����Һ������ʾ����
 *�ļ���main.c
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


/*������ʱ����*/
void display(int i)
{
	while(i--);
}

/*��������0�����Ÿ������*/
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

/*��������1�����Ÿ������*/
void One()
{
	P2=0;
	LED_5=1;
	LED_6=1;
}

/*��������2�����Ÿ������*/
void Two()
{
	P2=0;
	LED_1=0;
	LED_3=0;
	LED_4=0;
	LED_6=1;
	LED_7=1;
}

/*��������3�����Ÿ������*/
void Three()
{
	P2=0;
	LED_1=1;
	LED_4=1;
	LED_5=1;
	LED_6=1;
	LED_7=1;
}

/*��������4�����Ÿ������*/
void Four()
{
	P2=0;
	LED_1=1;
	LED_2=1;
	LED_5=1;
	LED_6=1;
}

/*��������5�����Ÿ������*/
void Five()
{
	P2=0;
	LED_1=1;
	LED_2=1;
	LED_4=1;
	LED_5=1;
	LED_7=1;
}

/*��������6�����Ÿ������*/
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

/*��������7�����Ÿ������*/
void Seven()
{
	P2=0;
	LED_5=1;
	LED_6=1;
	LED_7=1;
}

/*��������8�����Ÿ������*/
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

/*��������9�����Ÿ������*/
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

/*����ѡ����*/
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