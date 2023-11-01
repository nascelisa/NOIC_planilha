#include <bits/stdc++.h>

using namespace std;

int main () 

{


    double A, B, C;
    double trian, circ, trap, quad, retan;
    double pi;

        cin >> A >> B >> C;

            pi = 3.14159;
            double Bquad= pow (B,2);
            double Cquad = pow (C,2);

            trian = (A * C) / 2; 
            circ = pi * Cquad;
            trap = ((A+B) * C )/ 2;
            quad = Bquad;
            retan = A * B;

            cout << fixed << setprecision(3);

        cout << "TRIANGULO: " << trian << endl;
        cout << "CIRCULO: " << circ << endl;
        cout << "TRAPEZIO: " << trap << endl;
        cout << "QUADRADO: " << quad << endl;
        cout << "RETANGULO: " << retan << endl;

return 0;

}