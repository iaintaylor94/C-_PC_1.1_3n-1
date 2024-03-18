#ifndef FILEIO_H
#define FILEIO_H

#include <fstream>
#include "processIO.h"

class fileIO {

  bool usage (int, char*);
  void openInputFile(char *);
  void openOutputFile(char *);
  void closeInFile(void);
  void closeOutFile(void);

protected:
  int leftBoundary;
  int rightBoundary;

public:
  fileIO(int argc, char* argv[]);
  ~fileIO();

  bool operator ++ () {
    return (getInput());
  }


  // STREAM
  std::ifstream inputFile;
  std::ofstream outputFile;

  // LEFT SIDE
  friend std::ostream& operator<< (std::ostream& out, fileIO &f);
  friend std::istream& operator>> (std::istream& in, fileIO &f);

  // RIGHT SIDE
  friend fileIO& operator<< (fileIO &f, processIO &p);
  friend fileIO& operator>> (fileIO &f, processIO &p);

  bool getInput(void);
  void printIO (void);

  friend void processIO::pullInput(fileIO&);
  friend void processIO::pushOutput(fileIO&);

};

#endif