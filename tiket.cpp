#include <iostream>
#include <cmath>
using namespace std;

double hitungBiayaTiket(int jumlahStasiun) {
    const double tarifPerStasiun = 5000.0;
    double totalBiaya = jumlahStasiun * tarifPerStasiun;
    
  return totalBiaya;
}

bool validStasiun(int stasiun) {
    return stasiun >= 1 && stasiun <= 5;
}

int main() {
    int stasiunAwal, stasiunTujuan;

      cout << "Selamat Datang di stasiun Indonesia" << endl;
      
 cout << "Silahkan pilih tujuan anda" << endl;
    cout << "Tarif Per-Stasiun adalah Rp5000" << endl;
    cout << "1. Stasiun A" << endl;
    cout << "2. Stasiun B" << endl;
    cout << "3. Stasiun C" << endl;
    cout << "4. Stasiun D" << endl;
    cout << "5. Stasiun E" << endl;

    cout << endl;
    
    cout << "Stasiun awal: ";
    cin >> stasiunAwal;
    
    if (!validStasiun(stasiunAwal)) {
        cout << "Stasiun yang anda pilih tidak ada." << endl;
        return 1;
    }
    
    cout << "Stasiun tujuan: ";
    cin >> stasiunTujuan;
    
    if (!validStasiun(stasiunTujuan)) {
        cout << "Stasiun yang anda tuju tidak ada." << endl;
        return 1;
    }
    
