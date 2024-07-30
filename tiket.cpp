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
