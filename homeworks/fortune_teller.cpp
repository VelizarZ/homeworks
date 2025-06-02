#include <iostream>
#include <map>
#include <vector>

const std::map<std::string, std::string> nouns = {{"spring", "STL guru"},

                                                            {"summer", "C++ expert"},
                                                        {"autumn", "coding beast"},
                                                                {"winter", "software design hero"} };
const std::vector<std::string> endings = {"eats UB for breakfast",
                                            "finds errors quicker than the compiler",
                                            "is not afraid of C++ error messages"};
int main() {
    std::vector<std::string> adjectives{};
    std::cout << "Welcome to the fortune teller program!" << std::endl;
    std::cout << "Please enter your name: " << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Please enter the time of year when you were born: "
       << "(pick from 'spring', 'summer', 'autumn', 'winter')" << std::endl;
    std::string month;
    std::cin >> month;
    std::cout << "Please enter an adjective: " << std::endl;
    std::string adjective;
    std::cin >> adjective;
    adjectives.push_back(adjective);
    std::cout << "Please enter another adjective: " << std::endl;
    std::string another_adjective;
    std::cin >> another_adjective;
    adjectives.push_back(another_adjective);
    std::cout << name << ", the " << adjectives.at(name.size() % adjectives.size()) << " "
    << nouns.at(month)<< " that " <<  endings.at(name.size() % endings.size()) << std::endl;
}