#ifndef HELPER_H
#define HELPER_H

#include <ctime>

long calcDayDiff(time_t borrowTime, time_t now);
bool isOverdue(time_t borrowTime);
double calculateFine(time_t borrowTime);

#endif
