#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseStringToStructArray(const char* input, struct Student* students, int numStudents) {
    const char delimiter[] = " ";
    char* token;
    token = strtok((char*)input, delimiter);
    for (int i = 0; i < numStudents; i++) {
        if (token == NULL) {
            printf("Insufficient input!\n");
            return;
        }


        students[i].rollno = atoi(token);
        token = strtok(NULL, delimiter);

        if (token == NULL) {
            printf("Insufficient input!\n");
            return;
        }
        strncpy(students[i].name, token, sizeof(students[i].name) - 1);
        students[i].name[sizeof(students[i].name) - 1] = '\0';
        token = strtok(NULL, delimiter);


        if (token == NULL) {
            printf("Insufficient input!\n");
            return;
        }
        students[i].marks = atof(token);
        token = strtok(NULL, delimiter);
    }
}

int main() {
    const char input[] = "1001 Aron 100.00";
    const int numStudents = 1;

    struct Student students[numStudents];

    parseStringToStructArray(input, students, numStudents);

    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}