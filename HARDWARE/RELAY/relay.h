#ifndef __RELAY_H
#define __RELAY_H 			   
#include <sys.h>	  
//////////////////////////////////////////////////////////////////////////////////  
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//ALIENTEK STM32F407������
//ʹ��SysTick����ͨ����ģʽ���ӳٽ��й���(֧��ucosii)
//����delay_us,delay_ms
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2014/5/2
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ������������ӿƼ����޹�˾ 2014-2024
//All rights reserved
//********************************************************************************
//�޸�˵��
//��
////////////////////////////////////////////////////////////////////////////////// 	 


//#define JDQ0 PFout(8)	// �̵���
#define JDQ PFout(7)
#define JDQ1 PFout(1)
#define JDQ2 PFout(2)
#define JDQ3 PFout(3)
#define JDQ4 PFout(4)

void RELAY_Init(void);

#endif

