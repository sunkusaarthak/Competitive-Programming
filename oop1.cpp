#include <iostream>
using namespace std;

class Animal {
  public: 
  int age;
  string name;

  void eat() {
    cout << "Eating..." << "\n";
  }

  void sleep() {
    cout << "Sleeping..." << "\n";
  }
};

int main() {
  cout << "Size Of Animal Class: " << sizeof(Animal) << endl;
  Animal duppy;
  duppy.name = "Duppy";
  duppy.age = 1;
  cout << "Name: " << duppy.name << "\n";
  cout << "Age: " << duppy.age << "\n";
  duppy.eat();
  duppy.sleep();

  int* p = new int[10];
  delete p;
  return 0;
}
