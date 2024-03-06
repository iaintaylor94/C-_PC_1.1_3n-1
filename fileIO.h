#ifndef FILEIO_H
#define FILEIO_H

#include <fstream>

class fileIO {
  std::ifstream inputFile;
  std::ofstream outputFile;

  bool usage (int, char*);
  void openInputFile(char *);
  void openOutputFile(char *);
  void closeInFile(void);
  void closeOutFile(void);

public:
  fileIO(int argc, char* argv[]);
  ~fileIO();
};

#endif