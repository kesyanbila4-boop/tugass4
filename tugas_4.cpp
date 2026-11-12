
#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "=== PROGRAM INPUT NILAI ===" << endl;
    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai < 0 || nilai > 100) {
        cout << "Nilai tidak valid!" << endl;
    }
    else if (nilai > 90) {
        cout << "Nilai Anda: A" << endl;
    }
    else if (nilai > 80) {
        cout << "Nilai Anda: B" << endl;
    }
    else if (nilai > 70) {
        cout << "Nilai Anda: C" << endl;
    }
    else {
        cout << "Nilai Anda: D" << endl;
    }

    return 0;
}
