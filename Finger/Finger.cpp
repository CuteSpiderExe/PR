#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    // ���������� ��� �������� ������ ������
    int fingerNumber;

    // ������ � ������������ ������ ������
    cout << "������� ���������� ����� ������ (�� 1 �� 5): ";
    cin >> fingerNumber;

    // �������� ������������ ���������� ������
    if (fingerNumber < 1 || fingerNumber > 5) {
        cout << "������������ ����� ������. ���������� ��� ���." << endl;
        return 1;
    }

    // ����� �������� ������
    switch (fingerNumber) {
    case 1:
        cout << "������� �����" << endl;
        break;
    case 2:
        cout << "������������ �����" << endl;
        break;
    case 3:
        cout << "������� �����" << endl;
        break;
    case 4:
        cout << "���������� �����" << endl;
        break;
    case 5:
        cout << "�������" << endl;
        break;
    default:
        cout << "������ � ���������." << endl;
        return 1;
    }

    return 0;
}