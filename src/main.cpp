#include "algos.h"
#include <cstdlib>
#include <fstream>
#include <string.h>

std::vector<float> readVectorFromFile(const char* fileName);


int main(int argc, char** argv) {

  std::vector<float> myData;
  // Fill the data
  if(argc != 2) {
    myData = readVectorFromFile(argv[2]);
        if (0 == strncmp(argv[1],"merge",5)) {
            algos::MergeSort al;
            al.sort(myData.begin(), myData.end());
            al.show(myData.begin(), myData.end());
        } else {
            algos::BubbleSort al;
            al.sort(myData.begin(), myData.end());
            al.show(myData.begin(), myData.end());
        }
    } else {
    algos::MergeSort al;
    myData = readVectorFromFile(argv[1]);

    al.sort(myData.begin(), myData.end());
    al.show(myData.begin(), myData.end());

    }

    return EXIT_SUCCESS;
}

std::vector<float> readVectorFromFile(const char* fileName) {
  std::vector<float> myData;
  float value;

  if(fileName == NULL)
    return myData;

  std::ifstream file (fileName);

  if(file.is_open()) {
    while (file >> value)
      myData.push_back(value);
  } else {
    std::cout << "Can't open the file " << fileName << std::endl;
  }

  return myData;
}
