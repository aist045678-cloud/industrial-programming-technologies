#include "TimeFormatter.h"
#include "Time.h"
#include <sstream>
#include <iomanip>

std::string formatTime(const Time& time) {
    std::ostringstream output;

    output << time.hours << ':'
           << std::setw(2) << std::setfill('0') << time.minutes << ':'
           << std::setw(2) << std::setfill('0') << time.seconds;

    return output.str();
}