#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Perform bubble sort
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                sorted = false;
            }
        }
    }

    // Print sorted array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
