#include <stdio.h>

int main(void){
    printf("\nWelcome to MySchoolDB :) \n");
    while(1==1){
        printf("\nPlease Select an option:\n\n");
        printf("1. Add Student\n");
        printf("2. Add Subject\n");
        printf("3. Add Teacher\n");
        printf("4. Add Grade\n");
        printf("5. Find Students in subject\n");
        printf("6. Find Teacher for subject\n");
        printf("7. View Grades\n");
        printf("8. Find Teacher for student\n");
        printf("9. Find Students of teacher\n");
        printf("0. Load data\n");
        printf("-1. Quit\n\n");
        printf("Choice: ");
        
        int choice;
        scanf("%d", &choice); 

        if (choice>9 || choice<-1){
            printf("Invalid selection, please select a valid option.\n");
        }

        if (choice==-1){
            printf("\nThank you for using my school DB!");
            break;
        }




    }
}