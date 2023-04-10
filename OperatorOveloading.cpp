#include <iostream>
using namespace std;

class A {
  public: 
  int sum;
  int sub;
  int mul;
  int div;

  ostream& operator << (ostream& output, A& a) {
    output << a.sum << "\n";
    output << a.sub << "\n";
    output << a.mul << "\n";
    output << a.div << "\n";
    return output;
  }
};

int main() {
  A a;
  cout << a;
  return 0;
}
