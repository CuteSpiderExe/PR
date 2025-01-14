#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Написать программу проверки умения складывать и вычитать числа в пределах 100. Профамма должна вывести 10 примеров, причем в каждом примере уменьшаемое должно быть
//больше или равно вычитаемому, т.е.не допускается предлагать
//испытуемому примеры с отрицательным результатом.Оценка выставляется по следующему правилу : за 10 правильных ответов —
//"отлично", за 9 и 8 — "хорошо", за 7 и 6 — "удовлетворительно",
//за 6 и менее — "плохо".Ниже приведен рекомендуемый вид экрана во время работы профаммы.Ответы пользователя выделены полужирным шрифтом.

int main() {
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    int correctAnswers = 0;
    const int numberOfExamples = 10;
    int a, b;

    // Генерация и вывод примеров
    for (int i = 0; i < numberOfExamples; ++i) {
        a = rand() % 100;
        b = rand() % (a + 1); // Вычитаемое всегда меньше или равно уменьшаемому
        cout << a << " - " << b << " = ";
        int userAnswer;
        cin >> userAnswer;

        // Проверка правильности ответа
        if (userAnswer == a - b) {
            correctAnswers++;
        }

        // Вывод результата пользователю
        if (userAnswer == a - b) {
            cout << "Верно!\n";
        }
        else {
            cout << "Вы ошиблись! Правильный ответ: " << a - b << "\n";
        }
    }

    // Подсчет оценки
    if (correctAnswers == numberOfExamples) {
        cout << "Правильных ответов: " << correctAnswers << "\nОценка: Отлично\n";
    }
    else if (correctAnswers >= 9) {
        cout << "Правильных ответов: " << correctAnswers << "\nОценка: Хорошо\n";
    }
    else if (correctAnswers >= 7) {
        cout << "Правильных ответов: " << correctAnswers << "\nОценка: Удовлетворительно\n";
    }
    else {
        cout << "Правильных ответов: " << correctAnswers << "\nОценка: Плохо\n";
    }

    return 0;
}