#include <stdio.h>

struct Time {
    int hours, minutes;
    long seconds;
};

int main() {
    // struct Time t1 = {60, 3600, 216000};
    // struct Time t2 = {60, 3600, 216000};
    struct Time t1, t2;

    printf("Enter the Time in hours: ");
    scanf("%d", &t1.hours);

    printf("Enter the Time in minutes: ");
    scanf("%d", &t1.minutes);

    printf("Enter the Time in seconds: ");
    scanf("%ld", &t1.seconds);

    printf("Below Enter the Value of Time T2:-\n");

    printf("Enter the Time in Hours: ");
    scanf("%d", &t2.hours);
    printf("Enter the Time in minutes: ");
    scanf("%d", &t2.minutes);
    printf("Enter the Time in seconds: ");
    scanf("%ld", &t2.seconds);

    int resutl_Time_T1 = t1.hours + t1.minutes + t1.seconds;
    int resutl_Time_T2 = t2.hours + t2.minutes + t2.seconds;

    printf("Therefore the Resultant value of the Time T1 & T2 is: %d in T1, %d in T2.", resutl_Time_T1, resutl_Time_T2);
    
    return 0;
}

