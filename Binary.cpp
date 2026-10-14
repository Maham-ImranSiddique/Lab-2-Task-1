#include <iostream>
using namespace std;

 int binarySearch(int arr[], int n, int key) {
 int low = 0, high = n - 1;

 while (low <= high) {
 int mid = low+(high - low)/2;
 if (arr[mid] == key)
        return mid;
 else if (key < arr[mid])
 high = mid - 1;
 else
 low = mid + 1;
}
        return -1;
}
int main() {
  int roll[7] = {101, 105, 110, 120, 135, 150, 170};
  int key[2] = {135, 112};

for (int i = 0; i < 2; i++) {
   int pos = binarySearch(roll, 7, key[i]);
    if (pos == -1)
   cout << "Roll no: " << key[i] << " not found" << endl;
   else
   cout << "Roll no: " << key[i] << " found at index " << pos << endl;
}
return 0;
}
