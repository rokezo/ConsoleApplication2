#include <iostream>

template<typename T>
double average(const T arr[], int size) {
    if (size == 0)
        return 0.0;

    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    int intArr[] = { 1, 2, 3, 4, 5 };
    double doubleArr[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

    int intSize = sizeof(intArr) / sizeof(int);
    int doubleSize = sizeof(doubleArr) / sizeof(double);

    std::cout << "Average of intArr: " << average(intArr, intSize) << std::endl;
    std::cout << "Average of doubleArr: " << average(doubleArr, doubleSize) << std::endl;

    return 0;
}
