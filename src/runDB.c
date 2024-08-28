#include <stdio.h>
#include "runDB.h"
#include "students.h"

int main(void){
    
    printf("\nWelcome to MySchoolDB :) \n");
    int mainMenuNavigate= displayMainMenu(); //only returns a valid choice

    

        if (mainMenuNavigate==1){ //student menu navigate
            int studentMenuNavigate = displayStudentMenu();

            if(studentMenuNavigate==1){displayAllStudents();}
            //if(studentMenuNavigate==2){addStudent();}
        }

        //if (mainMenuNavigate==6){endDB();}

}

//todo tomorrow, start on endDB, and addStudent business.