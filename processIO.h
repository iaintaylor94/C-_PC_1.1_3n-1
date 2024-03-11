#ifndef PROCESSIO_H
#define PROCESSIO_H

class fileIO;

class processIO {
  int leftBoundary;
  int rightBoundary;
  int answer;

  int calculateLength (int);

public:
  processIO(void);
  ~processIO(void);

  void pullInput(fileIO&);
  void pushOutput(fileIO&);

  void findMax(void);

  void printProcessIO (void);
};

#endif