#include <reader.hpp>

#include <filesystem>
#include <fstream>
#include <vector>

int read_knapsack(const std::filesystem::path& filename, std::vector<int> &weights, std::vector<int> &values){
    std::ifstream file(filename);

    if (!file.is_open()) {
        throw std::runtime_error("could not open file");
    }

    int number_of_items;
    file >> number_of_items;

    weights.resize(number_of_items);
    values.resize(number_of_items);

    for (int i = 0; i < number_of_items; i++) {
        file >> weights[i];
        file >> values[i];
    }
    
    file.close();

    return number_of_items;
}