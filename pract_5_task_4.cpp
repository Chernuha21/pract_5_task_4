#include <iostream>
#include <stack>
#include <cstdlib>
#include <ctime>

int main() {
    const int MAX_SIZE = 10;
    std::stack<int> numberStack;
    int evenCount = 0;
    int evenSum = 0;

    // ����������� ���������� ���������� �����
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    // ��������� 10 ���������� ����� � ������� �� 1 �� 20 �� ��������� �� �� �����
    std::cout << "Generation numbers: ";
    for (int i = 0; i < MAX_SIZE; ++i) {
        int randomNum = std::rand() % 20 + 1; // �������� ����� �� 1 �� 20
        numberStack.push(randomNum);
        std::cout << randomNum << " ";
    }
    std::cout << std::endl;

    // �������� ������ ����� � ������� �� 10 �� 20
    while (!numberStack.empty()) {
        int number = numberStack.top();
        numberStack.pop();

        if (number % 2 == 0 && number >= 10 && number <= 20) {
            evenCount++;
            evenSum += number;
        }
    }

    // ���������� ���������� �������� ������ �����
    double average = (evenCount > 0) ? static_cast<double>(evenSum) / evenCount : 0.0;

    // ���� ����������
    std::cout << "Average value of non add numbers between 10 and 20: " << average << std::endl;

    return 0;
}
