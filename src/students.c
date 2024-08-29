#include <stdio.h>
#include "students.h"
#include <stdlib.h>
#include <string.h>

struct Student firstStudent = {1, "Samuel Elliott", NULL, NULL};
struct Student* head = &firstStudent;


void displayAllStudents() { //displays all students
    struct Student *temp = head;
    while (temp != NULL) {
        printf("ID: %d \n", temp->id); 
        printf("Name: %s \n", temp->name); 
        printf("Enrollment Address: %p \n", (void*)temp->enrollments);
        printf("Next Address: %p \n", (void*)temp->next);
        temp = temp->next; 
    }
    printf("\n");
}

void addStudent(){ //creates student
    short id = findAvailID(head);
    char* name;
    printf("Student Name: ");
    scanf("%s", name);
    printf("sending Id: %d", id);
    struct Student* newStudent = createStudent(id,name);
}

short findAvailID(struct Student* head){ //finds the next available ID (auto increment)
    struct Student* tail = findTail(head);
    short newID = (tail->id)+1;
    return newID;
}

struct Student* createStudent(short id, char* name){ // creates new student and appends to linked list
    struct Student* tail = findTail(head);
    struct Student* newStudent = malloc(sizeof(struct Student));
    tail->next = newStudent;
    
    newStudent->id = id;

    newStudent->name = malloc(strlen(name) + 1); 
    strcpy(newStudent->name, name); 

    newStudent->enrollments = NULL;

    newStudent->next = NULL;

    return newStudent;
}//use malloc here

struct Student* findTail(struct Student* head){ //finds linked list tail
    struct Student *temp = head;
    while ((temp->next) != NULL){
        temp = temp -> next;
    }
    return temp;
}