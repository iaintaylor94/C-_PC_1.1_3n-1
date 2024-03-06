#ifndef INPUTFILE_H
#define INPUTFILE_H

#include <iostream>

class fileIO {
int numArgs;
char *cmd;
std::ifstream inputFile;
std::ofstream outFile;
public:
void usage (int, char*);
void openFileInput(void);
};

void usage (int, char *);
FILE * openInputFile(char *);
FILE * openOutputFile (char *);

#endif