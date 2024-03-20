/*Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();*/

#include<iostream>

struct Date
{
    
    int day;
    int month;
    int year;

    void initDate()
    {
        day = 01;
        month = 01;
        year = 01;
    }

    void printDateOnConsole()
    {
        printf("DATE : %d-%d-%d\n",day, month, year);
    }

    void acceptDateFromConsole()
    {
        printf("ENTER THE DAY, MONTH AND YEAR -> \n");
        scanf("%d%d%d", &day, &month, &year);
    }

    bool isLeapYear()
    {
        if(year % 4 == 0){
            return true;
            // printf("IT IS A LEAP YEAR");
        }
        else{
            return false;
            // printf("NOT A LEAP YEAR");
        }
    }
};

int main()
{
    int choice;
    struct Date d1;
    bool A;
    
    do{
        printf("\n");
        printf("0 -> EXIT\n");
        printf("1 -> INITIALIZE DATE\n");
        printf("2 -> ACCEPT DATE\n");
        printf("3 -> PRINT DATE\n");
        printf("4 -> CHECK IF LEAP YEAR\n");
        printf("Enter Choice -> \n");
        scanf("%d", &choice);

        switch(choice){
            case 0:
                printf("Thank you.... \n");
                break;
            case 1:
                d1.initDate();
                break;
            case 2:
                d1.acceptDateFromConsole();
                break;
            case 3:
                d1.printDateOnConsole();
                break;
            case 4:
                A = d1.isLeapYear();
                if(A){
                    printf("TRUE\n");
                }
                else{
                    printf("FALSE\n");
                }
                break;
            default:
                    printf("INVALID CHOICE...");
                    break;    
        }
    }while(choice != 0);
    return 0;
}