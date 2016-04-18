#ifndef _ALGOS_H_
#define _ALGOS_H_

#include <vector>
#include <iterator>
#include <iostream>


namespace algos {
  /*
  class SortAlgos {
  public:
    // This is the inherited interface

   template<typename _Tp>
    void sort(typename std::vector<_Tp>::iterator& first, typename std::vector<_Tp>::iterator& last) {
      applySort(first, last);
    }

  protected:
    // Check the virtual pure functions
   template<typename _Tp>
    virtual void applySort(typename std::vector<_Tp>::iterator& first, typename std::vector<_Tp>::iterator& last) = 0;
  };*/

  class MergeSort {
  public:

   template<typename Iterator>
    void sort(Iterator first, 
              Iterator last) {
      applySort(first, last);
    }

  protected:
  template<typename Iterator>
    void applySort(Iterator first, 
                   Iterator last) {
      // For now the function will only be printing the data
      std::cout << "Printing" << std::endl;
      for(; first!=last; first++) {
        std::cout << *first 
                  << " "
                  << std::endl;
      }
      // Here goes the code for merge sort declare as manym methods as you want
      // but the interdace of the object has to be only the sort method
    }
  };

}



#endif
