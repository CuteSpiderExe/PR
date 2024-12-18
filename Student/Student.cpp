#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    // Запрашиваем у пользователя данные
    string firstName, lastName, middleName, groupNumber;

    cout << "Введите ваше имя: ";
    cin >> firstName;

    cout << "Введите вашу фамилию: ";
    cin >> lastName;

    cout << "Введите ваше отчество (если есть): ";
    cin >> middleName;

    cout << "Введите номер вашей группы: ";
    cin >> groupNumber;

    // Определяем максимальную длину строки для рамки
    int maxLength = max({ firstName.length(), lastName.length(), middleName.length(), groupNumber.length() });

    // Формируем рамку
    for (int i = 1; i <= maxLength + 4; ++i) {
        cout << "=";
    }
    cout << endl;

    cout << "1   /************************************************" << endl;
    cout << "2  * Лабораторная работа № 1                        *" << endl;
    cout << "3  * Выполнил(а): ст. гр. " << groupNumber << "    *" << endl;
    cout << "4  * " << firstName << " " << middleName << " " << lastName << "                          *" << endl;
    cout << "5  ************************************************/" << endl;

    // Завершаем рамку
    for (int i = 1; i <= maxLength + 4; ++i) {
        cout << "=";
    }
    cout << endl;

    return 0;
}