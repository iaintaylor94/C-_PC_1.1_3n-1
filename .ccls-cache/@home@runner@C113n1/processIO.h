#ifndef PROCESSIO_H
#define PROCESSIO_H

#include <stdio.h>
#include "fileIO.h"


class processIO {
  int leftBoundary;
  int rightBoundary;
  int answer;

  int calculateLength (int);

public:
  processIO(void);
  ~processIO(void);

  void pullInput(fileIO&);

  void findMax(void);

  void printProcessIO (void);
};

#endif