#include <bits/stdc++.h>

using namespace std;

int main () {

    int cod_1, cod_2, quant_1, quant_2;
    double valor_uni1, valor_uni2, pagar;

        cin >> cod_1 >> quant_1 >> valor_uni1;
        cin >> cod_2 >> quant_2 >> valor_uni2;

            pagar = (quant_1 * valor_uni1) + (quant_2 * valor_uni2);

            cout << fixed << setprecision(2);
        
        cout << "VALOR A PAGAR: R$ " << pagar << endl;

return 0;

}