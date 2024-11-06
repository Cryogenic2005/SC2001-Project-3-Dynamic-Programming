#include <knapsack.hpp>
#include <reader.hpp>

#include <iostream>
#include <filesystem>
#include <vector>

int main(int argc, char *argv[]) {
    const int DEFAULT_CAPACITY = 14;

    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <path_to_data_file> [capacity1] [capacity2] ..." << std::endl;
        return 1;
    }

    std::filesystem::path path = argv[1];

    if (!std::filesystem::exists(path)) {
        std::cerr << "Error: File " << path << " does not exist." << std::endl;
        return 1;
    }

    std::vector<int> weights, values;
    read_knapsack(path, weights, values);

    Knapsack knapsack = Knapsack(weights, values);

    if(argc <= 2){
        std::cout << "Capacity: " << DEFAULT_CAPACITY;
        std::cout << " => Value: " << knapsack.solve(DEFAULT_CAPACITY) << std::endl;
    }

    for (int i = 2; i < argc; i++) {
        int capacity;

        // Convert the argument to an integer, if possible
        try {
            capacity = std::stoi(argv[i]);
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: Invalid capacity value '" << argv[i] << "'." << std::endl;
            return 1;
        }

        std::cout << "Capacity: " << capacity;
        std::cout << "=> Value: " << knapsack.solve(capacity) << std::endl;
    }

    return 0;
}