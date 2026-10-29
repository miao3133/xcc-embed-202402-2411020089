#include "main.h"
#include "gpio.h"

/* USER CODE BEGIN 0 */
void delay(uint32_t i)
{
  while(i--);
}
/* USER CODE END 0 */

int main(void)
{
  HAL_Init();
  //SystemClock_Config();  //???,??????
  MX_GPIO_Init();

  /* USER CODE BEGIN WHILE */
  while (1)
  {
    while (1)
{
  GPIOF->ODR = 0xFE;
  delay(6000000);
  GPIOF->ODR = 0xFD;
  delay(6000000);
  GPIOF->ODR = 0xFB;
  delay(6000000);
  GPIOF->ODR = 0xF7;
  delay(6000000);
  GPIOF->ODR = 0xEF;
  delay(6000000);
  GPIOF->ODR = 0xDF;
  delay(6000000);
  GPIOF->ODR = 0xBF;
  delay(6000000);
  GPIOF->ODR = 0x7F;
  delay(6000000);
}
  }
  /* USER CODE END WHILE */
}