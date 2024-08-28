#include <stdio.h>
#ifndef __RUNDB_H__
#define __RUNDB_H__

int displayMainMenu(){
        
        int choice;

        printf("\nPlease Select an option:\n\n");
        printf("1. Student operations\n");
        printf("2. Subject operations\n");
        printf("3. Teacher operations\n");
        printf("4. Grade operations\n");
        printf("5. Load data\n");
        printf("6. Quit\n\n");
        printf("Choice: ");

        scanf("%d", &choice); 
     
        if (choice>6 || choice<1){
            printf("\nInvalid selection, please select a valid option.\n");
            return displayMainMenu();
        }else{
            return choice;
        }

    return -1; 

}

int displayStudentMenu(){
        
        int choice; 

        printf("\nPlease Select an option:\n\n");
        printf("1. View all Students\n");
        printf("2. Add Student\n");
        printf("3. Retrieve Student data by ID\n");
        printf("4. Retrieve Student data by Name\n");
        printf("5. Return to Main Menu\n");
        printf("\nChoice: ");

        scanf("%d", &choice);

        if (choice>5 || choice<1){
            printf("Invalid selection.\n");
            return displayStudentMenu();
        }else{
            return choice;
        }

    return -1; 
    
}

#endif