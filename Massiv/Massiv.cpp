#include <iostream>
#include <cmath>
#include <string>
//Есть(вводится с терминала) правильная рациональная дробь a / b(запись в виде простой дроби).
//– a и b – целые числа;
//– если дробь правильная, то a < b.
//    Нужно программно определить период периодической дроби и вывести её в формате с десятичной точкой, вида 0.12(34) (из курса школьной арифметики помним, что это 0.12343434… – бесконечная дробь).
//    Усложняем задачу тем, том, что система счисления записи бесконечной дроби может быть произвольной и выбирается случайно(при вводе данных).
//    Например, в 10 - тичной системе мы должны получить :
//1 / 12 = 0.08(3)
//11 / 13 = 0.8(461538)
//2 / 5 = 0.4
//А в 2 - ичной системе, соответственно :
//    17 / 47 = 0.(01011100100110001000001)

using namespace std;

// Функция для преобразования дроби в десятичное представление
string convertToDecimal(int numerator, int denominator, int base) {
    string decimalPart = "";
    int remainder = numerator;

    while (remainder != 0) {
        int quotient = remainder / denominator;
        remainder = remainder % denominator;
        int digit = quotient % base;
        decimalPart = to_string(digit) + decimalPart;

        remainder = remainder * base; // Умножаем на основание системы счисления
    }

    return decimalPart;
}

// Функция для поиска периода периодической дроби
string findPeriod(string decimalPart) {
    int startIndex = decimalPart.find('(');
    if (startIndex == -1) {
        return decimalPart; // Если нет периодической части, возвращаем всю десятичную часть
    }

    int periodStart = decimalPart.find(')', startIndex + 1);
    string period = decimalPart.substr(startIndex + 1, periodStart - startIndex - 1);
    return decimalPart.substr(0, startIndex) + "(" + period + ")";
}

int main() {
    setlocale(LC_ALL, "rus");
    int numerator, denominator, base;

    cout << "Введите числитель и знаменатель через пробел: ";
    cin >> numerator >> denominator;

    cout << "Введите систему счисления (от 2 до 16): ";
    cin >> base;

    if (numerator >= denominator || numerator < 0) {
        cout << "Неправильная дробь." << endl;
        return 1;
    }

    if (base < 2 || base > 16) {
        cout << "Некорректная система счисления." << endl;
        return 1;
    }

    string decimalPart = convertToDecimal(numerator, denominator, base);
    string period = findPeriod(decimalPart);

    cout << "Десятичная часть дроби в " << base << "-ичной системе: " << decimalPart << endl;
    cout << "Период периодической дроби: " << period << endl;

    return 0;
}