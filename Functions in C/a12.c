#include<stdio.h>
#include<conio.h>

int avg(int[],int);

void main()
{
     int marks[5]={10,15,20,30,45},size,average;
     size=sizeof(marks)/sizeof(marks[0]);
     average=avg(marks,size);
     printf("Average = %d\n",average);
getch();
}

int avg(int marks1[],int size)
{
    int i,sum=0,averg=0;
    for(i=0;i<size;i++)
    {
        sum=sum+marks1[i];
    }
    averg = sum/size;
    return averg;
}
