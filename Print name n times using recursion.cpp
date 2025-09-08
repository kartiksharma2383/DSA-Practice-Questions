#include <iostream>
using namespace std;

void printName(string name, int n){
  if(n <= 0) // if n is less than or equal to 0, the function returns immediately
  return ;
  cout << name << endl; // print value of name
  printName(name, n - 1); // calls printName recursively, passing the same name and decrementing n by 1.
}

int main(){
  string name = "Alice";
  int n = 5;
  printName(name, n);
  return 0;
}