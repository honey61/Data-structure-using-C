
#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  // Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = high - low / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(array) / sizeof(array[0]);    //sizeof()  always return the values in bit so if we conceder array have 8 int values it will give output 32 
  int x = 8;
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Element not found");
  else
    printf("Element is found at index %d and position %d", result, result+1);
  return 0;
}




