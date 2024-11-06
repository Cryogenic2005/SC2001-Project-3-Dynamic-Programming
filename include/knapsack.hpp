#include <vector>

/// @brief Knapsack problem solver
class Knapsack {
    /// @brief The weights of the items
    std::vector<int> weights;

    /// @brief The values of the items
    std::vector<int> values;

    /// @brief The dynamic programming table
    std::vector<int> dp;

public:
    /// @brief Constructor for Knapsack
    /// @param weights The weights of the items
    /// @param values The values of the items
    /// @param initial_capacity The initial capacity of the knapsack, default is 100
    Knapsack(std::vector<int> weights, std::vector<int> values, int initial_capacity = 100);
    
    /// @brief Solve the knapsack problem
    /// @param capacity The capacity of the knapsack
    /// @return The maximum value that can be obtained
    int solve(int capacity);
};