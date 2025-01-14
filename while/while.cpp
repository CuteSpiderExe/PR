#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

//С помощью цикла while разработать программу, которая будет 
// вычислять сумму чисел нацело делящихся на 5. Цикл задать от 0 до введенного с клавиатуры числа.

int main() {
    setlocale(LC_ALL, "rus");
    int last_number, number, total;

    cout << "Введите последнее число последовательности: ";
    cin >> last_number;

    number = 0;
    total = 0;

    while (number != last_number + 1) {
        if (!(number % 5)) {
            total += number;
        }
        number++;
    }

    cout << "Сумма чисел делящихся на 5 из последовательности [0, " << last_number << "] равна " << total << endl;

    return 0;
}