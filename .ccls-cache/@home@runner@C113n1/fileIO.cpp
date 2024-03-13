#include <fstream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>
#include <errno.h>
#include <iostream>
#include <iomanip>
#include "fileIO.h"
#include "processIO.h"

fileIO::fileIO(int argc, char *argv[]) {
  if (usage(argc, argv[0])) {
    openInputFile (argv[1]);
    openOutputFile(argv[1]);
  }
}
fileIO::~fileIO() {
  closeInFile ();
  closeOutFile ();
  std::cout << "fileIO destructor called" << std::endl;
}

bool fileIO::usage (int numArgs, char *cmd) {
  if (numArgs != 2) {
    fprintf (stderr, "Usage: %s <filename>\n", cmd);
    return false;
  }
  else {
    return true;
  }
}

void fileIO::openInputFile (char *fileName) {
  fileIO::inputFile.open (fileName);
  if (!fileIO::inputFile.is_open()) {
    fprintf (stderr, "inputFile: %s: %s\n", fileName, strerror(errno));
    return;
  }
  else {
    fprintf (stderr, "%s opened for reading.\n" , fileName);
    return;
  }
}

void fileIO::openOutputFile (char *fileName) {
  strcat (fileName, ".out");
  outputFile.open (fileName);
  if (!outputFile.is_open()) {
    fprintf (stderr, "outputFile: %s: %s\n", fileName, strerror(errno));
    return;
  }
  else {
    fprintf (stderr, "%s opened for writing.\n" , fileName);
  }
}

void fileIO::closeInFile (void) {
  inputFile.close();
}
void fileIO::closeOutFile (void) {
  outputFile.close();
}

void fileIO::printIO (void) {

  std::cout << std::setw(4) << leftBoundary << " "
            << std::setw(4) << rightBoundary << " "
            << std::setw(4) << answer << std::endl;

}

bool fileIO::getInput (void) {
  std::string temp;
  if (std::getline (inputFile, temp)) {
    std::istringstream iss (temp);
    iss >> leftBoundary >> rightBoundary;
    return true;
  }
  return false;
}

