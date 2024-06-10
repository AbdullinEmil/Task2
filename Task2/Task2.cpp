
#include <iostream>
#include "Header.h"

int main() {
    int n;
    std::cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> arr[i][j];
        }
    }

    ifSymetric i;
    if (i.ifSymetric(arr, n)) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}