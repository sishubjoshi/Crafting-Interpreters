#include <iostream>
#include <fstream>
#include "scanner.h"
#include "logger.h"
using namespace std;

#define print(x) cout << x << endl;
#define printm(x,y) cout << x << y << endl;

void run(string source)
{
    // scan
    print("Inside Run Function");
    Scanner scanner(source);
    print(scanner.getSourceCode());
    Logger::error(10, "hmmm");
    //print the tokens
}

void readFile(const char* file)
{
    ifstream in(file);
    if(!in.is_open()) printm("Error opening file:", file);
    //read the file and call run function
    string line, source;
    while(getline(in, line))
    {
        // print(line);
        source.append(line);
        source.append("\n");
    }

    in.close();
    // print(source);
    run(source);
    if(Logger::getErrorStatus())
        return;
}
int main(int argc, char* argv[])
{
    print((Logger::getErrorStatus() == false?"Yay":"Nay"));
    if(argc == 1)
    {
        print("Usage clox [script]");
        return 1;
    }
    else if(argc == 2)
    {
        printm("Reading File", argv[1]);
        readFile(argv[1]);
    }
    return 0;
}
