//1. Jelaskan, mengapa algoritma dibutuhkan untuk meyelesaikan suatu masalah?
//	= Agar suatu pemrograman dapat berjalan dengan lancar dan efisien
//2. Dalam algoritma di klarifikasi menjadi 2 data struktur. Sebutkan 2 data struktur tersebut
//	= Struktur sequence dan struktur selection
//3. Sebutkan faktor faktor yang mempengaruhi efisiensi suatu pemrograman algoritma
//	= Terstruktur, Menggunakan algoritma dengan tepat dan harus berguna, Terurut, menutup suatu algoritma pemrograman
//4. Dari 6 algoritma yang sudah dipelajari, algoritma manakah yang paling efisien untuk mengurutkan data yang ukurannya kecil. Jelaskan kenapa anda memilih itu
//	= Insertionsort karena lebih mudah digunakan untuk suatu pemrograman dengan elemen yang sedikit
//5. Sebutkan dari algoritma yang telah dipelajari mana yang termasuk kedalam Quicksort dan mana yang termasuk kedalam Insertionsort
//	= Algoritma Quicksort biasanya digunakan  untuk mengurutkan data dalam waktu yang cepat namun biasanya digunakan untuk elemen yang banyak
//	  sedangkan Algoritma InsertionSort untuk mengurutkan data dengan elemenen yang lebih sedikit dari Quicksort dalam waktu yang singkat
//6. buatlah sebuat program yang mengimplementasikan selectionsort menggunakan bahasa c++, berikut merupakan algoritma selectionsort:
//		1. Repeat steps 2 and 3 verying j from 0 to n-2
#include <iostream>
using namespace std;

int arr[20];					//array of integres to hold values			
int cmp_count = 0;				//number of comparison
int mov_count = 0;				//number of data movements
int n;

void input() {
	while (true)
	{
		cout << "Masukan panjang element array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;
	}

	cout << "\n--------------------" << endl;
	cout << "\n Enter Element Array" << endl;
	cout << "\n--------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
//		2. Find the minimum value in art(j)to arr(n-1):
//			A. Set min_index = j

//			B. repeat step c verying i from j + 1 to n - 1
//			C. if arr(i) < arr[min_index]:
//				1. min_index = i
//		3. Swap arr[j] with arr[min_index] there are additional requirements to reate the program:
//			A. The maximum number of datais the sun of the last two digits of your student number + 20 - 2 x 15 +10 + 20
//			B. Change the "j" in the algorithm to the two initials of your name. 
//			C. Change "arr" with your nickname
