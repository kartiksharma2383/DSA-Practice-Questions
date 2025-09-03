#include <iostream>
#include <vector>
using namespace std;
int largest(vector<int>& arr) {
    int max = arr[0];
    for (int i = 1; i < arr.size(); i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}
int main() {
    //vector<int> arr = {10, 324, 45, 90, 9808};
    cout << largest(arr);
    return 0;
} 
