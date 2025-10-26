#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double S, P;
    int n, k;

    cout << "Обчислення виразу різними циклами\n";

    S = 0;
    n = 1;
    while (n <= 10) {
        P = 1;
        k = 1;
        while (k <= n) {
            P *= 1.0 / (k * k);
            k++;
        }
        S += sin(P) / (n + sqrt(P));
        n++;
    }
    cout << "1) while-while: S = " << S << endl;

    S = 0;
    n = 1;
    do {
        P = 1;
        k = 1;
        do {
            P *= 1.0 / (k * k);
            k++;
        } while (k <= n);

        S += sin(P) / (n + sqrt(P));
        n++;
    } while (n <= 10);
    cout << "2) do-do: S = " << S << endl;

    S = 0;
    for (n = 1; n <= 10; n++) {
        P = 1;
        for (k = 1; k <= n; k++) {
            P *= 1.0 / (k * k);
        }
        S += sin(P) / (n + sqrt(P));
    }
    cout << "3) for++: S = " << S << endl;

    S = 0;
    for (n = 10; n >= 1; n--) {
        P = 1;
        for (k = n; k >= 1; k--) {
            P *= 1.0 / (k * k);
        }
        S += sin(P) / (n + sqrt(P));
    }
    cout << "4) for--: S = " << S << endl;

    return 0;
}
