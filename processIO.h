#ifndef PROCESSIO_H
#define PROCESSIO_H

#include <fstream>

class fileIO;

class processIO {
  int leftBoundary;
  int rightBoundary;
  int answer;

  int calculateLength (int);

public:
  processIO(void);
  ~processIO(void);

  friend fileIO& operator<< (fileIO &f, processIO &p);
  friend fileIO& operator>> (fileIO &f, processIO &p);

  void pullInput(fileIO&);
  void pushOutput(fileIO&);

  void findMax(void);

  void printProcessIO (void);
};

#endif