#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getFirstPos(vector<int> arr, int val) {
  int s = 0, l = arr.size();
  int pos = -1;
  while(s<=l) {
    int mid = s + (l-s)/2;
    if(arr[mid] == val) {
      pos = mid;
      l = mid - 1;
    }
    else if(arr[mid] < val) {
      s = mid + 1;
    }
    else if(arr[mid > val]) {
      l = mid - 1;
    }
  }
  return(pos);
}

  int findPeakElement(vector<int>& arr) {
        int l = 0, h = arr.size()-1;
        int mid;
        while(l < h) {
            mid = l + (h-l)/2;
            if(arr[mid] < arr[mid+1]) {
                l = mid + 1;
            }
            else {
                h = mid;
            }
        }
        return(l);
  }

int main() {
  vector<int> arr = {1, 2, 4, 4, 4, 9, 10};
  cout << "First Position: " << getFirstPos(arr, 4) << "\n";
  return 0;
}
