#include <iostream>
#include <vector>

using namespace std;

// Функция для проверки, является ли число простым
bool isPrime(int num, vector<bool>& prime) {
    if (num < 2) return false; // 0 и 1 не являются простыми числами
    if (num <= 3) return true; // 2 и 3 являются простыми числами
    if (num % 2 == 0 || num % 3 == 0) return false;
    int i = 5;
    while (i * i <= num) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
        i += 6;
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "rus");
    int N;
    cout << "Введите число N: ";
    cin >> N;

    // Инициализация вектора для хранения статуса простоты чисел
    vector<bool> prime(N + 1, true);
    prime[0] = false;
    prime[1] = false;

    // Проходим по всем числам от 2 до sqrt(N) и отмечаем составные числа
    for (int i = 2; i * i <= N; ++i) {
        if (prime[i]) {
            for (int j = i * i; j <= N; j += i) {
                prime[j] = false;
            }
        }
    }

    // Находим все простые числа
    cout << "Простые числа в интервале [0;" << N << "]:\n";
    for (int i = 2; i <= N; ++i) {
        if (prime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}