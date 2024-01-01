#include <iostream>
#include <windows.h>
using namespace std;
double tambah, kurang, kali, bagi;
short pilih;
char pilihan;

int kalkulator()
{
    cout << "---KALKULATOR by calon proplayer---" << endl;
    cout << "================" << endl;
    cout << "1. Penjumlahan  " << endl;
    cout << "2. Pengurangan  " << endl;
    cout << "3. Perkalian    " << endl;
    cout << "4. Pembagian    " << endl;
    cout << "Pilih : ";
    cin>>pilih;
    return 0;
}
float program()
{
    float angka1, angka2;
    switch(pilih)
    {
    case 1:
        cout << "Masukkan Angka Pertama : ";
        cin>>angka1;
        cout << "Masukkan Angka Kedua : ";
        cin>>angka2;
        tambah = angka1 + angka2;
        cout << "Hasil Penjumlahan Adalah : " << tambah;
        break;

    case 2:
        cout << "Masukkan Angka Pertama : ";
        cin>>angka1;
        cout << "Masukkan Angka Kedua : ";
        cin>>angka2;
        kurang = angka1 - angka2;
        cout << "Hasil Penjumlahan Adalah : " << kurang;
        break;

    case 3:
        cout << "Masukkan Angka Pertama : ";
        cin>>angka1;
        cout << "Masukkan Angka Kedua : ";
        cin>>angka2;
        kali = angka1 * angka2;
        cout << "Hasil Penjumlahan Adalah : " << kali;
        break;

    case 4:
        cout << "Masukkan Angka Pertama : ";
        cin>>angka1;
        cout << "Masukkan Angka Kedua : ";
        cin>>angka2;
        bagi = angka1 / angka2;
        cout << "Hasil Penjumlahan Adalah : " << bagi;
        break;

    default:
        cout << "Pilihan Tidak Tersedia!" << endl;
    }
}
int main()
{
    do
    {
    kalkulator();
    cout << endl;
    program();
    cout << endl << endl;
    cout << "Ulangi Program? (y/n) ";
    cin>>pilihan;
    system("cls");
    }
    while (pilihan == 'y' || pilihan == 'Y');
    if (pilihan != 'y' || pilihan != 'Y')
    {
        cout << "Terima Kasih..." << endl;
    }
    return 0;
}
