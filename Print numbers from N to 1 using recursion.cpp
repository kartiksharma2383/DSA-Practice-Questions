#include<iostream>
using namespace std;

void printReverse(int n){
  if(n < 1)
  return;
  cout << n << " "; // Prints the current value of n followed by a space.
  printReverse(n - 1); // Calls itself recursively with n - 1, printing the next lower number.
}

int main(){
  int n = 5;
  printReverse(n);
  return 0;
}
