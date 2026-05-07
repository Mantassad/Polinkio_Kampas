#ifndef __SSD1306_CONF_H__
#define __SSD1306_CONF_H__
// Įjungiam reikalingus šriftus
#define SSD1306_INCLUDE_FONT_6x8
#define SSD1306_INCLUDE_FONT_7x10
#define SSD1306_INCLUDE_FONT_11x18
// Pasakome bibliotekai naudoti I2C
#define SSD1306_USE_I2C
#define SSD1306_USE_I2C
// Nurodome ekrano dydį
#define SSD1306_HEIGHT          32
#define SSD1306_WIDTH           128

// Nurodome I2C portą (tavo atveju hi2c1)
#define SSD1306_I2C_PORT        hi2c1
#define SSD1306_I2C_ADDR        (0x3C << 1)

#endif /* __SSD1306_CONF_H__ */
