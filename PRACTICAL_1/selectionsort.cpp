#include <iostream>
using namespace std;
void selectionSort(int a[], int n) {
 for (int i = 0; i < n - 1; i++) {
 int minIndex = i;
 for (int j = i + 1; j < n; j++) {
 if (a[j] < a[minIndex]) minIndex = j;
 }
 swap(a[i], a[minIndex]);
 }
}
int main() {
 int a[] = {64, 34, 25, 12, 22, 11, 90, 45, 78, 3};
 int n = sizeof(a) / sizeof(a[0]);
 selectionSort(a, n);
 for (int x : a) cout << x << " ";
}