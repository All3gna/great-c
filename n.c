#include <stdio.h>

int main() {
    char school[50], department[50], course[50];
    char subject[50];
    int score, i, choice;

    while(1) {
        printf("\n--- GRADING SYSTEM ---\n");
        printf("1. Enter Results\n");
        printf("0. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Bye!\n");
            break;
        }

        if (choice != 1) {
            printf("Invalid choice!\n");
            continue;
        }

        printf("Enter name of school: ");
        scanf(" %[^\n]", school);

        printf("Enter department: ");
        scanf(" %[^\n]", department);

        printf("Enter course: ");
        scanf(" %[^\n]", course);

        for (i = 1; i <= 2; i++) {
            printf("\nSubject %d\n", i);
            printf("Enter subject name: ");
            scanf(" %[^\n]", subject);

            printf("Enter score: ");
            scanf("%d", &score);

            printf("\n--- RESULT ---\n");
            printf("School: %s\n", school);
            printf("Department: %s\n", department);
            printf("Course: %s\n", course);
            printf("Subject: %s\n", subject);
            printf("Score: %d\n", score);

            if (score >= 80) {
                printf("Grade: A\n");
                printf("Remarks: Excellent\n");
            }
            else if (score >= 70) {
                printf("Grade: B\n");
                printf("Remarks: Very Good\n");
            }
            else if (score >= 60) {
                printf("Grade: C\n");
                printf("Remarks: Good\n");
            }
            else if (score >= 50) {
                printf("Grade: D\n");
                printf("Remarks: Fair\n");
            }
            else {
                printf("Grade: F\n");
                printf("Remarks: Fail - Repeat\n");
            }
        }
    }

    return 0;
}