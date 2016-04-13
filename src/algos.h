#ifndef _ALGOS_H_
#define _ALGOS_H_

#include <vector>
#include <iterator>

namespace algos {
  
 template<typename T>
  class SortAlgos {
  public:
    // This is the inherited interface
    void sort(std::vector<T>::iterator& first, std::vector<T>::iterator& last) {
      applySort(first, last);
    }

  protected:
    // Check the virtual pure functions
    virtual void applySort(std::vector<T>::iterator& first, std::vector<T>::iterator& last) = 0;
  }

  template<typename T>
  class MergeSort : public SortAlgos<T> {
  public:
  protected:
    void applySort(std::vector<T>::iterator& first, std::vector<T>::iterator last){
    }
  }

}



#endif
