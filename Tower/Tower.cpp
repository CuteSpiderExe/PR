#include <iostream>

using namespace std;

void hanoi_towers(int kol_vo_kol, int pol, int to, int prom)
//kol_vo_kol-число колец, pol-начальное положение колец(1-3),to-конечное положение колец(1-3)
{//buf_peg - промежуточный колышек(1-3)
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
    cout << "Номер первого столбика:" << endl;
    cin >> start_peg;
    cout << "Номер конечного столбика:" << endl;
    cin >> destination_peg;
    cout << "Номер промежуточного столбика:" << endl;
    cin >> prom_peg;
    cout << "Количество дисков:" << endl;
    cin >> plate_quantity;

    hanoi_towers(plate_quantity, start_peg, destination_peg, prom_peg);
    return 0;
}