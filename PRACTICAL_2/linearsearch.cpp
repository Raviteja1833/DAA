#include <iostream>
using namespace std;
int linearSearch(int a[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (a[i] == key) return i;
    return -1;
}
int main() {
    int a[] = {10, 25, 7, 40, 15, 30};
    int n = sizeof(a) / sizeof(a[0]);
    int key = 40;
    cout << linearSearch(a, n, key);
}