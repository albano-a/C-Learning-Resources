#include <stdio.h>

int main() {
    int grade;

    printf("Type a grade: ");
    scanf("%d", &grade);

    switch (grade) {
        case 4: printf("Excellent");
                break;
        case 3: printf("Good");
                break;
        case 2: printf("Average");
                break;
        case 1: printf("Poor");
                break;
        case 0: printf("Failing");
                break;
        default: printf("Illegal grade");
                 break;
    }
}
