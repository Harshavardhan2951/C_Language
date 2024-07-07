#include <stdio.h>
#include <string.h>

struct studentinfo
{
    char name[25];
    int roll_No;
    int total_Marks;
    float cgpa;
};


int main() {
    struct studentinfo s1;
    struct studentinfo s2;
    struct studentinfo s3;

    /*Struct Student S1*/
    s1.cgpa = 7.823;
    strcpy(s1.name, "ABC");
    s1.roll_No = 23;
    s1.total_Marks = 400;
    
    /*Struct Student S2*/
    s2.cgpa = 7.824;
    strcpy(s2.name, "ABCD");
    s2.roll_No = 24;
    s2.total_Marks = 440;

    /*Struct Student S3*/
    s3.cgpa = 7.825;
    strcpy(s3.name, "ABCDE");
    s3.roll_No = 25;
    s3.total_Marks = 500;

    printf("Student Info S1:\n%s\n%d\n%f\n%d\n", s1.name, s1.roll_No, s1.cgpa, s1.total_Marks);
    printf("\nStudent Info S2:\n%s\n%d\n%f\n%d\n", s2.name, s2.roll_No, s2.cgpa, s2.total_Marks);
    printf("\nStudent Info S3:\n%s\n%d\n%f\n%d\n", s3.name, s3.roll_No, s3.cgpa, s3.total_Marks);

    return 0;
}