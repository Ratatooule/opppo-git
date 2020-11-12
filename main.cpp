#include <iostream>

double my_pow(double number, unsigned int degree) {
    double numb = number;
    for (int i = 0; i < degree - 1; ++i) {
        number *= numb;
    }
    return number;
}

int main() {

    double number = my_pow(5.15, 3);;

    std::cout << number;

    return 0;
}
