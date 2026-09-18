#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cout << "Masukkan jumlah astronot (N): ";
    cin >> n;
    cout << "Masukkan nilai eliminasi awal (K): ";
    cin >> k;
 
    // Simpan nomor astronot 1..N dalam lingkaran
    vector<int> astronot(n);
    for (int i = 0; i < n; i++) {
        astronot[i] = i + 1;
    }
 
    vector<int> urutanEliminasi;
    int idx = 0; // posisi awal hitungan (astronot nomor 1)
 
    while (astronot.size() > 1) {
        int jumlah = astronot.size();
 
        // Hitung posisi yang kena giliran ke-K (berputar melingkar)
        int posEliminasi = (idx + k - 1) % jumlah;
 
        int nomorDieliminasi = astronot[posEliminasi];
        urutanEliminasi.push_back(nomorDieliminasi);
 
        // Hapus astronot yang tereliminasi
        astronot.erase(astronot.begin() + posEliminasi);
 
        // Update nilai K sesuai aturan
        if (nomorDieliminasi % 2 == 0) {
            k += 2; // genap -> K bertambah 2
        } else {
            k -= 1; // ganjil -> K berkurang 1
        }
        if (k < 2) {
            k = 2; // K tidak boleh kurang dari 2
        }
 
        // Posisi mulai hitungan berikutnya = astronot setelah yang dieliminasi
        if (!astronot.empty()) {
            idx = posEliminasi % astronot.size();
        }
    }
 
    cout << "\nUrutan astronot yang dieliminasi:\n";
    for (int i = 0; i < (int)urutanEliminasi.size(); i++) {
        cout << urutanEliminasi[i];
        if (i != (int)urutanEliminasi.size() - 1) cout << " -> ";
    }
    cout << endl;
 
    cout << "Astronot terakhir yang bertahan: " << astronot[0] << endl;
 
    return 0;
}