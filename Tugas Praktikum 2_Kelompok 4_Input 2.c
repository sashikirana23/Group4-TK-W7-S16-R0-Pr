// GROUP 4
// HANS PRANATA KARO SEKALI (2802673402)
// MUHAMMAD AGI SAPUTRA (2802680710)
// SASHI KIRANA SEKAR IRAWAN (2802685516)
// DEVI ANGGITA AMBARWATI (2802677003)
// RIFQY ZACKY ARIADHY (2802686424)

#include <stdio.h>  // Library standar untuk input/output
#include <string.h> // Library untuk fungsi string seperti strcmp

// Struktur data untuk menyimpan informasi lembur pegawai
struct Lembur
{
    char nip[20];     // Menyimpan NIP pegawai
    char golongan[3]; // Menyimpan golongan pegawai (D1, D2, D3)
    int jam_lembur;   // Menyimpan jumlah jam lembur
    int gaji_pokok;   // Menyimpan gaji pokok berdasarkan golongan
    int uang_lembur;  // Menyimpan total uang lembur
    int total_gaji;   // Menyimpan total gaji = gaji pokok + uang lembur
};

// Fungsi untuk menentukan gaji pokok dari golongan pegawai
int getGajiPokok(char gol[])
{
    if (strcmp(gol, "D1") == 0)
        return 2500000; // Jika golongan D1, gaji pokok 2.500.000
    else if (strcmp(gol, "D2") == 0)
        return 2000000; // Jika golongan D2, gaji pokok 2.000.000
    else if (strcmp(gol, "D3") == 0)
        return 1500000; // Jika golongan D3, gaji pokok 1.500.000
    else
        return 0; // Jika golongan tidak valid, gaji pokok 0
}

// Fungsi untuk menentukan tarif lembur per jam dari golongan pegawai
int getTarifLembur(char gol[])
{
    if (strcmp(gol, "D1") == 0)
        return 10000; // Jika golongan D1, tarif lembur 10.000 per jam
    else if (strcmp(gol, "D2") == 0)
        return 5000; // Jika golongan D2, tarif lembur 5.000 per jam
    else if (strcmp(gol, "D3") == 0)
        return 2500; // Jika golongan D3, tarif lembur 2.500 per jam
    else
        return 0; // Jika tidak valid, tarif lembur 0
}

int main()
{
    struct Lembur peg; // Membuat variabel struct untuk menyimpan data lembur pegawai

    // Input data dari pengguna
    printf("=== Input Data Lembur Pegawai ===\n");
    printf("NIP: ");
    gets(peg.nip); // Input NIP pegawai
    printf("Golongan (D1/D2/D3): ");
    gets(peg.golongan); // Input golongan pegawai
    printf("Jumlah Jam Lembur: ");
    scanf("%d", &peg.jam_lembur); // Input jumlah jam lembur

    // Hitung gaji pokok dan uang lembur
    peg.gaji_pokok = getGajiPokok(peg.golongan);                     // Panggil fungsi untuk dapatkan gaji pokok
    peg.uang_lembur = peg.jam_lembur * getTarifLembur(peg.golongan); // Hitung total uang lembur
    peg.total_gaji = peg.gaji_pokok + peg.uang_lembur;               // Hitung total gaji bulan ini

    // Tampilkan hasil perhitungan gaji
    printf("\n=== Rincian Gaji Pegawai ===\n");
    printf("NIP = %s\n", peg.nip);                           // Tampilkan NIP
    printf("Golongan = %s\n", peg.golongan);                 // Tampilkan golongan
    printf("Lembur = %d jam\n", peg.jam_lembur);             // Tampilkan jumlah jam lembur
    printf("Total Gaji Bulan ini = Rp%d\n", peg.total_gaji); // Tampilkan total gaji bulan ini

    return 0; // Program selesai dengan sukses
}
