#include<stdio.h>

struct Date
{


   int Day;
   int Month;
   int Year;

          
};

void acceptDateFromConsole(struct Date *ptr)
          {
          printf("enter Day,month,year- " );
          scanf("%d%d%d",&ptr->Day,&ptr->Month,&ptr->Year);
          }
          
void printDateOnConsole(struct Date *ptr)
          {
            printf("Date -%d/%d/%d",ptr->Day,ptr->Month,ptr->Year);
          }


    int main()
    {
         
    int choice;

    struct Date dd;

    do{
        printf("o.EXIT"\n);
        printf("1.accept Date\n");
        printf("2.print Date\n");
        printf("Enter Your Choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 0:
          printf("date");
          break;

        case 1:
        acceptDateFromConsole(&dd);
        break;

        case 2:
        printDateOnConsole(&dd);
        break;

        default:
        printf("worng choice");
        break;
        }

    }while(choice !=0);
    return 0;
}
