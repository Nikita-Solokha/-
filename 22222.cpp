#include <iostream>
#include <sstream>
#include <vector>

int main() {
    std::string input;
    std::vector<int> array;

    std::cout << "Введите элементы массива: ";
    std::getline(std::cin, input);

    std::istringstream iss(input);
    int num;
    while (iss >> num) {
        array.push_back(num);
    }

    int even_sum = 0;
    for (int num : array) {
        if (num % 2 == 0) {
            even_sum += num;
        }
    }

    std::cout << "Сумма четных элементов в массиве: " << even_sum << std::endl;

    return 0;
}
