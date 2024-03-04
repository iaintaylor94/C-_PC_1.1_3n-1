#ifndef INPUTFILE_H
#define INPUTFILE_H

#include <stdio.h>

void usage (int, char *);
FILE * openInputFile(char *);
FILE * openOutputFile (char *);

#endif