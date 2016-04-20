#include "algos.h"
#include <cstdlib>
#include <fstream>

std::vector<float> readVectorFromFile(const char* fileName);


int main(int argc, char** argv) {

  std::vector<float> myData = readVectorFromFile(argv[1]);
  // Fill the data

  algos::BubbleSort ms;

  ms.sort(myData.begin(), myData.end());

  return EXIT_SUCCESS;
}

std::vector<float> readVectorFromFile(const char* fileName) {
  std::vector<float> myData;
  float value;

  if (fileName == NULL)
      return myData;

  std::ifstream file (fileName);

  if (file.is_open()) {
      while (file >> value)
          myData.push_back(value);
  } else {
      std::cout << "Can't open the file " << fileName << std::endl;
  }

  return myData;
}
