#include "algos.h"
#include <cstdlib>
#include <fstream>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
#include <time.h>
#include <iomanip>

#define INPUT_FILE 1
#define BUBBLESORT 2
#define MERGESORT 4
#define INSERTIONSORT 8
#define PRINTINPUT 16

static int32_t flag;

std::vector<float> readVectorFromFile(const char* fileName);
void usage()
{
    std::cout << "Usage: -b: Bubble sort -m: Merge sort -i: Insertion sort "
              << "-f: <file_name> -h: help" << std::endl;
}

void setflags(int argc, char **argv, char *filename)
{
    int c = 0;
    opterr = 0;
    while((c = getopt(argc, argv, "ibdhmf:")) != -1)
    switch(c)
    {
        case 'b':
        {
            flag |= BUBBLESORT;
        }break;

        case 'd':
        {
            flag |= PRINTINPUT;
        }break;


        case 'f':
        {
            flag |= INPUT_FILE;
            memcpy(filename, optarg, strlen(optarg) + 1);
        }break;

        case 'h':
        {
            usage();
        }break;

        case 'm':
        {
            flag |= MERGESORT;
        }break;

        case 'i':
        {
            flag |= INSERTIONSORT;
        }break;


        case '?':
        {
            usage();
        }break;

        default:
            abort();
      }
}

int main(int argc, char** argv) {

    std::vector<float> myData;
    char filename[100];

    if(argc < 2 )
    {
        usage();
        return EXIT_SUCCESS;
    }

    setflags(argc, argv, filename);
    if(flag & INPUT_FILE) {
        std::cout <<"File: "<< filename << std::endl;
        myData = readVectorFromFile(filename);
        if(flag & PRINTINPUT) {
            std::cout << "Input: "<<std::endl;
            for(std::vector<float>::const_iterator it = myData.begin();
                it != myData.end(); ++it)
                std::cout << *it << std::endl;
        }

<<<<<<< HEAD
        int start_s = clock();
=======
>>>>>>> 2cbe9256002b49ffb67f2ca9546fc890fc7e00b0
        if(flag & BUBBLESORT)
        {
            std::cout << "Bubble Sort" << std::endl;
            algos::MergeSort al;
            al.sort(myData.begin(), myData.end());
            al.show(myData.begin(), myData.end());
        }

        if(flag & MERGESORT)
        {
            std::cout << "Merge Sort" << std::endl;
            algos::BubbleSort al;
            al.sort(myData.begin(), myData.end());
            al.show(myData.begin(), myData.end());
        }

        if(flag & INSERTIONSORT)
        {
            std::cout << "Insertion Sort" << std::endl;
            algos::InsertionSort al;
            al.sort(myData.begin(), myData.end());
            al.show(myData.begin(), myData.end());
        }
<<<<<<< HEAD
        std::cout<<"time: " << (clock() - start_s)/double(CLOCKS_PER_SEC)*1000 <<std::endl;
=======
>>>>>>> 2cbe9256002b49ffb67f2ca9546fc890fc7e00b0
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
