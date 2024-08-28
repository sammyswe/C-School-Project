#include <stdio.h>
#include "students.h"

struct Student firstStudent = {1, "Samuel Elliott", NULL, NULL};
struct Student* head = &firstStudent;


void displayAllStudents() {
    struct Student *temp = head;
    while (temp != NULL) {
        printf("ID: %d \n", temp->id); 
        printf("Name: %s \n", temp->name); 
        printf("Enrollment Address: %p \n", (void*)temp->enrollments);
        printf("Next Address: %p \n", (void*)temp->next);
        temp = temp->next; // same as *temporary.next
    }
    printf("\n");
}


//this will contain all of the methods For the student operations.