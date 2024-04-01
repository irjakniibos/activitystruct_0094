#include <iostream>
using namespace std;

struct DetailAlamat{
    string desa;
    string kota;

};

struct Mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    string umur;
};

int main(){
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa : " ;
    getline(cin,mhs.nim);
    cout << "Nama Mahasiswa : " ;
    getline(cin,mhs.nama);

    cout << "Alamat Mahasiswa : " <<endl;
    cout << "\tNama Desa : " ;
    cin >> mhs.alamat.desa;
    cout << "\tNama Kota : ";
    cin >> mhs.alamat.kota;

    cout << "Umur Mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\nNIM : " << mhs.nim;
    cout << "\nNama : " << mhs.nama;
    cout << "\nAlamat : ";
    cout << "\n\tDesa : " << mhs.alamat.desa;
    cout << "\n\tKota : " << mhs.alamat.kota;
    cout << "\nUmur : " << mhs.umur;


}