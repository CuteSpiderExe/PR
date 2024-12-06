#include <iostream>

using namespace std;

void hanoi_towers(int kol_vo_kol, int pol, int to, int prom)
//kol_vo_kol-����� �����, pol-��������� ��������� �����(1-3),to-�������� ��������� �����(1-3)
{//buf_peg - ������������� �������(1-3)
    if (kol_vo_kol != 0)
    {
        hanoi_towers(kol_vo_kol - 1, pol, prom, to);

        cout << pol << " -> " << to << endl;

        hanoi_towers(kol_vo_kol - 1, prom, to, pol);
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    int start_peg, destination_peg, prom_peg, plate_quantity;
    cout << "����� ������� ��������:" << endl;
    cin >> start_peg;
    cout << "����� ��������� ��������:" << endl;
    cin >> destination_peg;
    cout << "����� �������������� ��������:" << endl;
    cin >> prom_peg;
    cout << "���������� ������:" << endl;
    cin >> plate_quantity;

    hanoi_towers(plate_quantity, start_peg, destination_peg, prom_peg);
    return 0;
}