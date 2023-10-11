// #include <iostream>
// #include <graphics.h>
// using namespace std;

// // Fungsi DDA untuk menggambar garis
// void DDA(int x1, int y1, int x2, int y2) {
//     int dx = x2 - x1;
//     int dy = y2 - y1;
//     int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

//     float xIncrement = static_cast<float>(dx) / static_cast<float>(steps);
//     float yIncrement = static_cast<float>(dy) / static_cast<float>(steps);

//     float x = x1;
//     float y = y1;

//     for (int i = 0; i <= steps; i++) {
//         putpixel(round(x), round(y), WHITE); // Menggambar titik putih pada koordinat (x, y)
//         x += xIncrement;
//         y += yIncrement;
//     }
// }

// int main() {
//     int gd = DETECT, gm;
//     initgraph(&gd, &gm, NULL);

//     int x1, y1, x2, y2;

//     cout << "Masukkan koordinat x1: ";
//     cin >> x1;
//     cout << "Masukkan koordinat y1: ";
//     cin >> y1;
//     cout << "Masukkan koordinat x2: ";
//     cin >> x2;
//     cout << "Masukkan koordinat y2: ";
//     cin >> y2;

//     DDA(x1, y1, x2, y2);

//     delay(5000);
//     closegraph();

//     return 0;
// }

#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int x1, y1, x2, y2;

    // Input koordinat titik awal dan titik akhir
    cout << "Masukkan koordinat titik awal (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Masukkan koordinat titik akhir (x2 y2): ";
    cin >> x2 >> y2;

    // Menghitung perbedaan koordinat
    int dx = x2 - x1;
    int dy = y2 - y1;

    // Menentukan langkah iterasi (perbedaan maksimum antara x dan y)
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    // Menghitung perubahan x dan y setiap iterasi
    float deltaX = static_cast<float>(dx) / static_cast<float>(steps);
    float deltaY = static_cast<float>(dy) / static_cast<float>(steps);

    // Menampilkan titik-titik yang dilalui oleh garis
    cout << "Titik-titik yang dilalui oleh garis:" << endl;
    cout << "X\tY" << endl;

    float x = x1;
    float y = y1;

    for (int i = 0; i <= steps; i++) {
        cout << round(x) << "\t" << round(y) << endl;
        x += deltaX;
        y += deltaY;
    }

    return 0;
}
