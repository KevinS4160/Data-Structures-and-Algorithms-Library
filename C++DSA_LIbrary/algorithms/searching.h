#ifndef SEARCHING_H
#define SEARCHING_H

#include <vector>

class Searching {
public:
    // Implements Binary Search algorithm
    static int binarySearch(const std::vector<int>& arr, int target);

    // Implements Linear Search algorithm
    static int linearSearch(const std::vector<int>& arr, int target);
};

#endif // SEARCHING_H
