#include "algos.h"
#include <cstdlib>

std::vector<float> readVectorFromFile(const char* fileName);


int main(int argc, char** argv) {

  std::vector<float> myData = readVectorFromFile(argv[1]);
  // Fill the data

  algos::MergeSort ms;

  ms.sort(myData.begin(), myData.end());

  return EXIT_SUCCESS;
}

std::vector<float> readVectorFromFile(const char* fileName) {
// to be filled
  std::vector<float> myData;

  return myData;
}
