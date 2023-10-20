#include <bits/stdc++.h>

using namespace std;

int main () {

    float R;
    double V, pi;

        cin >> R;
 
            pi = 3.14159; 
            double Rcubo = pow (R,3);
            V = (4/3.0) * pi * Rcubo;

            cout << fixed << setprecision(3);

        cout << "VOLUME = " << V << endl;

return 0;
       
}