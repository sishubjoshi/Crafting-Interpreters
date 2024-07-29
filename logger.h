#ifndef LOGGER_H
#define LOGGER_H

#include <string>

class Logger
{
    private:
        static bool hadError;
        static void report(int line, const std::string& where, const std::string& message);
    public:
        static void error(int line, const std::string& message);
        static bool getErrorStatus();
        static void setErrorValue(bool errorVal);
};
#endif
