#ifndef SORTING_H
#define SORTING_H

#include <vector>

class Sorting {
public:
    // Implements Bubble Sort
    static void bubbleSort(std::vector<int>& arr);

    // Implements Quick Sort
    static void quickSort(std::vector<int>& arr, int low, int high);

    // Implements Merge Sort
    static void mergeSort(std::vector<int>& arr, int left, int right);
};

#endif // SORTING_H
