# C-School-Project
Training project - creating a database style system in C.

Instructions / Requirements:

Functional Requirements:

FR1: The program should use a command line interface (CLI) to add new information **MUST HAVE**
FR2: The CLI can be used to add students and the subjects they study **MUST HAVE**
FR3: The CLI can be used to add teachers and the subject they teach (1 subject per teacher) **MUST HAVE**
FR4: The CLI can be used to assign grades to students per subject **MUST HAVE**
FR5: The CLI can be used to find which students study a specified subject **MUST HAVE**
FR6: The CLI can be used to find which teacher teaches a specified subject **MUST HAVE**
FR7: The CLI can be used to find the grades a specified student has achieved in a specified subject **MUST HAVE**

FR8: The CLI can be used to find which teachers teach a specified student [Could_Have]
FR9: The CLI can be used to find which students are taught by a specified teacher [Could_Have]
FR10: Student/teacher data should be loaded from files when the program starts up [Could_Have]

Non-Functional Requirements:

NFR1: The program must be written in C and must compile with gcc 


Contents:

1. File Structure
2. What will each file do, how will it achieve this, what requirements will it fulfil (Proof that ).
3. Compilation Instructions
4. System Use Instructions


1. File Structure

/C-School-Project 
    README.md
    MAKEFILE
    /src/
        main.c
        student.c
        teacher.c
        subject.c
        grade.c
        load_data.c
    /headers/ 
        student.h
        teacher.h
        subject.h 
        grade.h
        load_data.h 
    /data/
        students.txt
        teachers.txt
        grades.txt


2. What will each file do, how will it achieve this. 

README.md - contains plan and instructions on use of the softwares features
MAKEFILE - Will compile all parts of the program with different flags to allow user to load appropriate data.

[/src/]

main.c - **FR1**

Includes the main menu loop - running this will allow the user to use the CLI
Calls functions from other modules based on user input.



student.c - Implements functions to manage students **FR2**

Functions to add, delete, and retrieve students.
Handles assigning subjects to students.
Function to ensure ID is unique.

Struct Student {
    int id;
    char name[50];
    Subject **subjects; points to an array of subjects.
    int subject_count;
}Student;



teacher.c - Implements functions to manage teachers **FR3**

Functions to add, delete, and retrieve teachers.
Handles assigning subjects to teachers.
Manages the relationship between teachers and subjects.
Function to ensure ID is unique

struct Teacher {
    int id;
    char name[50];
    Subject *subject;  // Points to the subject taught by the teacher (only one subject)
};

subjects.c - implements functions to manage subjects **FR5 & FR6**

Functions to add, delete, and retrieve subjects.
Manages the link between subjects, students, and teachers.
Handles the enrollment of students in subjects.
Function to ensure that the subject is

struct Subject {
    int id;
    char name[50];
    Teacher *teacher;       // Pointer to the Teacher who teaches this subject
    Student **students;     // Pointer to an array of pointers to Students enrolled
    int student_count;     

};

grades.c - implements functions to add and receive **FR4 & FR7**


struct Grade{
    Student *student;   // Pointer to the Student who received the grade
    Subject *subject;   // Pointer to the Subject the grade is for
    char grade[3];      
};


load_data.c - implements functionality allowing user to load database with predetermined set of values for testing purposes



[headers]

All files in this section will be header files.


[data]

All files in this section will contain data which will be used by load_data.c to fill the database up.



3. Complete later
4. complete later