#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
	string baris;
	string Namafile;

	cout << "Masukkan nama file : ";
	cin >> Namafile;

	// Membuka file dalam mode menulis.
	ofstream outfile;
	// Menunjuk ke sebuah nama file
	outfile.open(Namafile, ios::out);

	cout << ">= Menulis file, '\q' untuk keluar" << endl;

	//unlimited loop unutk menulis
	while (true) {
		cout << "-";
		//Mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q") break;
		// Menukis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	//selesai dalam menulis sekarang tutup filenya 
	outfile.close();

}


