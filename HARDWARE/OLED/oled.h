#ifndef __OLED_H
#define __OLED_H			  	 
#include "sys.h"
#include "stdlib.h"	    	
//OLED模式设置
//0:4线串行模式
//1:并行8080模式
#define OLED_MODE 0
#define SIZE 16
#define XLevelL		0x00
#define XLevelH		0x10
#define Max_Column	128
#define Max_Row		64
#define	Brightness	0xFF 
#define X_WIDTH 	128
#define Y_WIDTH 	64	    
//-----------------OLED端口定义----------------  	


//接口宏定义 此处需要修改
#define OLED_CS  		PCout(13)
#define OLED_DC  		PCout(14)
#define OLED_SCLK 		PAout(5)//D0
#define OLED_SDIN 		PAout(2)//D1
#define OLED_RST 		PCout(15)
//修改截止



#define OLED_CS_Clr()  		OLED_CS=0						//CS
#define OLED_CS_Set()  		OLED_CS=1

#define OLED_RST_Clr() 		OLED_RST=0						//RES
#define OLED_RST_Set() 		OLED_RST=1

#define OLED_DC_Clr() 		OLED_DC=0						//DC
#define OLED_DC_Set() 		OLED_DC=1
	


#define OLED_SCLK_Clr() 	OLED_SCLK=0						//CLK
#define OLED_SCLK_Set() 	OLED_SCLK=1

#define OLED_SDIN_Clr() 	OLED_SDIN=0						//DIN
#define OLED_SDIN_Set() 	OLED_SDIN=1

 		     
#define OLED_CMD  0	//写命令
#define OLED_DATA 1	//写数据


//OLED控制用函数
void OLED_WR_Byte(u8 dat,u8 cmd);	    
void OLED_Display_On(void);
void OLED_Display_Off(void);	   							   		    
void OLED_Init(void);
void OLED_Clear(void);
void OLED_DrawPoint(u8 x,u8 y,u8 t);
void OLED_Fill(u8 x1,u8 y1,u8 x2,u8 y2,u8 dot);
void OLED_ShowChar(u8 x,u8 y,u8 chr);
void OLED_ShowNum(u8 x,u8 y,u32 num,u8 len,u8 size);
void OLED_ShowString(u8 x,u8 y, u8 *p);	 
void OLED_Set_Pos(unsigned char x, unsigned char y);
void OLED_ShowCHinese(u8 x,u8 y,u8 no);
void OLED_DrawBMP(unsigned char x0, unsigned char y0,unsigned char x1, unsigned char y1,unsigned char BMP[]);
#endif  
	 





