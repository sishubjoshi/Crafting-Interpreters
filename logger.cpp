#include<iostream>
#include<string>
#include "logger.h"

bool Logger::hadError = false;
void Logger::report(int line, const std::string& where, const std::string& message)
{
    std::cout << "[Line " << line << "] Error" << where << ":" << message << std::endl;
    hadError = true;
}
void Logger::error(int line, const std::string& message)
{
    report(line, "", message);
}

void Logger::setErrorValue(bool errorVal)
{
    hadError = errorVal;
}
bool Logger::getErrorStatus()
{
    return hadError;
}
