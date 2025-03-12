#include <stdio.h>

// OO
struct time
{
    int hours;
    int minutes;
    int seconds;
};

// Abkürzung:
// typedef ALT      NEU;
typedef struct time Time;


// "Methoden": Haben alle struct Time als ERSTEN Parameter !!!
void printTime (const Time* self);
void resetTime (Time* self);
void setTime   (Time* self, int hours, int minutes, int seconds);



void printTime(const Time* time)
{
    //int h = time->hours;  // LESEN !!!
    //time->hours = 999;    // SCHREIBEN: NO

    printf("%02d:%02d:%02d\n",
        time->hours, time->minutes, time->seconds);
}

//void resetTime(Time time)
//{
//    time.hours = 0;
//    time.minutes = 0;
//    time.seconds = 0;
//}

void resetTime(Time* time)
{
    //time.hours = 0;
    //time.minutes = 0;
    //time.seconds = 0;

    // classic -indirekten Schreiben
    //(*time).hours = 0;
    //(*time).minutes = 0;
    //(*time).seconds = 0;

    // alternative syntax
    time->hours = 0;
    time->minutes = 0;
    time->seconds = 0;
}

void setTime(Time* time, int hours, int minutes, int seconds)
{
    time->hours = hours;
    time->minutes = minutes;
    time->seconds = seconds;
}

void strukturen()
{
    printf("Sizeof (Time): %d\n", sizeof (Time));

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

    printTime(&now);
    printTime(&pause);
    printTime(&nachmittag);

    resetTime(&now);
    printTime(&now);

    setTime(&now, 13, 54, 0);

    //

    now.hours = 13;
    now.minutes = 54;
    now.seconds = 0;

    printTime(&now);
}