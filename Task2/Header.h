#pragma once
#include <iostream>
#include <vector>


class ifSymetric {
public:
    void checkSymmetry() {
        int n;
        std::cin >> n;
        int arr;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                std::cin >> arr[i][j];
            }
        }

        bool isSymmetric = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] != arr[j][i]) {
                    isSymmetric = false;
                    break;
                }
            }
            if (!isSymmetric) {
                break;
            }
        }

        if (isSymmetric) {
            std::cout << "YES";
        }
        else {
            std::cout << "NO";
        }
    }
};
