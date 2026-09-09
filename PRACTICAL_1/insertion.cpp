#include <iostream>
using namespace std;
void insertionSort(int a[], int n) {
 for (int i = 1; i < n; i++) {
 int key = a[i];
 int j = i - 1;
 while (j >= 0 && a[j] > key) {
 a[j + 1] = a[j];
 j--;
 }
 a[j + 1] = key;
 }
}
int main() {
 int a[] = {64, 34, 25, 12, 22, 11, 90, 45, 78, 3};
 int n = sizeof(a) / sizeof(a[0]);
 insertionSort(a, n);
 for (int x : a) cout << x << " ";
}
