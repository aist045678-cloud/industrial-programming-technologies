#include "Time.h"
#include "TimeCalc.h"

Time calculateTime(int totalSeconds) {
    Time result;

    result.hours = totalSeconds / 3600;
    result.minutes = (totalSeconds % 3600) / 60;
    result.seconds = totalSeconds % 60;

    return result;
}