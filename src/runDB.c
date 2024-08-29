#include <stdio.h>
#include "runDB.h"
#include "students.h"

int main(void){
    
int loop = 1; 
    
    while(loop == 1){ //menu loop (runs until the user quits)
    
    int mainMenuNavigate= displayMainMenu(); //only returns a valid choice

        if (mainMenuNavigate==1){ //User Selects Student Menu
            
            int studentMenuNavigate = displayStudentMenu();

            if(studentMenuNavigate==1){displayAllStudents();}
            if(studentMenuNavigate==2){addStudent();}
            if(studentMenuNavigate==3){displayStudentByID();}
            if(studentMenuNavigate==4){RetrieveStudentByName();}//todo
            if(studentMenuNavigate==5){displayMainMenu();}
        }

        if (mainMenuNavigate==6){
            loop =0;//bre
            printf("\n================= Closing School DB System =================\n");
            }

    }
    return 0;

}

