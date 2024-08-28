#ifndef __STUDENTS_H__
#define __STUDENTS_H__

struct Enrollment;

struct Student {
    short id;
    char* name;
    struct Enrollment* enrollments;
    struct Student* next;
};


extern struct Student firstStudent;
extern struct Student* head;

// Function declarations
void displayAllStudents();

#endif // __STUDENTS_H__

//this will contain all of the declarations for various functions.