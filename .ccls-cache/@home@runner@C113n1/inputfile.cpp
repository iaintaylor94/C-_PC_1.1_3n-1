#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <errno.h>
#include "inputfile.h"

void fileIO::usage (int numArgs, char *cmd) {
  if (numArgs != 2) {
    fprintf (stderr, "Usage: %s <filename>\n", cmd);
    exit (EXIT_FAILURE);
  }
}

FILE * openInputFile (char *fileName) {
  FILE *fp;

  ifstream infile;
  if (NULL == (fp = fopen(fileName, "r"))) {
    fprintf (stderr, "inputFile: %s: %s\n", fileName, std::strerror(errno));
    return NULL;
  }
  else {
    fprintf (stderr, "%s opened for reading.\n" , fileName);
    return fp;
  }
  
  if (NULL == (fp = fopen(fileName, "r"))) {
    fprintf (stderr, "inputFile: %s: %s\n", fileName, std::strerror(errno));
    return NULL;
  }
  else {
    fprintf (stderr, "%s opened for reading.\n" , fileName);
    return fp;
  }
}

FILE * openOutputFile (char *fileName) {
  char fname [50];
  FILE * fp;
  sprintf (fname, "%s.output", fileName);
  if (NULL == (fp = fopen(fname, "w"))) {
    fprintf (stderr, "outputFile: %s: %s\n", fname, strerror(errno));
    return NULL;
  }
  else {
    fprintf (stderr, "%s opened for writing.\n\n" , fname);
    return fp;
  }
}