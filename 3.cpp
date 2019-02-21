#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

char get[1];
int a=0,i;
const string laki = "L";
const string perempuan = "P";

struct KTP
{
    char nik[50];
    char nama[50];
    char tempat [50];
    char tanggal [50];
    char bulan [50];
    int tahun;
    char kelamin [50];
    char alamat [50];
    char agama [50];
    char pekerjaan [50];
};
KTP data[10];

void Input ()
{
    cout << "Masukan Banyak Inputan Data : "; cin >> a;
    for (i=0;i<a;i++)
    {
        cin.getline (get,1);
        cout << "NIK\t\t: "; cin.getline(data[i].nik,50);

        cout << "Nama\t\t: "; cin.getline(data[i].nama,50);

        cout << "Tempat Lahir\t\t: "; cin.getline(data[i].tempat,50);

        cout << "Tanggal\t\t: "; cin.getline(data[i].tanggal,50);

        cout << "Bulan\t\t: "; cin.getline(data[i].bulan,50);

        cout << "Tahun\t\t: "; cin >> data[i].tahun;

        cin.getline (get,1);

        cout << "Jenis Kelamin(L/P)\t\t: "; cin.getline (data[i].kelamin,50);

        cout << "Alamat\t\t: "; cin.getline (data[i].alamat,50);

        cout << "Agama\t\t: "; cin.getline (data[i].agama,50);

        cout << "Pekerjaan\t\t :"; cin.getline (data[i].pekerjaan,50);
    }
    system("cls");
}

void Find ()
{
    int thn,c,d=0;
    cout << "Masukan Tahun Kelahiran";
    cin >> thn;
    for (c=0;c<a;c++)
    {
        if (data[c].tahun==thn)
        {
            cout << "NIK\t\t: "<<data[c].nik<<endl;
            cout << "Nama\t\t: "<<data[c].nama<<endl;
            cout << "TTL\t\t: "<<data[c].tempat<<", "<<data[c].tanggal<<"-"<<data[c].bulan<<"-"<<data[c].tahun<<endl;
            cout << "Jenis Kelamin\t\t: "<<data[c].kelamin<<endl;
            cout << "Alamat\t\t: "<<data[c].alamat<<endl;
            cout << "Agama\t\t: "<<data[c].agama<<endl;
            cout << "Pekerjaan\t\t: "<<data[c].pekerjaan<<endl;
            d++;
        }

        else if (c+1==a && d==0)
        {
            cout << "DATA TIDAK DITEMUKAN!";
        }
    }
    getch(); system("cls");

}

void Show ()
{
    int x,e,f=0;

    cout << "Tampilkan Data KTP Berdasarkan Jenis Kelamin"<<endl;
    cout << "1. Perempuan"<<endl;
    cout << "2. Laki-Laki"<<endl;
    cout << "Masukan Pilihan : ";
    cin >> x;

    if (x==1)
    {
        for (e=0;e<a;e++)
        {
            if (data[e].kelamin == perempuan)
            {
                cout << "NIK\t\t: "<<data[e].nik<<endl;
                cout << "Nama\t\t: "<<data[e].nama<<endl;
                cout << "TTL\t\t: "<<data[e].tempat<<", "<<data[e].tanggal<<"-"<<data[e].bulan<<"-"<<data[e].tahun<<endl;
                cout << "Jenis Kelamin\t\t: "<<data[e].kelamin<<endl;
                cout << "Alamat\t\t: "<<data[e].alamat<<endl;
                cout << "Agama\t\t: "<<data[e].agama<<endl;
                cout << "Pekerjaan\t\t: "<<data[e].pekerjaan<<endl;
                f++;
            }
        }
    }


    if (x==2)
    {
        for (e=0;e<a;e++)
        {

            if (data[e].kelamin == laki)
            {
                cout << "NIK\t\t: "<<data[e].nik<<endl;
                cout << "Nama\t\t: "<<data[e].nama<<endl;
                cout << "TTL\t\t: "<<data[e].tempat<<", "<<data[e].tanggal<<"-"<<data[e].bulan<<"-"<<data[e].tahun<<endl;
                cout << "Jenis Kelamin\t\t: "<<data[e].kelamin<<endl;
                cout << "Alamat\t\t: "<<data[e].alamat<<endl;
                cout << "Agama\t\t: "<<data[e].agama<<endl;
                cout << "Pekerjaan\t\t: "<<data[e].pekerjaan<<endl;
                f++;
            }
        }
    }

    if (f==0)
        {
            cout << "DATA TIDAK DITEMUKAN!!";
        }
        getch(); system("cls");


}

void Edit ()
{
    int j;
    cout << "Edit Data KTP ke-"; cin >> j;
    j=j-1;
    cin.getline (get,1);
    cout << "NIK\t\t: "; cin.getline(data[j].nik,50);

    cout << "Nama\t\t: "; cin.getline(data[j].nama,50);

    cout << "Tempat Lahir\t\t: "; cin.getline(data[j].tempat,50);

    cout << "Tanggal\t\t: "; cin.getline(data[j].tanggal,50);

    cout << "Bulan\t\t: "; cin.getline (data[j].bulan,50);

    cout << "Tahun\t\t: "; cin >> data[j].tahun;
    cin.getline (get,1);

    cout << "Jenis Kelamin\t\t: "; cin.getline (data[j].kelamin,50);

    cout << "Alamat\t\t: "; cin.getline (data[j].alamat,50);

    cout << "Agama\t\t: "; cin.getline (data[j].agama,50);

    cout << "Pekerjaan\t\t :"; cin.getline (data[j].pekerjaan,50);

    Show(); getch(); system("cls");

}

int main()
{
    int *b = new int;
    while (*b!=99)
    {
        cout << "1. Masukan Data"<<endl;
        cout << "2. Cari Data "<<endl;
        cout << "3. Tampilkan Data "<<endl;
        cout << "4. Edit Data"<<endl;
        cout << "99. Keluar"<<endl;
        cout << "Masukan Pilihan : "; cin >> *b;

        if (*b==1)
        {
            Input();
        }

        else if (*b==2)
        {
            Find();
        }

        else if (*b==3)
        {
            Show();
        }
        else if (*b==4)
        {
            Edit();
        }
        else if (*b==99)
        {
            return 0;
        }
        else
        {
            cout << "PILIHAN ANDA TIDAK DITEMUKAN!!";
        }
    }

}
