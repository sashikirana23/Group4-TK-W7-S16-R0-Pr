// GROUP 4
// HANS PRANATA KARO SEKALI (2802673402)
// MUHAMMAD AGI SAPUTRA (2802680710)
// SASHI KIRANA SEKAR IRAWAN (2802685516)
// DEVI ANGGITA AMBARWATI (2802677003)
// RIFQY ZACKY ARIADHY (2802686424)

// tugas2a.c
#include <stdio.h>  // Library untuk fungsi input/output standar seperti printf dan gets
#include <string.h> // Library untuk fungsi manipulasi string seperti strcmp

// Struktur data untuk menyimpan informasi pegawai
struct Pegawai
{
    char nip[20];     // Menyimpan Nomor Induk Pegawai
    char nama[50];    // Menyimpan nama pegawai
    char alamat[100]; // Menyimpan alamat pegawai
    char no_hp[20];   // Menyimpan nomor HP pegawai
    char jabatan[50]; // Menyimpan jabatan pegawai
    char golongan[3]; // Menyimpan golongan pegawai (D1, D2, D3)
    int gaji_pokok;   // Menyimpan gaji pokok pegawai (akan ditentukan dari golongan)
};

// Fungsi untuk menentukan gaji pokok berdasarkan golongan pegawai
int hitungGajiPokok(char golongan[])
{
    if (strcmp(golongan, "D1") == 0)
        return 2500000; // Jika golongan D1, gaji 2.500.000
    else if (strcmp(golongan, "D2") == 0)
        return 2000000; // Jika golongan D2, gaji 2.000.000
    else if (strcmp(golongan, "D3") == 0)
        return 1500000; // Jika golongan D3, gaji 1.500.000
    else
        return 0; // Jika tidak dikenali, gaji 0
}

// Fungsi untuk membersihkan karakter newline '\n' di akhir string
void hapusNewline(char *str)
{
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';
}

int main()
{
    struct Pegawai peg; // Membuat variabel struct untuk menyimpan data pegawai

    // Input data pegawai dari pengguna
    printf("=== Input Data Pegawai ===\n");
    printf("NIP: ");
    fgets(peg.nip, sizeof(peg.nip), stdin);
    hapusNewline(peg.nip);// Input NIP pegawai
    
    printf("Nama: ");
    fgets(peg.nama, sizeof(peg.nama), stdin);
    hapusNewline(peg.nama); // Input nama pegawai
    
    printf("Alamat: ");
    fgets(peg.alamat, sizeof(peg.alamat), stdin);
    hapusNewline(peg.alamat); // Input alamat pegawai
    
    printf("No HP: ");
    fgets(peg.no_hp, sizeof(peg.no_hp), stdin);
    hapusNewline(peg.no_hp); // Input nomor HP pegawai
    
    printf("Jabatan: ");
    fgets(peg.jabatan, sizeof(peg.jabatan), stdin);
    hapusNewline(peg.jabatan); // Input jabatan pegawai
    
    printf("Golongan (D1/D2/D3): ");
    fgets(peg.golongan, sizeof(peg.golongan), stdin);
    hapusNewline(peg.golongan); // Input golongan pegawai

    peg.gaji_pokok = hitungGajiPokok(peg.golongan); // Hitung gaji pokok berdasarkan golongan

    // Tampilkan data pegawai yang telah dimasukkan
    printf("\n=== Data Pegawai ===\n");
    printf("NIP = %s\n", peg.nip);           // Tampilkan NIP
    printf("Nama = %s\n", peg.nama);         // Tampilkan nama
    printf("Alamat = %s\n", peg.alamat);     // Tampilkan alamat
    printf("No HP = %s\n", peg.no_hp);       // Tampilkan nomor HP
    printf("Jabatan = %s\n", peg.jabatan);   // Tampilkan jabatan
    printf("Golongan = %s\n", peg.golongan); // Tampilkan golongan
    printf("Gaji = Rp%d\n", peg.gaji_pokok); // Tampilkan gaji pokok

    return 0; // Program selesai dengan sukses
}
