#ifndef DP_H
#define DP_H

#include <vector>
#include <string>

class DP {
public:
    // Computes the nth Fibonacci number using dynamic programming
    static int fibonacci(int n, std::vector<int>& memo);

    // Solves the 0/1 Knapsack problem using dynamic programming
    static int knapsack(const std::vector<int>& weights, const std::vector<int>& values, int capacity);

    // Solves the Longest Common Subsequence (LCS) problem
    static int lcs(const std::string& str1, const std::string& str2);

    // Solves the Coin Change problem
    static int coinChange(const std::vector<int>& coins, int amount);
};

#endif // DP_H
