#include <iostream>
#include <cmath> 

double calculateY(double x) {
    if (x <= 5) {
        return -1; // если x <= 5
    }
    else if (x <= 8) {
        return x * x; // если 5 < x <= 8
    }
    else {
        return sin(x); // если x > 8
    }
}

int main() {
    double start = 0.0; // начало интервала
    double end = 10.0;  // конец интервала
    double step = 0.1;  // шаг

    std::cout << "x\t\ty" << std::endl; // заголовок таблицы

    // Цикл для вычисления значений функции
    for (double x = start; x <= end; x += step) {
        double y = calculateY(x);
        std::cout << x << "\t\t" << y << std::endl;
    }

    return 0;
}
