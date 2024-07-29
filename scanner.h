#ifndef SCANNER_H
#define SCANNER_H
#include<string>
class Scanner
{
    private:
        const std::string source;
    public:
        Scanner(std::string src);
        std::string getSourceCode() const;
};

#endif
