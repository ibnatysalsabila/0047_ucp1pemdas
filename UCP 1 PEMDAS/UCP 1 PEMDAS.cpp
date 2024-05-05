// 1.	Contoh deklarasi variable. Berikan minimal 3 variable dengan tipe data yang berbeda.
// jawab :
// String = "Ibnaty";
// - Int = "18";
// - Float = "155cm";

// 2. Berikan contoh implementasi dari prosedur dan fungsi.
// jawab :
// fungsi
//int nTelor, nMie, nAir;
//int hTelor = 2000, hMie = 2800, hAir = 3000;
//string nama;
//void input()
//{
// prosedur
//cout << "Masukan Nama = ";
//cin >> nama;
//cout << "Masukan Jumlah Telor = ";
//cin >> nTelor;
//cout << "Masukan Jumlah Mie = ";
//cin >> nMie;
//cout << "Masukan Jumlah Air Mineral = ";
//cin >> nAir;
//}


// 3. Berikan contoh implementasi dari looping
// jawab :
//int main() {
// int i;
// string nama[5];
// for (i = 150; i > 100; i -= 10) {
// cout << i << ". " << "SELAMAT PUASA" << endl;}
//cout << "Nilai i terakhir: " << i << endl;
//for (i = 0; i < 5; i++) {
//cout << "Masukan nama ke-" << i << ":";
//cin >> nama[i];}
//for (i = 0; i < 5; i++) {
//cout << "Nama ke-" << i << ": " << nama[i] << endl;}
//}

// 4. Berikan contoh minimal satu implementasi dari conditional statement
// jawab :
// int main(){
//int bilangan;
//srand(time(0));
//bilangan = rand() % 10;
// cout << "Nilai Awal : " << bilangan << endl;
// if (bilangan >= 5) {
// bilangan = 2 * bilangan;}
// cout << "Nilai Akhir : " << bilangan;
//}

// 5. Berikan contoh implementasi dari struct
// jawab :
//struct Mahasiswa {
//string nim;
//string nama;
//};

//int main() {
//Mahasiswa mhs;
//cout << "Nomor Mahasiswa : ";
//cin >> mhs.nim;
//cout << "Nama Mahasiswa : ";
//cin >> mhs.nama;
//cout << endl;
//cout << "\n Nim : " << mhs.nim;
//cout << "\n Nama : " << mhs.nama;
//}

#include <iostream>
using namespace std;

int main()
{
	int i;
	string nKota;
	string Tanggerang;
	string Bekasi;
	string status;
	float rerata;

	cout << "Nama Kota : " << endl;
	cin >> nKota;
	cout << "Tanggerang : " << endl;
	cin >> Tanggerang;
	cout << "Bekasi : " << endl;
	cin >> Bekasi;


	for (i = 45; i > 75;) {
		cout << i << ". " << "Tanggerang Tidak Sehat" << endl;
	}
	
	if (rerata >= 75 || 45) {
		status = "Tidak Sehat";
	}
	else {

		status = "Sehat";
	}

		cout << "Nama Kota" << nKota;
		cout << "Tanggerang" << Tanggerang;
		cout << "Bekasi" << Bekasi;
}















