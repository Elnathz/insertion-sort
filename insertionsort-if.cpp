// judul : insertion sort 
#include <iostream>
#include <utility> // library untuk swap
using namespace std;

// Kelompok 3
// 1. Farros Rifantiarno    (A11.2024.15694)
// 2. Fajar Aziz Kurniawan  (A11.2024.15685)
// 3. M irsyadul isdhaq     (A11.2024.15684)
// 4. Muhammad Dita Adinata (A11.2024.15695)
// 5. Daffa Wira Hadyan     (A11.2024.15682)

// kamus 
int beratBadanMahasiswa[] = {68, 60, 80, 76, 63};
int panjangArray;

void printArray(int isiArray[], int panjangArray);
void insertionSort(int isiArray[], int panjangArray);

// deskripsi
main ()
{
    panjangArray = sizeof(beratBadanMahasiswa)/sizeof(beratBadanMahasiswa[0]); // mencari panjang dari isi array
    cout << "Berat Badan Sebelum Diurutkan : ";
    printArray(beratBadanMahasiswa, panjangArray);
    cout << endl;

    cout << "Mulai Pengurutan : " << endl;
    insertionSort(beratBadanMahasiswa, panjangArray);
    cout << endl;

    cout << "Berat Badan Setelah Diurutkan : ";
    printArray(beratBadanMahasiswa, panjangArray);
    
    return 0;
}

// function
void printArray(int isiArray[], int panjangArray) 
{
    for(int i = 0; i < panjangArray ; i++) 
    {
        cout << isiArray[i] << " ";
    }
    cout << endl;
}

void insertionSort(int isiArray[], int panjangArray) {
    for(int i = 1; i < panjangArray; i++) 
    {
        cout << "Iterasi ke-" << i << " : ";
        printArray(isiArray, panjangArray);
        for(int j = i; j > 0; j--)  // proses pengurutan insertion sort, akan diulang sampai index ke 0
        {
            if(isiArray[j] < isiArray[j-1]) // jika isi array ke j lebih kecil dari isi array ke j-1
            {
                swap(isiArray[j], isiArray[j-1]); 
            }
            else 
            {
                break;
            }
        }
    }
}
