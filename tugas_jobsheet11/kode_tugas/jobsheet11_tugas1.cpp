//dibuat-oleh_22343021_Fitri-Waldi
#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    int nim;
    string nama;
    string ttl;
    float ipk;
};

// Sequential Search
int sequentialSearch(Mahasiswa arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i].nim == key) {
            return i;  // Mengembalikan indeks data yang ditemukan
        }
    }
    return -1;  // Mengembalikan -1 jika data tidak ditemukan
}

// Binary Search
int binarySearch(Mahasiswa arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid].nim == key) {
            return mid;  // Mengembalikan indeks data yang ditemukan
        }
        if (arr[mid].nim < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;  // Mengembalikan -1 jika data tidak ditemukan
}

int main() {
    int size = 4;
    Mahasiswa data[size];

    // Mengisi data mahasiswa
    data[0] = {12345, "John Doe", "01 Januari 2000", 3.75};
    data[1] = {23456, "Jane Smith", "15 Februari 2001", 3.90};
    data[2] = {34567, "Alice Johnson", "10 Maret 1999", 3.60};
    data[3] = {45678, "Bob Williams", "05 April 2002", 3.80};

    int key = 23456;  // NIM sebagai kunci pencarian

    // Pencarian menggunakan sequential search
    int seqIndex = sequentialSearch(data, size, key);
    if (seqIndex != -1) {
        cout << "Data ditemukan pada indeks: " << seqIndex << endl;
        cout << "NIM: " << data[seqIndex].nim << endl;
        cout << "Nama: " << data[seqIndex].nama << endl;
        cout << "TTL: " << data[seqIndex].ttl << endl;
        cout << "IPK: " << data[seqIndex].ipk << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    // Pencarian menggunakan binary search
    int binIndex = binarySearch(data, 0, size - 1, key);
    if (binIndex != -1) {
        cout << "Data ditemukan pada indeks: " << binIndex << endl;
        cout << "NIM: " << data[binIndex].nim << endl;
        cout << "Nama: " << data[binIndex].nama << endl;
        cout << "TTL: " << data[binIndex].ttl << endl;
        cout << "IPK: " << data[binIndex].ipk << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}
