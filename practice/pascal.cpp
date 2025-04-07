#include <iostream>
#include <vector>

int main() {
    int numRows;

    std::cout << "Enter the number of rows for Pascal's Triangle: ";
    std::cin >> numRows;

    std::vector<std::vector<int>> triangle(numRows);

    for (int i = 0; i < numRows; ++i) {
        triangle[i].resize(i + 1);

        triangle[i][0] = 1;
        triangle[i][i] = 1;

        for (int j = 1; j < i; ++j) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    for (const auto& row : triangle) {
        for (int k = 0; k < numRows - row.size(); ++k) {
            std::cout << " ";
        }
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}