#include <stdio.h>

int main() {
    int i, boys = 0, girls = 0;
    char sex;

    printf("Enter sex code for 50 students (M for boy, F for girl):\n");
    for (i = 1; i <= 50; i++) {
        printf("Student %d: ", i);
        scanf(" %c", &sex); // space before %c avoids newline issues

        if (sex == 'M' || sex == 'm') {
            boys++;
        } else if (sex == 'F' || sex == 'f') {
            girls++;
        } else {
            printf("Invalid input! Please enter M or F.\n");
            i--; // repeat this student input
        }
    }

    printf("\nTotal Boys = %d\n", boys);
    printf("Total Girls = %d\n", girls);

    return 0;
}
