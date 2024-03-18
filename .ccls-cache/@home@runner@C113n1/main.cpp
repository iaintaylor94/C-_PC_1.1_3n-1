#include <iostream>
#include "fileIO.h"
#include "processIO.h"

int main(int argc, char *argv[]) {
  /*-------------------------------FILE INITIALIZATION START-----------------------------*/
  // I/O definitions
  fileIO instanceIO (argc, argv);
  processIO instanceProcess;
  /*-------------------------------FILE INITIALIZATION END--------------------------------*/

  // COUT                                          // OUTPUT FILE
  std::cout << "  LB   RB   AN" << std::endl;      instanceIO.outputFile << "  LB   RB   AN" << std::endl;
  std::cout << "---- ---- ----" << std::endl;      instanceIO.outputFile << "---- ---- ----" << std::endl;
  
  while (instanceIO.inputFile.peek() != EOF) {
    
    instanceIO.inputFile >> instanceIO;
    instanceIO >> instanceProcess;
    instanceProcess.findMax();
    instanceIO << instanceProcess;
    std::cout << instanceIO;                        instanceIO.outputFile << instanceIO;
    
  }


  
  /*--------------------------------FILE CLEANUP START------------------------------------*/
  /*--------------------------------FILE CLEANUP END--------------------------------------*/
  return 0;
}