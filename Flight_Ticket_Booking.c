#include <stdio.h>
#include <stdlib.h>
int main()
{
    // print Welcome statement //
    printf("Welcome to Travel-X Airways");
    int s;
    // ask user to make a selection //
    printf("\nPlease Enter Your Selection");
    printf("\n1. Book Ticket");
    printf("\n2. Exit");
    printf("\n[Press 1 or 2]\n");
    // get selection //
    scanf("%d",&s);
    switch(s)
    {
        // if 1 is selected proceed to book ticket //
        case 1:
        {
            // get user's name //
            char firstname[100],lastname[100],departure[100],arrival[100];
            printf("First Name: ");
            scanf("%s",&firstname);
            printf("Second Name: ");
            scanf("%s",&lastname);
            // get user's age //
            int age;
            printf("Age: ");
            scanf("%d",&age);
            // get date of travel//
            char date[100];
            printf("Date of Booking(dd/mm/yyyy): ");
            scanf("%s",&date);
            printf("Enter Departure: ");
            scanf("%s",&departure);
            printf("Enter Arrival: ");
            scanf("%s",&arrival);
            printf("Ticket Successfully Booked");
            printf("\nName of Passenger: %s %s",firstname,lastname);
            printf("\nAge of Passenger: %d",age);
            printf("\nDate of Flight: %s",date);
            printf("\nDeparture: %s",departure);
            printf("\nArrival: %s",arrival);
        }
        break;
        // if 2 is selected proceed exit //
        case 2:
        {
            exit(0);
        }
        break;
        // if any other input is given print invalid and exit //
        default:
        {
            printf("Invalid Input");
            printf("\nPlease Start Over");
            exit (0);
        }
    }
}