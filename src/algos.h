#ifndef _ALGOS_H_
#define _ALGOS_H_

#include <vector>
#include <iterator>
#include <iostream>


namespace algos {


  class BubbleSort {
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
        std::cout << "BubbleSort: "<< __func__ << std::endl;
        // Here goes the code for merge sort declare as manym methods as you want
        // but the interdace of the object has to be only the sort method

        Iterator i,j;
        for(i = first ;  i != last; i++) {
          std::cout<< *i << std::endl;
          for(j = first; j < i; j++) {
            if(*i < *j) {
              swap(i, j);
            }
          }
        }
        // For now the function will only be printing the data
        // This is just to show you the way the iterator works
        Iterator it = first;
        std::cout << "Printing" << std::endl;
        for(; it!=last; ++it) {
          std::cout << *it
                    << " "
                    << std::endl;
        }

      }
    template<typename Iterator>
        void swap(Iterator it1, Iterator it2) {
            typename std::iterator_traits<Iterator>
                ::value_type tmp;

            tmp = *it1;
            *it1 = *it2;
            *it2 = tmp;
        }
    };

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
      // This is just to show you the way the iterator works
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
