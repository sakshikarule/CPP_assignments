/*Question 2:

Define a struct in C for to save time 
struct members

Time struct
int hr,min,sec
initTime()    ->0:0:0
acceptTime()
DisplayTime()
increamentTimeBy1Min()
*/




#include<stdio.h>

struct Time
{
    int hr;
    int min;
    int sec;
};

void initTime(struct Time *t)
{
    t->hr = 0;
    t->min = 0;
    t->sec = 0;
}

void acceptTime(struct Time *t)
{
    printf("Enter Hours : ");
    scanf("%d",&t->hr);

    printf("Enter Minutes : ");
    scanf("%d",&t->min);

    printf("Enter Seconds : ");
    scanf("%d",&t->sec);
}

void DisplayTime(struct Time t)
{
    printf("\nTime = %d : %d : %d\n",t.hr,t.min,t.sec);
}

void increamentTimeBy1Min(struct Time *t)
{
    t->min++;

    if(t->min == 60)
    {
        t->min = 0;
        t->hr++;
    }

    if(t->hr == 24)
    {
        t->hr = 0;
    }
}

int main()
{
    struct Time t1;
    int choice;

    initTime(&t1);

    do
    {
        printf("\n1.Accept Time");
        printf("\n2.Display Time");
        printf("\n3.Increment Time By 1 Min");
        printf("\n4.Exit");

        printf("\nEnter Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                acceptTime(&t1);
                break;

            case 2:
                DisplayTime(t1);
                break;

            case 3:
                increamentTimeBy1Min(&t1);
                printf("Time Incremented Successfully\n");
                break;

            case 4:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    }while(choice != 4);

    return 0;
}
