#include <stdio.h>
#include "students.h"
#include <stdlib.h>
#include <string.h>

struct Student firstStudent = {1, "Samuel Elliott", NULL, NULL}; //Creates first student
struct Student* head = &firstStudent; //sets first student address to be head of linked list.


void displayAllStudents() { //Displays information of all students
    printf("\n=================== Display All Students ===================\n");
    printf("\n");
    struct Student *temp = head;
    while (temp != NULL) { //iterates through linked list, printing out details of each node (student)
        printf("ID: %d \n", temp->id); 
        printf("Name: %s \n", temp->name); 
        printf("Enrollment Address: %p \n", (void*)temp->enrollments);
        printf("Next Address: %p \n", (void*)temp->next);
        temp = temp->next; 
        printf("\n");
    }
}

void addStudent(){ //Retrieves user input on new student and calls createStudent()
    printf("\n====================== Create Student ======================\n");
    printf("\n");
    short id = findAvailID(head); // finds the ID of the next created student.
    char* name = malloc(30 * sizeof(char)); //allocates size to store the user name
    printf("Student Name: ");
    scanf("%s", name);
    printf("New student created.\n");
    printf("\n");
    struct Student* newStudent = createStudent(id,name); //pointer stored in newStudent variable (not used at the moment)
}

short findAvailID(struct Student* head){ //finds the next available ID (auto increment)
    struct Student* tail = findTail(head); //calls get tail to find previous tail of linked list
    short newID = (tail->id)+1; //adds one to tail ID to find newID
    return newID; //returns the newID
}

struct Student* createStudent(short id, char* name){ // creates new student and appends to linked list
    struct Student* tail = findTail(head); //stores tail so that previous tail'next' address can be added
    struct Student* newStudent = malloc(sizeof(struct Student));
    tail->next = newStudent;
    
    newStudent->id = id;

    newStudent->name = malloc(strlen(name) + 1); //this ensures that persistent memory is assigned to the name
    strcpy(newStudent->name, name); //and copies it into this memory

    newStudent->enrollments = NULL; //new students are not enrolled in anything

    newStudent->next = NULL; //this node becomes the tail

    return newStudent;
}//use malloc here

struct Student* findTail(struct Student* head){ //finds linked list tail
    struct Student *temp = head;
    while ((temp->next) != NULL){ // searches for linked list node with next = NULl and deduces this is the tail
        temp = temp -> next;
    }
    return temp; //returns the tail
}

void displayStudentByID(){ //retrieves user input of student ID and searches for student with this ID, before displauing their details)
    printf("\n==================== Find Student By ID ====================\n");
    short id;
    int result;
    printf("\nSelect Student ID:");
    result = scanf("%hd",&id); 
    printf("\n");

    if (result != 1) { //sanitises input - calls itself recursively until valid input (only accepts integers)
        while (getchar() != '\n');  // Read and discard characters until a newline is found
        printf("Invalid selection, please input a valid ID number.\n");
        return displayStudentByID();
    }

    
    struct Student *temp = head;
    short found = 0; //0 when student with matching ID not found

    while (temp != NULL && found==0) { //cycles through students until end of list or student found
        if((temp->id) == id){ //if student found
            printf("ID: %d \n", temp->id); //print details
            printf("Name: %s \n", temp->name); 
            printf("Enrollment Address: %p \n", (void*)temp->enrollments);
            printf("Next Address: %p \n", (void*)temp->next);
            found = 1; //1 when student with matching ID found
        }
        temp = temp->next; 
    }
    if (found == 0){ //if there is not a matching ID
        printf("Student not found, please try a different ID\n");
        return displayStudentByID(); //calls itself again
    }

}