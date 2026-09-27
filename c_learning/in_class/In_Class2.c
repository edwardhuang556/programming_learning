#include <stdio.h>
int main()
{
    int id = 0;
    float midterm = 0, final = 0;
    printf("Enter your student ID: ");
    scanf("%d", &id);
    printf("Enter midterm and final scores(e.g., 88.5 92.0): ");
    scanf("%f %f", &midterm, &final);
    printf("ID: %d\n", id);
    printf("Midterm: %.2f Final: %.2f\n", midterm, final);
    return 0;
}