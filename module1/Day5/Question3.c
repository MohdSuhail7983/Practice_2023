#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time calculateTimeDifference(struct Time t1, struct Time t2) {
    struct Time diff;

    int time1InSeconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int time2InSeconds = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;


    int differenceInSeconds = abs(time1InSeconds - time2InSeconds);


    diff.hours = differenceInSeconds / 3600;
    differenceInSeconds %= 3600;
    diff.minutes = differenceInSeconds / 60;
    diff.seconds = differenceInSeconds % 60;

    return diff;
}

int main() {
    struct Time startTime, endTime, difference;

    printf("Enter the start time:\n");
    printf("Hours: ");
    scanf("%d", &startTime.hours);
    printf("Minutes: ");
    scanf("%d", &startTime.minutes);
    printf("Seconds: ");
    scanf("%d", &startTime.seconds);

    printf("\nEnter the end time:\n");
    printf("Hours: ");
    scanf("%d", &endTime.hours);
    printf("Minutes: ");
    scanf("%d", &endTime.minutes);
    printf("Seconds: ");
    scanf("%d", &endTime.seconds);

    difference = calculateTimeDifference(startTime, endTime);

    printf("\nDifference between the two time periods:\n");
    printf("Hours: %d, Minutes: %d, Seconds: %d\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}