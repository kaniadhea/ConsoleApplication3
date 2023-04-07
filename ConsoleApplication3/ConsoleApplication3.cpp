//jelaskan mengapa suatu algorithma dibutuhkan untuk menyelesaikan suatu masalah? Karena kunci utama kodingan
//dalam algorithma di klasifikasikan menjadi 2 data struktur.sebutkan 2 data struktur tersebut? Struktur Data Linier dan Struktur Data Non-Linier
//untuk mengukur sebuah efisiensi waktu suatu algorithma dibutuhkan beberapa faktor,sebutkan faktor-faktor yang memepengaruhi efisiensi waktu eksekusi suatu program? Dengan cara menambahkan int arr untuk mendeteksi ketika sedang mengoding
//dari 6 algorithma yang sudah dipelajari.algorithma manakah yang paling mudah dipahami dan diimplementasikan untuk mengurutkan data yang ukurannya besar.jelaskan kenapa anda memilih itu? Insertion sort.karena dari codingan tersebut jadi saya mengerti gimaan caranya memassukan data menggunakan cout dan cin kadang saya keliru juga dan bisa dipahami
//sebutkan dari algorithma yang telah dipelajari mana yang termasuk kedalam quadratic dan mana yang termasuk kedalam logiliner? Quick sort dan Bubble Sort
//buatlah sebuah program yang mengimplementasikan merge sort menggunakan bahasan c++.berikut merupakan algorithma merge sort?

#include <iostream>
using namespace std;

int dhea[20];											// Membuat Array dengan panjang data 20
int n;													// Membuat Variable Inputan n

void input() {					// Procedure Input
	while (true)
	{
		cout << "Masukkan Jumlah Data Pada array : ";	// Membuat Inputan jumlah element Array
		cin >> n;										// memanggil variable inputan n 

		if (n <= 5) {										// Membuat kondisi n tidak lebih dari 5
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 5 elemen,\n";	// Menampilkan Pesan jika data lebih dari 5
		}
	}
	cout << endl;									// Membuat jarak per baris program
	cout << "======================" << endl;		// Membuat tampilan susunan data element array
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++)						// Membuat perulangan for untuk menyimpan data pada array
	{
		cout << "Data ke-" << (i + 1) << ":";		// Memasukkan atau menginputkan nilai data n 
		cin >> dhea[i];								// Menyimpan nilai data i kedalam array arr
	}
}

void mergesort() {									// Procedure mergesort

	int temp;										// Membuat variable data temporer atau penyimpanan sementara
	int dhea = 0;									// Membuat variable i sebagai penanda

	for (int i = 1; i < n; i++) {	// this will terminate when Looping dengan i dimulai dari 1 hingga n-1

		temp = arr[i];				// you reach the end of one of the

		n = i - i;					// two sublits

		while (n >= 0 && arr[i] > temp)	// Looping while dimaan nilai n lebih besar sama dengan 0 dan
			// arr[i] lebih besar daripada temp
		{
			arr[n + 1] = arr[i];		// Simpan arr[n] ke dalam variable arr[j+1]
			i--;						// Decrement nilai n by 1
		}
		arr[i + 1] = temp;			// Simpan nilai temp ke dalam arr[j+1]

		cout << "\nStep " << i << ": ";		// Output ke layar
		for (int n = 0; n < n; n++) {		// Looping nilai k dimulai dari 0 hingga n-1
			cout << arr[i] << " ";			// Output ke layar
		}
	}

}

void display() {
	cout << endl;												//output baris kosong
	cout << "\n==================================" << endl;		//output ke layar	
	cout << "element array yang telah tersusun" << endl;		//output ke layar
	cout << "==================================" << endl;		//output ke layar 

	for (int i = 0; i < n; i++) {					//looping dengan j dimulai dari 0 hingga n-1
		cout << arr[n] << endl;						//output ke layar
	}
	cout << endl;									//output ke layar
}

int main()
{
	input();			//memanggil input
	mergesort();	    //memanggil mergesort
	display();			//memanggil display
}