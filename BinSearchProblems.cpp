#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
        int h = nums.size() - 1;
        if(h == 0) {
            if(nums[0] == target) {
                return(0);
            }
            else {
                return(-1);
            }
        }
        int pos = findPos(nums);
        cout << pos << " ";
        if(pos == -1) {
            return(binSearch(nums, target, 0, h));
        }
        if(nums[0] <= target and target <= nums[pos]) {
            return(binSearch(nums, target, 0, pos));
        }
        else {
            return(binSearch(nums, target, pos+1, h));
        }
        //return(0);
    }

    int findPos(vector<int>& arr) {
        int l = 0, h = arr.size()-1, n = arr.size()-1;
        while(l<h) {
            int mid = l + (h-l)/2;
            if(mid+1 <= n and arr[mid] > arr[mid+1]) {
                return(mid);
            }
            if(mid-1 >= 0 and arr[mid] < arr[mid-1]) {
                return(mid-1);
            }
            if(arr[l] < arr[mid]) {
                l = mid;
            }
            else {
                h = mid - 1;
            }
        }
        return(-1);
    }

    int binSearch(vector<int>& nums, int target, int l, int h) {
        //cout << l << ", " << h << "\n";
        while(l <= h) {
            int mid = (l+h)/2;
            //cout << nums[mid] << ", " << target << "\n";
            if(nums[mid] == target) {
                return(mid);
            }
            if(target < nums[mid]) {
                h = mid-1;
            }
            else {
                l = mid+1;
            }
        }
        return(-1);
    }

    pair<int, int> binSearch2D(vector<vector<int>> arr, int target, int n, int m){
        int l = 0, h = n*m-1;
        while(l <= h) {
          int mid = l + (h-l)/2;
          int rowIndex = mid / m;
          int colIndex = mid % m;
          if(arr[rowIndex][colIndex] == target) {
            return({rowIndex, colIndex});
          }
          if(arr[rowIndex][colIndex] < target) {
            l = mid + 1;
          }
          else {
            h = mid - 1;
          }
        }
        return(-1);
    }

int main() {
  vector<int> arr = {3, 4, 5, 6, 7, 1, 2, 6, 9};
  cout << "Pivot Element: " << arr[findPos(arr)] << "\n";
  return 0;
}
