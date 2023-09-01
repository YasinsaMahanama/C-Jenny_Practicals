struct employee
{
    int empno;
    char name[20];
    float salary;
    char gender;
}e = {01,"Yasinsa",75000,'F'};

void main()
{
    struct employee e1 = {02,"Mahanama",25000,'M'};
    struct employee e2 = {03,"Nanvidu",50000,'M'};

    printf("\t\tDetails of the Employee......\n\n");



    printf("\n\nEmployee number : %d",e.empno);
    printf("\nEmployee name : %s",e.name);
    printf("\nEmployee gender : %c",e.gender);
    printf("\nEmployee salary : %0.2f",e.salary);

    printf("\n\nEmployee number : %d",e1.empno);
    printf("\nEmployee name : %s",e1.name);
    printf("\nEmployee gender : %c",e1.gender);
    printf("\nEmployee salary : %0.2f",e1.salary);

    printf("\n\nEmployee number : %d",e2.empno);
    printf("\nEmployee name : %s",e2.name);
    printf("\nEmployee gender : %c",e2.gender);
    printf("\nEmployee salary : %0.2f",e2.salary);

getch();
}


