#include <iostream>

template<typename T>
void countElements(const T arr[], int size, int& positive, int& negative, int& zero) {
    positive = 0;
    negative = 0;
    zero = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }
}

int main() {
    int intArr[] = { 1, -2, 3, 0, -4, 5 };
    double doubleArr[] = { -1.1, 2.2, 0, 3.3, -4.4, 0 };

    int intPositive, intNegative, intZero;
    int doublePositive, doubleNegative, doubleZero;

    int intSize = sizeof(intArr) / sizeof(int);
    int doubleSize = sizeof(doubleArr) / sizeof(double);

    countElements(intArr, intSize, intPositive, intNegative, intZero);
    countElements(doubleArr, doubleSize, doublePositive, doubleNegative, doubleZero);

    std::cout << "For intArr: " << std::endl;
    std::cout << "Positive elements: " << intPositive << std::endl;
    std::cout << "Negative elements: " << intNegative << std::endl;
    std::cout << "Zero elements: " << intZero << std::endl;

    std::cout << "For doubleArr: " << std::endl;
    std::cout << "Positive elements: " << doublePositive << std::endl;
    std::cout << "Negative elements: " << doubleNegative << std::endl;
    std::cout << "Zero elements: " << doubleZero << std::endl;

    return 0;
}
