#include "knapsack.hpp"

#include <iostream>
#include <stdexcept>
#include <vector>

Knapsack::Knapsack(std::vector<int> weights, std::vector<int> values, int initial_capacity){
    if (weights.size() != values.size()) {
        throw std::invalid_argument("weights and values must have the same sized input");
    }

    this->weights = weights;
    this->values = values;
    this->dp = std::vector<int>(initial_capacity + 1, -1);
}    

int Knapsack::solve(int capacity){
    if (capacity < 0) {
        throw std::invalid_argument("Capacity must be non-negative");
    }

    if(dp.size() <= capacity + 1){
        dp.resize(capacity + 1, -1);
    }

    if(dp[capacity] != -1){
        return dp[capacity];
    }

    for(int i = 0; i <= capacity; i++){
        dp[i] = 0;
        for(int j = 0; j < weights.size(); j++){
            if(weights[j] <= i){
                dp[i] = std::max(dp[i], dp[i - weights[j]] + values[j]);
            }
        }
    }

    return dp[capacity];
}