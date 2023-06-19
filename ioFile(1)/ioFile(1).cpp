#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	string baris;

	//Membuka file dalam mode menulis.
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">=Menulis file, \'q' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "-";
		//Mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q") break;
		//Menulis dan memasukkan nilai dari 'baris' ke dalam file
	}
}


