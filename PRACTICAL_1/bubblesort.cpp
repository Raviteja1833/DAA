#include <iostream>
using namespace std;
void bubbleSort(int a[], int n) {
 for (int i = 0; i < n - 1; i++) {
 bool swapped = false;
 for (int j = 0; j < n - i - 1; j++) {
 if (a[j] > a[j + 1]) {
 swap(a[j], a[j + 1]);
 swapped = true;
 }
 }
 if (!swapped) break;
 }
}
int main() {
 int a[] = {64, 34, 25, 12, 22, 11, 90, 45, 78, 3};
 int n = sizeof(a) / sizeof(a[0]);
 cout << "Original array: ";
 for (int x : a) cout << x << " ";
 bubbleSort(a, n);
 cout << "\nSorted array: ";
 for (int x : a) cout << x << " ";
}