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

	//Membuka file dalam membaca
	ifstream infile;
	//menunjuk ke sebuah file
	infile.open(Namafile, ios::in);

	cout << endl << " >= Membuka dan membaca file " << endl;
	// Jika file ada maka
	if (infile.is_open())
	{
		//Melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			//dan tampilkan disini
			cout << baris << '\n';
		}
		//Tutup file tersebut setelah selesai
		infile.close();
	}
	//jika tidak ditemukan file maka akan menampilkan ini
	else cout << "Unable to oprn file";
	return 0;
}



