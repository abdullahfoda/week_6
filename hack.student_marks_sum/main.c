#include <stdio.h>

int marks_summation(int marks[], int number_of_students, char gender) {
    int sum = 0;

    for (int i = (gender == 'b' ? 0 : 1); i < number_of_students; i += 2) {
        sum += marks[i];
    }
    return sum;
}

int main() {
    int number_of_students;
    printf("Enter the number of students: ");
    scanf("%d", &number_of_students);

    int marks[number_of_students];
    printf("Enter the marks of students:\n");
    for (int i = 0; i < number_of_students; i++) {
        scanf("%d", &marks[i]);
    }

    char gender;
    printf("Enter the gender (b/g): ");
    scanf(" %c", &gender);

    int total_marks = marks_summation(marks, number_of_students, gender);
    printf("Total marks of %s: %d\n", (gender == 'b' ? "boys" : "girls"), total_marks);

    return 0;
}
