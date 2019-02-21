//
// Created by Wenny on 2/20/2019.
//
#include "MyLib.h"

bool EXIT() {
    int Pilihan;
    bool A;
    cout << endl << "Apakah Anda ingin Keluar?" << endl;
    cout << "1. Ya\n2. Tidak\n(1/2)";
    cin >> Pilihan;
    if (Pilihan == 1)
    {
        A = false;
    }
    else if (Pilihan == 2)
    {
        A = true;
    }
    else
    {
        cout << "Tidak ada dalam pilihan" << endl << endl;
        system("pause");
    }
    return A;
}

