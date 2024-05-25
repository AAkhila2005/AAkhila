#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
std::string decimalToBinary(int num) {
    if (num == 0) return "0";
    std::string binary = "";
    while (num > 0) {
        binary += (num % 2 == 0 ? "0" : "1");
        num /= 2;
    }
    std::reverse(binary.begin(), binary.end());
    return binary;
}
int main() {
    int number;
    std::cout << "Enter a decimal number: ";
    std::cin >> number;
    std::string binary = decimalToBinary(number);
    std::cout << "Binary equivalent: " << binary << std::endl;
    return 0;
}