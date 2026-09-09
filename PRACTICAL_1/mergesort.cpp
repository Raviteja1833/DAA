#include <iostream>
#include <vector>
using namespace std;
void merge(int a[], int l, int m, int r) {
 vector<int> temp;
 int i = l, j = m + 1;
 while (i <= m && j <= r)
 temp.push_back(a[i] <= a[j] ? a[i++] : a[j++]);
 while (i <= m) temp.push_back(a[i++]);
 while (j <= r) temp.push_back(a[j++]);
 for (int k = 0; k < (int)temp.size(); k++)
 a[l + k] = temp[k];
}
void mergeSort(int a[], int l, int r) {
 if (l >= r) return;
 int m = l + (r - l) / 2;
 mergeSort(a, l, m);
 mergeSort(a, m + 1, r);
 merge(a, l, m, r);
}
int main() {
 int a[] = {64, 34, 25, 12, 22, 11, 90, 45, 78, 3};
 int n = sizeof(a) / sizeof(a[0]);
 mergeSort(a, 0, n - 1);
 for (int x : a) cout << x << " ";
}
