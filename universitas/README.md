# 🎓 University Console Project

Proyek UTS **University** adalah simulasi sederhana berbasis **C++ console** yang menampilkan sistem data universitas seperti **Mahasiswa**, **Dosen**, **Mata Kuliah**, **Program Studi**, **Jadwal**, dan **Nilai**.
Seluruh fitur hanya untuk tampilan simulasi (tanpa database).

---

## ⚙️ Persyaratan

- C++ Compiler:

  - **Linux / macOS:** `g++`
  - **Windows:** Dev-C++ atau MinGW

---

## 🚀 Cara Menjalankan di Linux / macOS

1. Buka terminal di folder `University`

2. Jalankan perintah berikut untuk meng-compile:

   ```bash
   g++ menu.cpp mahasiswa.cpp dosen.cpp matkul.cpp program_studi.cpp jadwal.cpp nilai.cpp -o university
   ```

3. Jalankan program:

   ```bash
   ./university
   ```

---

## 💻 Cara Menjalankan di Windows (Dev-C++)

1. Buka **Dev-C++**
2. Pilih menu **File → New → Project → Console Application → C++**
3. Beri nama project, misalnya: `University`
4. Hapus isi `main.cpp` bawaan
5. Tambahkan semua file berikut ke dalam project:

   - `menu.cpp`
   - `mahasiswa.cpp`
   - `dosen.cpp`
   - `matkul.cpp`
   - `program_studi.cpp`
   - `jadwal.cpp`
   - `nilai.cpp`

6. Klik **Execute → Compile & Run** atau tekan `F11`

---

## 🧩 Catatan

- Program ini tidak menggunakan database atau file eksternal, hanya menampilkan data simulasi.
- Semua data bersifat **sementara** dan **hilang setelah program ditutup**.
- Direkomendasikan menggunakan terminal **lebar** agar tampilan tabel rapi.

---

## 👨‍💻 Kontributor

- **Nama:**
- **Bahasa:** C++
