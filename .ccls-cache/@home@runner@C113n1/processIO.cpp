#include <string>
#include <iostream>
#include "processIO.h"
#include "fileIO.h"

processIO::processIO(void) {
  leftBoundary = 0;
  rightBoundary = 0;
  answer = 0;
}
processIO::~processIO(void) {
  std::cout << "processIO destructor called" << std::endl;
}

void processIO::printProcessIO (void) {
  printf ("PROCESS_IO\n");
  printf("leftBoundary = %d\n", leftBoundary);
  printf("rightBoundary = %d\n", rightBoundary);
  printf("answer = %d\n\n", answer);
}

void processIO::pullInput(fileIO &fIO) {
  leftBoundary = fIO.leftBoundary;
  rightBoundary = fIO.rightBoundary;
}
void processIO::pushOutput(fileIO &fIO) {
  fIO.answer = answer;
}

int processIO::calculateLength(int i) {
  int length = 1;
  while (i != 1) {
    if (i % 2 == 0) { // i is even
      i /= 2;
    }
    else { // i is odd
      i *= 3;
      i++;
    }
    length++;
  }
  //std::cout << "Length = " << length << std::endl;
  return length;
}
void processIO::findMax(void) {
  answer = 0;
  int temp = 0;
  for (int i = leftBoundary; i <= rightBoundary; i++) {
    if ((temp = calculateLength(i)) > answer) {
      answer = temp;
    }
  }
}