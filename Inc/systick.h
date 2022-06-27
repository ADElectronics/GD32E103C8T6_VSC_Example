#ifndef SYSTICK_H
#define SYSTICK_H

#include <stdint.h>

void systick_config(void);
void delay_1ms(uint32_t count);
void delay_decrement(void);

#endif /* SYSTICK_H */
