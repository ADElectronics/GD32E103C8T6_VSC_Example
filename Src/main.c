#include "gd32e10x.h"
#include "systick.h"
#include <stdio.h>
#include "main.h"

int main(void)
{
   SystemInit();
   //SystemCoreClockUpdate();
   systick_config();

   rcu_periph_clock_enable(RCU_GPIOC);
   gpio_init(GPIOC, GPIO_MODE_OUT_PP, GPIO_OSPEED_2MHZ, GPIO_PIN_13);

   for(;;)
   {
      gpio_bit_reset(GPIOC, GPIO_PIN_13);
      delay_1ms(200);
      gpio_bit_set(GPIOC, GPIO_PIN_13);
      delay_1ms(200);
   }
}

