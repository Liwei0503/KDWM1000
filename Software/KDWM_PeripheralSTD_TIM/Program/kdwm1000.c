/*====================================================================================================*/
/*====================================================================================================*/
#include "drivers\stm32f4_system.h"

#include "kdwm1000.h"
/*====================================================================================================*/
/*====================================================================================================*/
void LED_B_BLINK( void )
{
  LED_B_Toggle();
}

void LED_G_BLINK( void )
{
  LED_G_Toggle();
}

void KDWM_Init( void )
{
  SystemInit();
  HAL_InitTick();

  KDWM_GPIO_Config();
  KDWM_TIM2_Config(LED_B_BLINK);
  KDWM_TIM3_Config(LED_G_BLINK);
}
/*====================================================================================================*/
/*====================================================================================================*/
void KDWM_Loop( void )
{
  while(1) {

  }
}
/*====================================================================================================*/
/*====================================================================================================*/
