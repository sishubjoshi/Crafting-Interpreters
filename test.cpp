#include <iostream>
using namespace std;

#define print(x) cout << x << endl;
#define printm(x,y) cout << x << y << endl;


int main(int argc, char* argv[])
{
	if(argc == 1)print("Usage clox [script]");
    printm("Argument Count:", argc);
    printm("Arg 1: ", *argv++);
    printm("Arg 2: ", *argv);
    return 0;
}
