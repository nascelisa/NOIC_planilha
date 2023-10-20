#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    double horas, salario, salario_t;

        cin >> N >> horas >> salario;

            salario_t = horas * salario;

            cout << fixed << setprecision(2);

        cout << "NUMBER = "<< N << endl;
        cout << "SALARY = U$ " << salario_t << endl;

    return 0;

}