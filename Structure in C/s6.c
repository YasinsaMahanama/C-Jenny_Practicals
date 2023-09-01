#include<stdio.h>
#include<conio.h>
#pragma pack(1)        // padding

typedef struct
{
    int day;
    int month;
    int year;
}date;

typedef struct
{
    int empno;
    char name[20];
    float salary;
    char gender;
    int c;
    date Bdate;
}employee;

void main()
{
    employee e1 = {01,"Yasinsa",75000,'F',1,  9,2023};
    employee e2 = {03,"Nanvidu",50000,'M'};

    printf("\n\nEmployee number : %d",e1.empno);
    printf("\nEmployee name : %s",e1.name);
    printf("\nEmployee gender : %c",e1.gender);
    printf("\nEmployee salary : %0.2f",e1.salary);
    printf("\nEmployee birthday : %d.%d.%d",e1.Bdate.day,e1.Bdate.month,e1.Bdate.year);

    printf("\nSize : %d",sizeof(e1));
    printf("\nSize : %d",sizeof(e2));

getch();
}
