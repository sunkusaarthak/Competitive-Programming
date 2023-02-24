#include <bits/stdc++.h>
using namespace std;

void printvector(vector<int> arr) {
  int n = arr.size();
  for(int i=0;i<n;i++) {
    cout << arr[i] << " ";
  }
}

void selectionSort(vector<int> arr) {
  int n = arr.size();
  int i, j;
  for(i=0;i<n;i++) {
    int minP = -1, min = INT_MAX;
    for(j=i;j<n;j++) {
      if(arr[j] < min) {
        min = arr[j];
        minP = j;
      }
    }
    swap(arr[i], arr[minP]);
  }
  printvector(arr);
}

void bubblesort(vector<int> arr) {
  int i, j, n = arr.size();
  for(i=0;i<n;i++) {
    bool swapped = false;
    for(j=0;j<n-i-1;j++) {
      if(arr[j] > arr[j+1]) {
        swapped = true;
        swap(arr[j], arr[j+1]);
      }
    }
    if(!swapped) {
      break;
    }
  }
  printvector(arr);
}

void insertionsort(vector<int> arr) {
  int i, j, n = arr.size();
  for(i=1;i<n;i++) {
    int temp = arr[i];
    for(j=i-1;j>=0;j--) {
      if(arr[j] > temp) {
        arr[j+1] = arr[j]; 
      }
      else {
        break;
      }
    }
    arr[j+1] = temp;
  }
  printvector(arr);
}
int main() {
  vector<int> arr = {10, 40, 20, 30, 400};
  selectionSort(arr);cout << "\n";
  arr = {10, 40, 20, 30, 400};
  bubblesort(arr);cout << "\n";
  arr = {10, 40, 20, 30, 400};
  insertionsort(arr);cout << "\n";
  return 0;
}
