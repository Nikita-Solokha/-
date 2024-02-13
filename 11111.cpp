#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr;
    int num;

    std::cout << "Введите числа массива: ";
    while (std::cin >> num) {
        arr.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }

    std::vector<int> even_numbers;
    for (int num : arr) {
        if (num % 2 == 0) {
            even_numbers.push_back(num);
        }
    }

    std::cout << "Четные числа в массиве: ";
    for (int num : even_numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Количество четных чисел: " << even_numbers.size() << std::endl;

    return 0;
}

//в теории для лабы очень важные страницы : 6, 18