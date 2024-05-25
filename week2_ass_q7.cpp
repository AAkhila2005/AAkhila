#include <iostream>
#include <vector>
using namespace std;
void moveNegativesToOneSide(std::vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        if (arr[left] < 0) {
            left++;
        }
        else if (arr[right] >= 0) {
            right--;
        }
        else {
            std::swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
int main() {
    std::vector<int> arr = {1, -2, -3, 4, -5, 6, -7, 8, -9};
    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    moveNegativesToOneSide(arr);
    std::cout << "Array after moving negatives to one side: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}