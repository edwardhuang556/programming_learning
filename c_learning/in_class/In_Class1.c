#include <stdio.h>
int main()
{
    int num1 = 100;
    int num2 = 200;
    float float1 = 123.412;

    printf("%d\n", num1 + num2);
    printf("%.1f\n", float1);
    printf("%d %.1f\n", num1 + num2, float1);
    return 0;
}