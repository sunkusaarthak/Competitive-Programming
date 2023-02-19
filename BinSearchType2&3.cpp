#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int searchInNearlySorted(vector<int> arr, int target) {
  int l = 0, n = arr.size(), r = n-1;
  while(l <= r) {
      int mid = l + (r-l)/2;
      if(arr[mid] == target) {
        return(mid);
      }
      else if(mid-1 >= 0 and arr[mid-1] == target) {
        return(mid - 1);
      }
      else if(mid+1 < n and arr[mid+1] == target) {
        return(mid + 1);
      }

      if(target > arr[mid]) {
        l = mid + 2;
      }
      else {
        r = mid - 2;
      }
  }
  return(-1);
}

int divideUsingBS(int dividend, int divisor) {
  int l = 0, h = abs(dividend), ans = 0;
  while(l <= h) {
    int mid = l + (h-l)/2;
    if(abs(mid*divisor) == abs(divisor)) {
      ans = (mid);
      break;
    }
    if(abs(mid*divisor) <= abs(dividend)) {
      ans = mid;
      l = mid + 1;
    }
    else {
      h = mid -1;
    }
  }
  if(dividend < 0 and divisor > 0 or dividend > 0 and divisor < 0)  {
    ans = -ans;
  }  
  return(ans);
}

int findOddOccur(vector<int> arr) {
  int l = 0, h = arr.size()-1;
  while(l <= h) {
    int mid = l + (h-l)/2;
    if(l == h) {
      return(mid);
    }
    if(mid % 2 == 0) {
      if(arr[mid] == arr[mid+1]) {
        l = mid + 1;
      }
      else {
        l = mid;
      }
    }
    else {
      if(arr[mid] == arr[mid+1]) {
        h = mid - 1;
      }
      else {
        l = mid + 1;
      }
    }
  }
  return(-1);
}

int main() {
  vector<int> arr = {3, 4, 8, 10, 9, 40};
  vector<int> arr2 = {3, 3, 4, 4, 5, 5, 3, 9, 9, 3, 3, 12, 12};
  cout << "Index: " << searchInNearlySorted(arr, 9) << "\n";
  cout << "Value: " << divideUsingBS(65, 4) << "\n";
  cout << "Odd Occ: " << arr2[findOddOccur(arr2)] << "\n";
  return 0;
}
