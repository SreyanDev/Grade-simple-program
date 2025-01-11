#include<stdio.h>
int main()
{
        float grade;            

        printf("Enter the grade: ");
        scanf("%f",&grade);
                        
        if(grade==10)
                printf("Excellent");

        else if(grade>=9 && grade<=10)
                printf("Outstanding");

        else if(grade>=8 && grade<=9)
                printf("Very good");

        else if(grade>=7 && grade<=8)
                printf("Good");

        else if(grade>=6 && grade<=7)
                printf("Average");

        else if(grade>10 || grade<0)                            //If the grade is less than 0 or greater than 10 print range
                printf("Enter in the range of 0-10.");

        else
                printf("Fail");

        return 0;

}
