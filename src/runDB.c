#include <stdio.h>
#include "runDB.h"

int main(void){
    printf("\nWelcome to MySchoolDB :) \n");
  
        int mainMenuNavigate= displayMainMenu(); //only returns a valid choice

        if (mainMenuNavigate==6){
            printf("\nThank you for using my school DB!");
        }

        if (mainMenuNavigate==1){ //student menu navigate
            int studentMenuNavigate = displayStudentMenu();
        }

}