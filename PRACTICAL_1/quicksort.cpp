#include <iostream>
using namespace std;
int partitionArray(int a[], int low, int high) {
 int pivot = a[high];
 int i = low - 1;
 for (int j = low; j < high; j++) {
 if (a[j] <= pivot) {
 i++;
 swap(a[i], a[j]);
 }
 }
 swap(a[i + 1], a[high]);
 return i + 1;
}
void quickSort(int a[], int low, int high) {
 if (low < high) {
 int p = partitionArray(a, low, high);
 quickSort(a, low, p - 1);
 quickSort(a, p + 1, high);
 }
}
int main() {
 int a[] = {64, 34, 25, 12, 22, 11, 90, 45, 78, 3};
 int n = sizeof(a) / sizeof(a[0]);
 quickSort(a, 0, n - 1);
 for (int x : a) cout << x << " ";
}