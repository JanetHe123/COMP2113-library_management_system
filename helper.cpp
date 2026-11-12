#include "helper.h"

//Calculate the difference of days
long calcDayDiff(time_t borrowTime, time_t nowTime){
    double seconds = difftime(nowTime, borrowTime);
    return static_cast<long>(seconds / 86400.0);
}

//Determine whether overdue or not
bool isOverdue(time_t borrowTime){
    time_t nowTime = time(nullptr);
    return calcDayDiff(borrowTime, nowTime) > 14;
}

//Calculate fine (2 HKD per day after 14 days)
double calculateFine(time_t borrowTime){
    time_t now = time(nullptr);
    long days = calcDayDiff(borrowTime, now);
    if (days>14){
        return (days-14)*2.0;
    }
    return 0.0;
}

