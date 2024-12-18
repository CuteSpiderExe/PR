#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    // Переменная для хранения номера пальца
    int fingerNumber;

    // Запрос у пользователя номера пальца
    cout << "Введите порядковый номер пальца (от 1 до 5): ";
    cin >> fingerNumber;

    // Проверка корректности введенного номера
    if (fingerNumber < 1 || fingerNumber > 5) {
        cout << "Некорректный номер пальца. Попробуйте еще раз." << endl;
        return 1;
    }

    // Вывод названия пальца
    switch (fingerNumber) {
    case 1:
        cout << "Большой палец" << endl;
        break;
    case 2:
        cout << "Указательный палец" << endl;
        break;
    case 3:
        cout << "Средний палец" << endl;
        break;
    case 4:
        cout << "Безымянный палец" << endl;
        break;
    case 5:
        cout << "Мизинец" << endl;
        break;
    default:
        cout << "Ошибка в программе." << endl;
        return 1;
    }

    return 0;
}