//
// Created by velizar on 6/2/25.
//
#include <iostream>
#include <map>
#include <vector>
#include <random>


int main() {
    std::random_device random_device;
    std::mt19937 random_engine{random_device()};
    std::cout << "Welcome to the GUESSING GAME!" << std::endl;
    std::cout << "I will generate a number and you will guess it!" << std::endl;
    std::cout << "Please provide the smallest number:" << std::endl;
    double low_bound;
    std::cin >> low_bound;
    std::cout << "Please provide the largest number:" << std::endl;
    double high_bound;
    std::cin >> high_bound;
    std::cout << "I've generated a number. Try to guess it!" << std::endl;
    int k = 0;
    std::uniform_real_distribution distribution{low_bound, high_bound};
    int correct_num = distribution(random_engine);
    int guess = 0;
    while (true) {
        std::cout << "Please provide the next guess: ";
        std::cin >> guess;
        k++;
        if (guess > correct_num) {
            std::cout << "Your number is too big. Try again!" << std::endl;
        } else if (guess < correct_num) {
            std::cout << "Your number is too small. Try again!" << std::endl;
        } else {
            std::cout << "You have done it! " << "You guessed the number "
                << correct_num << " in " << k << " guesses!" << std::endl;
        }
    }

}