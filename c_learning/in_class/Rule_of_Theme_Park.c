#include <stdio.h>

int main()
{
    int height = 115, has_parent = 1, is_pregnant = 0;
    int can_ride;

    can_ride = (height >= 120 || has_parent == 1) && is_pregnant == 0;
    printf("%d", can_ride);

    return 0;
}