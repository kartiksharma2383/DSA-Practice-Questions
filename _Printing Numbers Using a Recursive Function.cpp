#include <iostream>
using namespace std;
int cnt = 0;  
void print(){      // Recursive function
    if (cnt == 3)
        return;     // if cnt reaches 3, stop recursion
    cout << cnt << endl;   // print the current value of cnt
    cnt++;              
    print();               // recursive call (function calls itself)
}
int main() {
    print();  
    return 0;
}
