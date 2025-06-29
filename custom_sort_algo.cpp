#include <iostream>
#include <sys/types.h>

#include <iostream>
#include <utility> // For std::swap
#include <vector>

template <typename T> T maxOfTwo(T a, T b) { return (a > b) ? a : b; }

// Custom sort function using Bubble Sort
template <typename RandomIt> void customSort(RandomIt first, RandomIt last) {
  bool swapped;
  do {
    swapped = false;
    auto current = first;
    auto next = first;
    ++next;

    while (next != last) {
      if (*next < *current) { // Use < for ascending order
        std::swap(*current, *next);
        swapped = true;
      }
      ++current;
      ++next;
    }
  } while (swapped);
}

// Example usage
int main() {
  std::vector<int> numbers = {64, 34, 25, 12, 22, 11, 90};

  std::cout << "Before sorting: ";
  for (int number : numbers) {
    std::cout << number << " ";
  }
  std::cout << std::endl;

  customSort(numbers.begin(), numbers.end());

  std::cout << "After sorting: ";
  for (int number : numbers) {
    std::cout << number << " ";
  }
  std::cout << std::endl;

  return 0;
}
