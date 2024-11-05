#ifndef LCD_I2C_H
#define LCD_I2C_H

#include "stm32f4xx_hal.h"

#define LCD_ADDR 0x27 // Change this if your I2C address is different
#define LCD_COLS 16
#define LCD_ROWS 2

// Function prototypes
void LCD_Init(I2C_HandleTypeDef *hi2c);
void LCD_Clear(void);
void LCD_SetCursor(uint8_t col, uint8_t row);
void LCD_Print(char *str);
void LCD_WriteCommand(uint8_t cmd);
void LCD_WriteData(uint8_t data);
void LCD_Enable(void);

#endif // LCD_I2C_H
