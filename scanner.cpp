#include "scanner.h"
#include<iostream>
Scanner::Scanner(std::string src) : source(src){}

std::string Scanner::getSourceCode() const
{
    return source;
}
