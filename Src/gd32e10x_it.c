#include "gd32e10x_it.h"
#include "main.h"
#include "systick.h"
/*
extern can_receive_message_struct g_receive_message;
extern FlagStatus can0_receive_flag;
extern FlagStatus can1_receive_flag;

void CAN0_RX0_IRQHandler(void)
{
   can_message_receive(CAN0, CAN_FIFO0, &g_receive_message);
   can0_receive_flag = SET;
}

void CAN1_RX0_IRQHandler(void)
{
   can_message_receive(CAN1, CAN_FIFO0, &g_receive_message);
   can1_receive_flag = SET;
}

void CAN0_RX1_IRQHandler(void)
{
   can_message_receive(CAN0, CAN_FIFO1, &g_receive_message);
   can0_receive_flag = SET;
}

void CAN1_RX1_IRQHandler(void)
{
   can_message_receive(CAN1, CAN_FIFO1, &g_receive_message);
   can1_receive_flag = SET;
}
*/
void NMI_Handler(void)
{
}

void HardFault_Handler(void)
{
    while(1)
    {
    }
}

void MemManage_Handler(void)
{
    while(1)
    {
    }
}

void BusFault_Handler(void)
{
    while(1)
    {
    }
}

void UsageFault_Handler(void)
{
    while(1)
    {
    }
}

void SVC_Handler(void)
{
}

void DebugMon_Handler(void)
{
}

void PendSV_Handler(void)
{
}

void SysTick_Handler(void)
{
   delay_decrement();
}
