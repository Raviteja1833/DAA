#include <iostream>
using namespace std;
int binarySearch(int a[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
 int mid = low + (high - low) / 2;
        if (a[mid] == key) return mid;
        if (a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int main() {
    int a[] = {5, 10, 15, 20, 25, 30, 35, 40};
    int n = sizeof(a) / sizeof(a[0]);
    cout << binarySearch(a, n, 30);
}        