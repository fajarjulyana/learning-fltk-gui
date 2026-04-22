# FLTK GUI Tutorial (C++)

Repository ini berisi materi pembelajaran GUI menggunakan FLTK (Fast Light Toolkit) dengan C++, disusun secara bertahap dari dasar hingga membangun aplikasi GUI sederhana yang dapat dijalankan di Linux, Windows, dan macOS.

---

## 📚 Struktur Project

Project ini dibagi menjadi beberapa chapter:

```

chapter-1/   -> Pengenalan FLTK & window pertama
chapter-2/   -> Widget dasar (button)
chapter-3/   -> Event & callback
chapter-4/   -> Input dan output (interaksi user)
chapter-5/   -> Layout dan grouping
chapter-6/   -> Mini project GUI sederhana

```

Setiap chapter berisi file `main.cpp` yang bisa langsung di-compile dan dijalankan.

---

## 🎯 Tujuan Pembelajaran

- Memahami dasar GUI menggunakan FLTK
- Menguasai konsep event-driven programming di C++
- Membuat aplikasi GUI sederhana dari nol
- Menjadi dasar untuk pengembangan aplikasi lebih kompleks

---

## ⚙️ Persiapan & Instalasi

### Linux

**Arch Linux:**
```bash
sudo pacman -S fltk
````

**Ubuntu/Debian:**

```bash
sudo apt install libfltk1.3-dev
```

---

### Windows

* Download FLTK dari [https://www.fltk.org/](https://www.fltk.org/)
* Disarankan menggunakan MSYS2 atau MinGW

Contoh (MSYS2):

```bash
pacman -S mingw-w64-x86_64-fltk
```

---

### macOS


```bash
brew install fltk
```

---

## 🚀 Build Project (CMake)

```bash
mkdir build
cd build
cmake ..
make
```

Hasil build:

```
./chapter1
./chapter2
./chapter3
./chapter4
./chapter5
./chapter6
```

---

## ▶️ Menjalankan Program

Contoh:

```bash
./chapter1
```

---

## 🧩 Mini Project

Pada chapter terakhir, kamu akan membuat aplikasi sederhana:

* Input nama
* Tombol proses
* Output hasil ke label

Contoh hasil:

```
Halo, Fajar
```

---

## 🎬 Seri Tutorial YouTube

Materi di repository ini disusun mengikuti alur video tutorial di channel saya:

1. Pengenalan FLTK
2. Membuat window pertama
3. Mengenal widget
4. Event & callback
5. Input dan interaksi
6. Layout GUI
7. Mini project

---

## 💡 Catatan

* Semua GUI dibuat dengan kode (tanpa GUI designer)
* Cocok untuk pemula hingga intermediate
* Fokus pada pemahaman konsep, bukan hanya hasil

---

## 📄 Lisensi

Menggunakan MIT License — bebas digunakan, dipelajari, dan dimodifikasi.

---

## 🤝 Kontribusi

Kontribusi sangat terbuka:

* Perbaikan materi
* Penambahan contoh
* Peningkatan struktur project

---

## 🚀 Roadmap (Pengembangan Selanjutnya)

* Custom widget (advanced)
* Styling UI modern
* Integrasi database (SQLite)
* Aplikasi GUI skala kecil (real project)

---

Selamat belajar dan selamat ngoding C++ GUI! 🔥

