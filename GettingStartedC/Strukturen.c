#include <stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

// Abkürzung:
// typedef ALT      NEU;
typedef struct time Time;

void printTime(Time time)
{
    printf("%02d:%02d:%02d\n",
        time.hours, time.minutes, time.seconds);
}

void resetTime(Time time)
{
    time.hours = 0;
    time.minutes = 0;
    time.seconds = 0;
}

void strukturen()
{
    Time now = { 0 };

    now.hours = 12;
    now.minutes = 1;
    now.seconds = 30;

    Time pause = { 12, 30, 0 };

    // designated initializer syntax
    Time nachmittag = {
        .hours = 13, 
        .minutes = 15,
        .seconds = 0
    };

    printTime(now);
    printTime(pause);
    printTime(nachmittag);

    resetTime(now);
    printTime(now);
}