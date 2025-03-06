#include <iostream>
//
// Created by adeli on 3/6/2025.
//


class Dog {

public:
  bool eat() {
    std::cout<<"Dog is eating";
    return true;
  }
  int setage(int newage) {
    age = newage;
    return age;
  }
  int getage() {
    return age;
  }
private:
  int age;
};


int main(){
  Dog dog1 = Dog();
  dog1.eat();
  // dog1.age = 50;
  dog1.setage(10);
  std::cout << dog1.getage();
  return 0;
}