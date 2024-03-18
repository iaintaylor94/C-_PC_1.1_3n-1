#ifndef PROCESSIO_H
#define PROCESSIO_H

#include <fstream>
#include "fileIO.h"

class processIO : public fileIO {
  int answer;

  int calculateLength (int);

public:
  processIO(int argc, char *argv[]) : fileIO(argc, argv[]);
  ~processIO(void);

  friend fileIO& operator<< (fileIO &f, processIO &p);
  friend fileIO& operator>> (fileIO &f, processIO &p);

  void pullInput(fileIO&);
  void pushOutput(fileIO&);

  void findMax(void);

  void printProcessIO (void);
};

#endif