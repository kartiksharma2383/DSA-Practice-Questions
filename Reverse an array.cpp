#include <iostream>
#include <vector>
using namespace std;
void reverseArray(vector<int> &arr){
	int n = arr.size();
	vector<int> temp(n); // Temporary array to store elements, in reverse order
	
	for(int i=0; i<n; i++)
	temp[i] = arr[n-i-1]; // Copy elements from original array to temp in reverse order
	
	for(int i=0; i<n; i++)
	arr[i] = temp[i]; // Copy elements back to original array
}
int main(){
	vector<int>arr = {1, 2, 3, 4, 5};
	reverseArray(arr);
	for(int i=0; i<arr.size(); i++)
	cout << arr[i] << " ";
	return 0;
} 
