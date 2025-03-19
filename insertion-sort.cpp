// judul : insertion sort 
#include <iostream>
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
int main()
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

void insertionSort(int isiArray[], int panjangArray) 
{
    printArray(isiArray, panjangArray);

    // mulai insertion sort dengan inisialisasi indexYangDiurutkan = 1 untuk elemen yang ingin diurutkan, dan indexPemabanding = indexYangDiurutkan - 1 untuk pembanding yang di mana merupakan semua index sebelum variable indexYangDiurutkan
    int kunci; // sebagai wadah dari elemen yang dibandingkan
    int indexYangDiurutkan; // sebagai elemen yang ingin diurutkan
    int indexPembanding; // sebagai elemen pembanding dengan index sebelum yang diurutkan// sebagai elemen pembanding dengan index sebelum yang diurutkan
    
    // mulai proses pengurutan
    for(indexYangDiurutkan = 1; indexYangDiurutkan < panjangArray; indexYangDiurutkan++) 
    {
        indexPembanding    = indexYangDiurutkan - 1; 
        kunci = isiArray[indexYangDiurutkan]; // elemen yang ingin diurutkan

        // bandingkan dengan isi array sebelumnya 
        while(indexPembanding >= 0 && isiArray[indexPembanding] < kunci) // apakah elemen pembanding lebih besar dari kunci?
        {
            isiArray[indexPembanding+1] = isiArray[indexPembanding]; // Geser elemen ke kanan
            indexPembanding--;         // Pindah ke elemen sebelumnya
        }

        isiArray[indexPembanding+1] = kunci; // memasukan kunci ke posisi yang tepat

        // Mencetak setelah diurutkan
        cout << "Langkah ke-" << indexYangDiurutkan << ": ";
        printArray(isiArray, panjangArray);
    }
}