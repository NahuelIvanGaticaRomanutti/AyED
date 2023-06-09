#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double pi {0.0};
    int i {0};
    for (;;++i) {
        double num;
        i % 2 == 0 ? num = 1 : num = -1;
        double den = 2 * i + 1;
        pi += num / den;
        double V {pi * 4 - 3.141592};
        if (V < 0.0) {
            V = -V;
        }
        if (V < 0.0000001) {
            break;
        }
    }
    pi *= 4;
    cout << "Este es el valor de pi: " << setprecision(7) << pi << endl;
    return 0;
}
