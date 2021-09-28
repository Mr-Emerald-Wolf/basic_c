#include <stdio.h>
typedef struct date
{
    int day;   // 02
    int month; // 1 -> 12
    int year;  // 2020

} date;
void compareDate(struct date a, struct date b); 
struct BankDATA
{
    char name[40];
    int accNo;
    int age;
    int date_of_joining;
    int balance;
};

int main()
{
    date today;
    date d1,d2;
    today.day = 02;
    today.month = 3;
    today.year = 2006;

    d1.day = 12;
    d1.month = 5;
    d1.year = 2056;

    d2.day = 31;
    d2.month = 3;
    d2.year = 2006;
    printf("Today's date is: %d/%d/%d\n",today.day,today.month,today.year);
    compareDate(d1,d2);

    return 0;
}

void compareDate(struct date a, struct date b)
{
    int x,y;
    x = a.year * 10000 + a.month*100 + a.day; //convert into reverse date 
    y = b.year * 10000 + b.month*100 + b.day; 

    // 20180000 + 600 + 12 = 20180612
    if(x>y)
    {
        printf("Older date is: %d/%d/%d\n",a.day,a.month,a.year);
    }
    else if (x==y)
    {
        printf("Date is same.");
    }
    else
    {
        printf("Older date is: %d/%d/%d\n",b.day,b.month,b.year);
    }
    
    
}
