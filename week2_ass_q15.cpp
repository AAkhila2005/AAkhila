#include <iostream>
#include <string>
using namespace std;
std::string removeNonAlphabets(const std::string& input) {
    std::string result;
    for (char c : input) {
        if (isalpha(c)) {
            result += c;
        }
    }
    return result;
}
int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::string filteredStr = removeNonAlphabets(str);
    std::cout << "String after removing non-alphabet characters: " << filteredStr << std::endl;
    return 0;
}