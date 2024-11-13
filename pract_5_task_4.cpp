#include <iostream>
#include <stack>
#include <cstdlib>
#include <ctime>

int main() {
    const int MAX_SIZE = 10;
    std::stack<int> numberStack;
    int evenCount = 0;
    int evenSum = 0;

    // Ініціалізація генератора випадкових чисел
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    // Генерація 10 випадкових чисел у діапазоні від 1 до 20 та додавання їх до стека
    std::cout << "Generation numbers: ";
    for (int i = 0; i < MAX_SIZE; ++i) {
        int randomNum = std::rand() % 20 + 1; // Генеруємо число від 1 до 20
        numberStack.push(randomNum);
        std::cout << randomNum << " ";
    }
    std::cout << std::endl;

    // Перевірка парних чисел у діапазоні від 10 до 20
    while (!numberStack.empty()) {
        int number = numberStack.top();
        numberStack.pop();

        if (number % 2 == 0 && number >= 10 && number <= 20) {
            evenCount++;
            evenSum += number;
        }
    }

    // Обчислення середнього значення парних чисел
    double average = (evenCount > 0) ? static_cast<double>(evenSum) / evenCount : 0.0;

    // Вивід результату
    std::cout << "Average value of non add numbers between 10 and 20: " << average << std::endl;

    return 0;
}
