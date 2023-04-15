#include <iostream>

using namespace std;

// Given an array of sorted integers, returns the index
// of the search target. Returns -1 if no index found.
int binarySearch(int nums[], int len, int target) {
  int high = len - 1;
  int low = 0;

  // While the bounds are valid
  while (low <= high) {
    // Get the middle index
    int middle = (low + high) / 2;

    if (target == nums[middle]) {
      return middle;
    } else if (target >= nums[middle]) {
      low = middle + 1;
    } else {
      high = middle - 1;
    }
  }

  return -1;
}

int main() {
  int len = 5;
  int* nums = new int[len];  // dynamically created array
  nums[0] = 6;
  nums[1] = 109;
  nums[2] = 1820;
  nums[3] = 5123;
  nums[4] = 9999;

  int moreNums[] = {8, 124, 1028, 751928, 5190238};  // statically created array

  cout << binarySearch(nums, len, 5123) << endl;
  cout << binarySearch(moreNums, len, 124) << endl;

  delete[] nums;
  return 0;
}