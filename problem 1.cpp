#include <bits/stdc++.h>
using namespace std;

int main() {
    string pesan;
    cout << "Masukkan pesan (huruf kapital, tanpa spasi): ";
    cin >> pesan;

    int n = pesan.size();
    string hasilSandi = pesan; // salin dulu, nanti diubah sesuai aturan

    for (int i = 1; i < n; i++) {
        // Ambil nilai posisi ASLI dari huruf sekarang dan huruf sebelumnya
        int nilaiSekarang   = pesan[i] - 'A' + 1;   // A=1, B=2, ..., Z=26
        int nilaiSebelumnya = pesan[i - 1] - 'A' + 1;

        int total = nilaiSekarang + nilaiSebelumnya;

        // Jika hasil melebihi Z (26), kembalikan ke rentang 1-26
        if (total > 26) {
            total -= 26;
        }

        // Ubah nilai hasil menjadi huruf baru
        char hurufBaru = 'A' + (total - 1);
        hasilSandi[i] = hurufBaru;
    }

    cout << "Pesan asli   : " << pesan << endl;
    cout << "Pesan sandi  : " << hasilSandi << endl;

    return 0;
}