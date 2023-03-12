#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int key, int l, int h) {

  int mid = l + (h-l)/2;
  
  if(arr[mid] == key) {
    return(mid);
  }

  if(arr[mid] < key) {
    return(binarySearch(arr, key, mid+1, h));
  }

  if(arr[mid] > key) {
    return(binarySearch(arr, key, l, mid-1));
  }
}

int main() {
  vector<int> arr = {10, 20, 30, 40, 50, 60};
  cout << arr[binarySearch(arr, 10, 0, 5)];
  return 0;
}
