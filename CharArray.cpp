#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getLen(char arr[]) {
  int i = 0, len = 0;
  while(arr[i] != '\0') {
    len++;
    i++;
  }
  return(len);
}

void reverse(char arr[]) {
  int l=0, h=getLen(arr) - 1;
  while(l < h) {
    swap(arr[l], arr[h]);
    l++;
    h--;
  } 

  cout << arr << "\n";
}

void checkPlaindrome(char arr[]) {
  int l=0, h=getLen(arr) - 1;
  while(l <= h) {
    //cout << arr[l] << " " << arr[h] << "\n";
    if(arr[l] != arr[h]) {
      cout << "Palindrome: False" << "\n";
      return;
    }
    else {
      l++;
      h--;
    }
  } 
  cout << "Palindrome: True" << "\n";
}

int main() {
  char arr[100];
  cin.getline(arr, 50);
  cout << arr << "\n";
  cout << getLen(arr) << "\n";
  reverse(arr);
  checkPlaindrome(arr);
  char c = 'b' - ('a' - 'A');
  cout << c << "\n";
  char na[50] = {'s', 'a' ,'\0', 'r', 't', 'h', 'a', 'k', '\0'};
  for(int i=0;i<9;i++) {
    cout << na[i];
  }
  cout << "\n";
  string s;
  s[0] = 's';
  s[1] = 'a';
  s[2] = '\0';
  s[3] = 'r';
  for(int i=0;i<4;i++) {
    cout << s[i];
  }
  cout << "\n";
  return 0;
}
