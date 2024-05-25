#include <iostream>
#include <vector>
#include <limits.h>  
int findSecondSmallest(const std::vector<int>& arr) {
    if (arr.size() < 2) {
        std::cerr << "Array must contain at least two elements." << std::endl;
        return INT_MIN; 
    }
    int firstSmallest = INT_MAX;
    int secondSmallest = INT_MAX;
    for (int num : arr) {
        if (num < firstSmallest) {
            secondSmallest = firstSmallest;
            firstSmallest = num;
        } else if (num < secondSmallest && num != firstSmallest) {
            secondSmallest = num;
        }
    }
  if (secondSmallest == INT_MAX) {
        std::cerr << "No second smallest element found (array may have duplicate smallest elements only)." << std::endl;
        return INT_MIN; 
    }
    return secondSmallest;
}
int main() {
    std::vector<int> arr = {12, 13, 1, 10, 34, 1};

    int secondSmallest = findSecondSmallest(arr);
    if (secondSmallest != INT_MIN) {
        std::cout << "The second smallest element is: " << secondSmallest << std::endl;
    }
    return 0;
}