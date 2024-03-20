#include<iostream>
using namespace std;

class Date
{   
    int day;
    int month;
    int year;

    public:
    void initDate()
    {
        day = 01;
        month = 01;
        year = 01;
    }

    void printDateOnConsole()
    {
        cout<<"DATE : "<<day<<"/"<<month<<"/"<<year<<endl;
    }

    void acceptDateFromConsole()
    {
        cout<<"ENTER THE DAY, MONTH AND YEAR ->"<<endl;
        cin>>day>>month>>year;
    }

    bool isLeapYear()
    {
        if(year % 4 == 0){
            return true;
            // printf("YES, IT IS A LEAP YEAR");
        }
        else{
            return false;
            // printf("NO, NOT A LEAP YEAR");
        }
    }

};

int main()
{
    int choice;
    struct Date d1;
    bool A;
    
    do{
        cout<<endl;
        cout<<"0 -> EXIT"<<endl;
        cout<<"1 -> INITIALIZE DATE"<<endl;
        cout<<"2 -> ACCEPT DATE"<<endl;
        cout<<"3 -> PRINT DATE"<<endl;
        cout<<"4 -> CHECK IF LEAP YEAR"<<endl;
        cout<<"Enter Choice -> "<<endl;
        cin>>choice;

        switch(choice){
            case 0:
                printf("Thankyou... \n");
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
                    cout<<"TRUE"<<endl;
                }
                else{
                    cout<<"FALSE"<<endl;
                }
                break;
            default:
                    printf("INVALID CHOICE...");
                    break;
        }
    }while(choice != 0);
    return 0;
}