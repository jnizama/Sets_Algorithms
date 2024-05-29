#include <iostream>

int main_26() {
    int Q = 0;

    for (int M = 1; M <= 8; ++M) {
        int R;
        if (M < 5) {
            R = 0;
        }
        else {
            R = 1;
        }

        int S;
        switch (M) {
        case 1: S = 0; break;
        case 2: S = 1; break;
        case 3: S = 0; break;
        case 4: S = 1; break;
        default: S = 1; break;
        }

        int Suma1 = S + Q;
        int C;
        if (Suma1 >= 1) {
            C = 0;
        }
        else {
            C = 1;
        }

        int Suma2 = R + C;
        if (Suma2 >= 1) {
            Q = 0;
        }
        else {
            Q = 1;
        }

        std::cout << "Q: " << Q << ", C: " << C << std::endl;
    }

    return 0;
}
