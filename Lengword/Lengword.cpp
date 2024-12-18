#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

        string str;
        cout << "Введите строку (каждое слово отделяется пробелом): ";
        getline(cin, str);

        // Разбиваем строку на слова
        istringstream iss(str);
        vector<string> words;
        string word;
        while (iss >> word) {
            words.push_back(word);
        }

        // Инициализация переменных для поиска самого короткого слова
        string shortestWord = words[0]; // Предполагаем, что первое слово - самое короткое
        for (const string& word : words) {
            if (word.length() < shortestWord.length()) {
                shortestWord = word;
            }
        }

        // Вывод самого короткого слова
        cout << "Самое короткое слово: " << shortestWord << endl;

        return 0;    
}