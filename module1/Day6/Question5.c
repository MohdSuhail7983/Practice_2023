#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchByName(struct Student* students, int numStudents, const char* targetName) {
    int found = 0;

    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, targetName) == 0) {
            printf("Student found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
            break; 
        }
    }

    if (!found) {
        printf("Student not found.\n");
    }
}

int main() {
    struct Student students[3] = {
        {1001, "John", 80.5},
        {1002, "Emma", 90.0},
        {1003, "Michael", 75.2}
    };

    char targetName[20];
    printf("Enter the name of the student to search: ");
    fgets(targetName, sizeof(targetName), stdin);
    targetName[strcspn(targetName, "\n")] = '\0'; 

    searchByName(students, 3, targetName);

    return 0;
}