#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include "../C++DSA_Library/algorithms/sorting.h"  // Include your sorting algorithms

using namespace std;
using namespace std::chrono;

void benchmarkQuickSort(vector<int>& arr) {
    auto start = high_resolution_clock::now();
    
    quickSort(arr, 0, arr.size() - 1);
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "QuickSort Execution Time: " << duration.count() << " ms" << endl;
}

void benchmarkMergeSort(vector<int>& arr) {
    auto start = high_resolution_clock::now();
    
    mergeSort(arr, 0, arr.size() - 1);
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "MergeSort Execution Time: " << duration.count() << " ms" << endl;
}

int main() {
    vector<int> arr = { 9, 4, 7, 1, 3, 6, 2, 8, 5 };

    cout << "Benchmarking Sorting Algorithms..." << endl;

    vector<int> quickArr = arr;
    benchmarkQuickSort(quickArr);

    vector<int> mergeArr = arr;
    benchmarkMergeSort(mergeArr);

    return 0;
}
