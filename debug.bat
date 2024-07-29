g++ -c scanner.cpp
g++ -c lox.cpp
g++ -c logger.cpp
g++ scanner.o lox.o logger.o -o scanner_program
scanner_program .\test.cpp
