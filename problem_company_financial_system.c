#include <stdio.h>
#include <stdlib.h>

/*
A company wants to create a bonus system for its employees .
System will provide the following options:
We will have 5 arrays
Array for employee name, employee hours , employee rate, employee salary, employee bonus
Create a list of services provided for the user
1- add hours to an employee
2- add bonus to an employee
3- calculate salary for an employee
4- calculate sum of all salaries
5- list all employee name, employee hours, employee rate ,employee salary
*/

void add_hours(int hours1, char name_check, char names[5], int hours[5]);
void add_bonus(int bonus1, char name_check, char names[5], int bonus[5]);
void add_salary(char name_check,char names[5],int hours[5],int rate[5],int salary[5], int bonus[5]);
int welcome_to_system();

int main()
{
    char names[5]={'A','B','C','D','E'};
    int hours[5]={0};
    int rate[5]={10,10,10,10,10};
    int salary[5]={0};
    int bonus[5]={0};
    int choice;
    char names123;
    int hours1;
    int bonus1;
    do {
    choice=welcome_to_system();

    if (choice ==1)
    {
        printf("plz enter the name of employee :");
        scanf (" %c",&names123);
        printf("plz enter the number of hours :");
        scanf ("%d",&hours1);
        add_hours(hours1,names123,names,hours);
    }
    else if (choice==2)
    {
        printf("plz enter the name of employee :");
        scanf (" %c",&names123);
        printf("plz enter the amount of bonus :");
        scanf ("%d",&bonus1);
        add_bonus(bonus1,names123,names,bonus);
    }
    else if (choice==3)
    {
        printf("plz enter the name of employee :");
        scanf (" %c",&names123);
        add_salary(names123,names,hours,rate,salary,bonus);
    }
    else if (choice==0) break;


    }while (1);


    return 0;
}
int welcome_to_system()
{
    int choice;
    printf ("welcome to our system: \n");
    printf ("1- for adding hour to employee \n");
    printf ("2- for adding bonus to employee \n");
    printf ("3- for calculating salary to employee \n");
    printf ("4- for listing all salaries \n");
    printf ("0- for exit \n");
    printf ("plz enter your choice (0,1,2,3,4): \n");
    scanf("%d",&choice);
    return(choice);
}
void add_hours(int hours1,char name_check, char names[5], int hours[5])
{
    int i;
    for (i=0;i<5;i++)
    {

        if (names[i]==name_check)
            break;
    }
    hours[i]=hours[i]+hours1;
    printf ("hours added !!\n");
}

void add_bonus(int bonus1, char name_check, char names[5], int bonus[5])
{
    int i;
    for (i=0;i<5;i++)
    {
        if (names[i]==name_check)
            break;
    }
    bonus[i]=bonus[i]+bonus1;
    printf ("bonus added !!\n");
}
void add_salary(char name_check,char names[5],int hours[5],int rate[5],int salary[5], int bonus[5])
{
    int i;
    for (i=0;i<5;i++)
    {
        if (names[i]==name_check)
            break;
    }
    salary[i]=hours[i]*rate[i]+bonus[i];
    printf ("salary added !!\n");
}
