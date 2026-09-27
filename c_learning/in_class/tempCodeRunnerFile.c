#include <stdio.h>
int main()
{
    int quiz_score = 0;
    float lab_score = 0.0, exam_score = 0.0;

    printf("Please enter your scores(quiz lab exam): ");
    scanf("%d %f %f", &quiz_score, &lab_score, &exam_score);

    printf("Quiz Score: %8d\n", quiz_score);
    printf("Lab Score: %8.2f\n", lab_score);
    printf("Exam Score: %8.2f\n", exam_score);

    float final_score = (float)quiz_score * 0.2 + lab_score * 0.3 + exam_score * 0.5;
    printf("Weighted Average: %8.1f\n", final_score);

    return 0;
}