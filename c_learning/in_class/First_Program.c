while (1)
{
    GPIO_SetBits(GPIOE, GPIO_Pin_12); // PE12 高電位
    Delay(1000);
    GPIO_ResetBits(GPIOE, GPIO_Pin_12); // PE12 低電位
    Delay(1000);

    GPIO_SetBits(GPIOE, GPIO_Pin_10); // PE10 高電位
    Delay(1000);
    GPIO_ResetBits(GPIOE, GPIO_Pin_10); // PE10 低電位
    Delay(1000);
}