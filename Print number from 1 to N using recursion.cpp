#include<iostream>
using namespace std;

void printForward(int n){
  if(n < 1)
  return;  //If n is less than 1, the function returns immediately and does nothing. This stops the recursion when it reaches n = 0.
  printForward(n - 1);  // Calls itself recursively with n - 1, with decreasing values of n until it reaches the base case.
  cout << n << " "; // Prints the current value of n followed by a space.
}

int main(){
  int n = 5;
  printForward(n);
  return 0;
}