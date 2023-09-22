#include <stdio.h>

int main() {
    int subject1, subject2, subject3;
    float percentage;

    // Input marks for three subjects
    printf("Enter marks for subject 1: ");
    scanf("%d", &subject1);

    printf("Enter marks for subject 2: ");
    scanf("%d", &subject2);

    printf("Enter marks for subject 3: ");
    scanf("%d", &subject3);

    // Calculate the percentage
    percentage = (float)(subject1 + subject2 + subject3) / 3;

    // Display the percentage
    printf("Percentage: %.2f%%\n", percentage);

    // Check and display the result
    if (percentage >= 60) {
        printf("Result: First Division\n");
    } else if (percentage >= 45) {
        printf("Result: Second Division\n");
    } else {
        printf("Result: Fail\n");
    }

    return 0;
}


 