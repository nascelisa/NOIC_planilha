#include <bits/stdc++.h>

using namespace std;

int main () {

    double cons_m, dist, cons_t; // consumo médio, distância, consumo total

        cin >> dist >> cons_t;

            cons_m = dist / cons_t;

            cout << fixed << setprecision(3);

        cout << cons_m << " km/l" << endl;

return 0;
}