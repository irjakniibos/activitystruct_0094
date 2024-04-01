#include <iostream>
using namespace std;

struct DetailAlamat
{
    string desa;
    string kota;
};

struct Mahasiswa
{
    string nim;
    string nama;
    DetailAlamat alamat;
    string umur;
};

int main()
{
    Mahasiswa mhs[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Data ke- " << (i + 1) << ":" << endl;
        cout << "Nomor Mahasiswa : ";
        getline(cin, mhs[i].nim);
        cout << "Nama Mahasiswa : ";
        getline(cin, mhs[i].nama);

        cout << "Alamat Mahasiswa : " << endl;
        cout << "\tNama Desa : ";
        cin >> mhs[i].alamat.desa;
        cout << "\tNama Kota : ";
        cin >> mhs[i].alamat.kota;

        cout << "Umur Mahasiswa : ";
        cin >> mhs[i].umur;
        cin.ignore(1,'\n');
    }

    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        cout << "Data Mahasiswa ke-" << (i + 1) << ":" << endl;
        cout << "\nNIM : " << mhs[i].nim;
        cout << "\nNama : " << mhs[i].nama;
        cout << "\nAlamat : ";
        cout << "\n\tDesa : " << mhs[i].alamat.desa;
        cout << "\n\tKota : " << mhs[i].alamat.kota;
        cout << "\nUmur : " << mhs[i].umur;
        cout << endl;
    }
}