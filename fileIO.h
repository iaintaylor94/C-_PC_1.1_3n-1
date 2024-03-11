#ifndef FILEIO_H
#define FILEIO_H

#include <fstream>

#include "processIO.h"
class processIO;

class fileIO {

  std::ifstream inputFile;
  std::ofstream outputFile;

  bool usage (int, char*);
  void openInputFile(char *);
  void openOutputFile(char *);
  void closeInFile(void);
  void closeOutFile(void);

  int leftBoundary;
  int rightBoundary;
  int answer;

public:
  fileIO(int argc, char* argv[]);
  ~fileIO();

  void getInput(void);
  void printIO (void);

  friend void processIO::pullInput(fileIO&);
  friend void processIO::pushOutput(fileIO&);

};

#endif