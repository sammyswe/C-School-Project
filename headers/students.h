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
void addStudent();
short findAvailID(struct Student* head);
struct Student* createStudent(short id, char* name);
struct Student* findTail(struct Student* head);

#endif // __STUDENTS_H__

//this will contain all of the declarations for various functions.