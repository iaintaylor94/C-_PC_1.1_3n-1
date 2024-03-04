#include <iostream>
#include "inputfile.h"

// I/O definitions
FILE *gInputFile = NULL;
FILE *gOutputFile = NULL;

int main(int argc, char *argv[]) {
  /*-------------------------------FILE INITIALIZATION START-----------------------------*/
  usage (argc, argv[0]);
  FILE *gIFileP = openInputFile (argv[1]);
  FILE *gOFileO = openOutputFile (argv[1]);
  /*-------------------------------FILE INITIALIZATION END--------------------------------*/



  
  /*--------------------------------FILE CLEANUP START------------------------------------*/
  fclose (gIFileP);
  fclose (gOFileO);
  /*--------------------------------FILE CLEANUP END--------------------------------------*/
  return 0;
}