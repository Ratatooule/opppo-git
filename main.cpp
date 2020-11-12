#include <iostream>
#include "feature.cpp"

double my_pow(double number, unsigned int degree) {
    double numb = number;
    for (int i = 0; i < degree - 1; ++i) {
        number *= numb;
    }
    return number;
}

double fast_pow(double num, int deg) {
    double result = 1;
    if(deg < 0) {
        deg = -deg;

        while(deg) {
            if (deg % 2 == 0) {
                deg /= 2;
                num *= num;
            }
            else {
                deg--;
                result *= num;
            }
        }

        return 1 / result;
    }
    else {
        while(deg) {
            if (deg % 2 == 0) {
                deg /= 2;
                num *= num;
            }
            else {
                deg--;
                result *= num;
            }
        }

        return result;
    }
}

int main() {

    double number = my_pow(5.15, 3);

    std::cout << number << std::endl;

    number = fast_pow(5.15, -3);

    std::cout << number << std::endl;

    return 0;
}
