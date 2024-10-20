//
// Created by lenovo on 24-10-20.
//
#include "main.h"
#include "tim.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    if (htim->Instance == htim6.Instance)
    {
        HAL_GPIO_TogglePin(LED_Green_GPIO_Port, LED_Green_Pin);
    }
}