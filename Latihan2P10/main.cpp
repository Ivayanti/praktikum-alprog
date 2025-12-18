#include <iostream>

using namespace std;

// Prototype fungsi
void pyramid(int tinggi, int bentuk);

int main() {
    cout << "1: Rata Kiri " << endl;
    pyramid(5, 0);

    cout << "\n2: Rata Kanan" << endl;
    pyramid(5, 1);

    cout << "\n3: Center" << endl;
    pyramid(5, 2);

    cout << endl;
    system("PAUSE");
    return 0;
}

void pyramid(int tinggi, int bentuk) {
    if (bentuk == 1) {
        // RATA KANAN
        for (int i = 1; i <= tinggi; i++) {
            for (int j = 1; j <= tinggi - i; j++) {
                cout << " ";
            }
            // Cetak Bintang
            for (int k = 1; k <= i; k++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    else if (bentuk == 2) {
        // CENTER
        for (int i = 1; i <= tinggi; i++) {
            // Cetak Spasi
            for (int j = 1; j <= tinggi - i; j++) {
                cout << " ";
            }

            for (int k = 1; k <= (2 * i - 1); k++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    else {
        // RATA KIRI
        for (int i = 1; i <= tinggi; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
}