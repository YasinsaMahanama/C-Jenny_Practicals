struct employee
{
    int empno;
    char name[20];
    float salary;
    char gender;
};

void main()
{
    struct employee e[3];
    int i;

    for(i=0;i<3;i++)
    {
        printf("\nEnter employee number : ");
        scanf("%d",&e[i].empno);
        printf("Enter employee name : ");
        scanf(" %[^\n]",&e[i].name);
        printf("Enter employee gender[F/M] : ");
        scanf(" %c",&e[i].gender);
        printf("Enter employee salary : ");
        scanf("%f",&e[i].salary);
    }

    printf("\n\nDetails of the Employee......\n\n");


    for(i=0;i<3;i++)
    {
        printf("\n\nEmployee number : %d",e[i].empno);
        printf("\nEmployee name : %s",e[i].name);
        printf("\nEmployee gender : %c",e[i].gender);
        printf("\nEmployee salary : %0.2f",e[i].salary);
    }


getch();
}

