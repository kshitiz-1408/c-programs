#include <stdio.h>
#include <string.h>

#define n 450

struct Student {
    int rollNumber;
    char name[50];
    char department[50];
    char course[50];
    int yearOfJoining;
};

struct Student students[n];

void printbyyear(int year, int a) {
    printf("Students who joined in %d:\n", year);
    for (int i = 0; i < a; ++i) {
        if (students[i].yearOfJoining == year) {
            printf("%s\n", students[i].name);
        }
    }
}

void printbyrollno(int roll, int a) {
    for (int i = 0; i < a; ++i) {
        if (students[i].rollNumber == roll) {
            printf("Student Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].yearOfJoining);
            return;
        }
    }
    printf("Student with roll number %d not found.\n", roll);
}

int main() {
    int a;

    printf("Enter the number of students (up to %d): ", n);
    scanf("%d", &a);

    for (int i = 0; i < a; ++i) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Department: ");
        scanf("%s", students[i].department);
        printf("Course: ");
        scanf("%s", students[i].course);
        printf("Year of Joining: ");
        scanf("%d", &students[i].yearOfJoining);
    }

    int c;
    printf("\nEnter the year to search for students: ");
    scanf("%d", &c);
    printbyyear(c, a);

    int b;
    printf("\nEnter the roll number to search for a student: ");
    scanf("%d", &b);
    printbyrollno(b, a);

    return 0;
}
