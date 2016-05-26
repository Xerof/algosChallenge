#ifndef _ALGOS_H_
#define _ALGOS_H_

#include <vector>
#include <iterator>
#include <iostream>
#include <queue>

namespace algos {


  class BubbleSort {
  public:

   template<typename Iterator>
    void sort(Iterator first,
              Iterator last) {
      applySort(first, last);
    }

   template<typename Iterator>
       void show (Iterator first, Iterator last) {
        for(; first!=last; first++) {
            std::cout << *first
                    << " ";
         }
       }

  protected:

    template<typename Iterator>
      void applySort(Iterator first,
                     Iterator last) {
        // Here goes the code for merge sort declare as manym methods as you want
        // but the interdace of the object has to be only the sort method

        Iterator i,j;
        for(i = first ;  i != last; i++) {
          for(j = first; j < i; j++) {
            if(*i < *j) {
              swap(i, j);
            }
          }
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

   template<typename Iterator>
       void show (Iterator first, Iterator last) {
        for(; first!=last; first++) {
            std::cout << *first
                    << " ";
         }
       }
  protected:
  template<typename Iterator>
    void applySort(Iterator first,
                   Iterator last) {
        mergeSort(first, last-1);
    }

    template<typename Iterator>
        void mergeSort(Iterator first,
                      Iterator last) {

            if (first < last) {
                int mid  = (last - first) / 2;
                mergeSort(first, first + mid);
                mergeSort(first + mid + 1 , last);
                merge(first, first + mid, last);
            }

    }

    template<typename Iterator>
        void merge(Iterator first,
                Iterator mid,
                Iterator last) {

            int i = 0;
            std::queue<typename std::iterator_traits<Iterator>::value_type> buffer1;
            std::queue<typename std::iterator_traits<Iterator>::value_type> buffer2;

            for (Iterator i = first; i <= mid; i++)
                buffer1.push(*i);
            for (Iterator i = mid +1 ; i <= last; i++)
                buffer2.push(*i);


            while( !buffer1.empty() && !buffer2.empty()) {
                if(buffer1.front() <= buffer2.front()) {
                    first[i++] = buffer1.front();
                    buffer1.pop();
                } else {
                    first[i++] = buffer2.front();
                    buffer2.pop();
                }
            }
            while(!(buffer1.empty())){ first[i++] = buffer1.front(); buffer1.pop();}
            while(!(buffer2.empty())){ first[i++] = buffer2.front(); buffer2.pop();}
        }

    };

    class InsertionSort {
      public:

       template<typename Iterator>
        void sort(Iterator first,
                  Iterator last) {
          applySort(first, last);
        }

       template<typename Iterator>
           void show (Iterator first, Iterator last) {
            for(; first!=last; first++) {
                std::cout << *first
                        << " ";
            }
        }
      protected:
      template<typename Iterator>
        void applySort(Iterator first,
                       Iterator last) {

            std::cout << "Apply "<< std::endl;
            Iterator i;
            Iterator j;
            for(j = first+1; j < last; ++j) {
                typename std::iterator_traits<Iterator>
                    ::value_type key = *j;
                i = j-1;
                while(i >= first && *i > key)
                {
                    *(i+1) = *i;
                    i--;
                    *(i+1) = key;
                }

            }
        }
    };

}
#endif
