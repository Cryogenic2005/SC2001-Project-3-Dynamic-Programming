#include <filesystem>
#include <fstream>
#include <vector>

/// @brief Reader for the knapsack problem
/// @param filename The name of the file to read
/// @param number_of_items The number of items
/// @param weights The weights of the items
/// @param values The values of the items
int read_knapsack(const std::filesystem::path& filename, std::vector<int> &weights, std::vector<int> &values);