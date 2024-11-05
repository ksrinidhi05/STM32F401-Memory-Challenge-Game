lcd_i2c.c

#include "lcd_i2c.h"

I2C_HandleTypeDef *hi2c;

void LCD_Init(I2C_HandleTypeDef *hi2c_param) {
    hi2c = hi2c_param;

    HAL_Delay(20); // Wait for LCD to power up
    LCD_WriteCommand(0x30);
    HAL_Delay(5);
    LCD_WriteCommand(0x30);
    HAL_Delay(1);
    LCD_WriteCommand(0x30);
    HAL_Delay(1);
    LCD_WriteCommand(0x38); // Function set
    LCD_WriteCommand(0x0C); // Display on, cursor off
    LCD_WriteCommand(0x01); // Clear display
    HAL_Delay(2);
    LCD_WriteCommand(0x06); // Entry mode
}

void LCD_Clear(void) {
    LCD_WriteCommand(0x01); // Clear display
    HAL_Delay(2);
}

void LCD_SetCursor(uint8_t col, uint8_t row) {
    if (row == 0) {
        LCD_WriteCommand(0x80 + col); // Set cursor to first row
    } else if (row == 1) {
        LCD_WriteCommand(0xC0 + col); // Set cursor to second row
    }
}

void LCD_Print(char *str) {
    while (*str) {
        LCD_WriteData(*str++);
    }
}

void LCD_WriteCommand(uint8_t cmd) {
    uint8_t buf[2];
    buf[0] = cmd;
    HAL_I2C_Master_Transmit(hi2c, LCD_ADDR, buf, 1, HAL_MAX_DELAY);
}

void LCD_WriteData(uint8_t data) {
    uint8_t buf[2];
    buf[0] = data | 0x01; // RS = 1 for data
    HAL_I2C_Master_Transmit(hi2c, LCD_ADDR, buf, 1, HAL_MAX_DELAY);
}

void LCD_Enable(void) {
    // Not needed for I2C LCD, implement if using parallel
}
