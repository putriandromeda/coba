#include "MyLib.h"

using namespace std;

int main() {
    bool A = true;
    int* PT;
    int Edit, Pilihan, Hapus;
    Book Buku[10];

    PT = &Pilihan;

    while (A)
    {
        system("cls");
        cout << "=======================================" << endl;
        cout << "===============DATA BUKU===============" << endl;
        cout << "=======================================" << endl;
        cout << "1.TAMBAH BUKU" << endl;
        cout << "2.EDIT BUKU" << endl;
        cout << "3.HAPUS BUKU" << endl;
        cout << "4.DAFTAR BUKU" << endl;
        cout << "5.KELUAR" << endl;
        cout << "Masukan : ";
        cin >> Pilihan;
        cin.get();
        if (Pilihan == 1)
        {
            for (int P1 = 0; P1 < 10; P1++)
            {
                if (Buku[P1].NameBook == "-")
                {
                    cout << "\nTuliskan \nJudul Buku    : ";
                    getline(cin, Buku[P1].NameBook);

                    cout << "Tahun Terbit  : ";
                    cin >> Buku[P1].ReleaseDate;
                    cin.get();

                    cout << "Nama Pengarang: ";
                    getline(cin, Buku[P1].Author);

                    cout << "Harga         : Rp.";
                    cin >> Buku[P1].Price;

                    Buku[P1].CodeBook = P1 + 10;
                    break;
                }
            }
        }
        else if (Pilihan == 2)
        {
            cout << "\nEdit Buku :" << endl;
            cout << "No." << "Code Buku" << "Judul Buku\t" << "Tahun Terbit\t" << "Nama Pengarang\t" << "Harga" << endl;
            for (int P2 = 0; P2 < 10; P2++)
            {
                cout << P2 + 1 << ". " << "A" << Buku[P2].CodeBook << "\t" << Buku[P2].NameBook << "\t\t" << Buku[P2].ReleaseDate << "\t\t" << Buku[P2].Author << "\t\t" << Buku[P2].Price << endl;
            }
            cout << "Pilih Nomer Buku yang mau di edit : ";
            PT = &Edit;
            cin >> Edit;
            cin.get();
            if (Buku[Edit - 1].NameBook == "-")
            {
                cout << "Masih Kosong";
                cin.get();
            }
            else
            {
                cout << "\nTuliskan \nJudul Buku    : ";
                getline(cin, Buku[Edit - 1].NameBook);
                cout << "Tahun Terbit  : ";
                cin >> Buku[Edit - 1].ReleaseDate;
                cin.get();
                cout << "Nama Pengarang: ";
                getline(cin, Buku[Edit - 1].Author);
                cout << "Harga : Rp.";
                cin >> Buku[Edit - 1].Price;
            }


        }
        else if (Pilihan == 3)
        {
            cout << "No.\t" << "Code Buku\t" << "Judul Buku\t" << "Tahun Terbit\t" << "Nama Pengarang\t" << "Harga" << endl;
            for (int P2 = 0; P2 < 10; P2++)
            {
                cout << P2 + 1 << ". " << "A" << Buku[P2].CodeBook << "\t\t" << Buku[P2].NameBook << "\t\t" << Buku[P2].ReleaseDate << "\t\t" << Buku[P2].Author << "\t\t" << Buku[P2].Price << endl;
            }
            cout << "Pilih Nomer Buku yang mau di hapus : ";
            PT = &Hapus;
            cin >> Hapus;
            Buku[Hapus - 1].CodeBook = 00;
            Buku[Hapus - 1].NameBook = '-';
            Buku[Hapus - 1].ReleaseDate = 00;
            Buku[Hapus - 1].Author = '-';
            Buku[Hapus - 1].Price = 00;
        }
        else if (Pilihan == 4)
        {
            cout << "No. " << "Code Buku\t" << "Judul Buku\t" << "Tahun Terbit\t" << "Nama Pengarang\t" << "Harga" << endl;
            for (int P2 = 0; P2 < 10; P2++)
            {
                cout << P2 + 1 << ". " << "A" << Buku[P2].CodeBook << "\t\t" << Buku[P2].NameBook << "\t\t" << Buku[P2].ReleaseDate << "\t\t" << Buku[P2].Author << "\t\t" << Buku[P2].Price << endl;
            }
            cin.get();
        }
        else if (Pilihan == 5)
        {
            A = EXIT();
        }
        else
        {
            cout << "Tidak ada dalam pilihan" << endl << endl;
            system("pause");
        }
    }
    cin.get();

    return 0;
}