#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr, int i) {
  if(i == arr.size()) {
    return;
  }
  cout << arr[i] << " ";
  printArray(arr, i+1);
}

void printArrayByPointer(int arr[], int n) {
  if(n == 0) {
    return;
  }
  cout << arr[0] << " ";
  printArrayByPointer(arr+1, --n);
}

int printMax(int arr[], int i, int max, int n) {
  if(i>=n) {
    return(max);
  }
  if(arr[i] > max) {
    max = arr[i];
  }
  return(printMax(arr, i+1, max, n));
}

int main() {
  vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int ar[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  cout << "Printing Array: \n";
  printArray(arr, 0);
  cout << "\nSecond Array: \n";
  printArrayByPointer(ar, 10);
  cout << "\nMaximum Element: " << printMax(ar, 0, INT_MIN, 10);
  return 0;
}
