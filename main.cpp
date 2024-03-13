#include <iostream>
#include "fileIO.h"
#include "processIO.h"

int main(int argc, char *argv[]) {
  /*-------------------------------FILE INITIALIZATION START-----------------------------*/
  // I/O definitions
  fileIO instanceIO (argc, argv);
  processIO instanceProcess;
  /*-------------------------------FILE INITIALIZATION END--------------------------------*/

  std::cout << "  LB   RB   AN" << std::endl;
  std::cout << "---- ---- ----" << std::endl;
  while (instanceIO.getInput()) {

    instanceProcess.pullInput(instanceIO);
    instanceProcess.findMax();
    instanceProcess.pushOutput(instanceIO);

    instanceIO.printIO();
  }


  
  /*--------------------------------FILE CLEANUP START------------------------------------*/
  /*--------------------------------FILE CLEANUP END--------------------------------------*/
  return 0;
}