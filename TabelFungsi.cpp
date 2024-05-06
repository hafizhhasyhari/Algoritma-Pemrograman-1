// PROGRAM TabelFungsi
// Program utama yang memperaakan cara pemanggilan fungsi F.
// Program ini menampilkan tabel nilai-nilai x dan f(x) di
// dalam selang [10, 15] dengan delta(x) = 0.2
// Dibuat oleh hafizhhasyhari

#include <iostream>
using namespace std;

// Purwarupa fungsi
float F (float x) ;
// Mengembalikan nilai F (x) 2x*x + 5x - 8, x bertipe real

main ()
{
     // DEKRALASI 
     float x;

     // Algortima: 
     // buat header tabel
     cout << "________________________________" << endl;
     cout << "_____ x             f (x)  _____" << endl;
     cout << "________________________________" << endl;
     x = 10.0;
     while (x <= 15.0)

     {
       cout << x << "           " << F (x) << endl;
       x = x + 0.2;
     }

     // buat garis penutup tabel
     cout << " ______________________________" << endl;
}

float F (float x)
// mengembalikan nilai F(x)-2x*x + 5x - 8, x bertipe real
{
     // DEKRALASI
        // tidak ada
     // ALGORITMA
       return 2*x*x + 5*x - 8;
}
