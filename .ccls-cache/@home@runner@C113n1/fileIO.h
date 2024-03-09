#ifndef FILEIO_H
#define FILEIO_H

#include "processIO.h"

#include <fstream>


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

};

#endif