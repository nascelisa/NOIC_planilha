#include <iostream>

using namespace std;

int main() {

    double A, B, C;
    double media;

    cin >> A >> B >> C;

    media = ( A * 2 + B * 3 + C * 5) / (18);

    cout << fixed << setprecision(1);

    cout << "MEDIA = " << media << endl;

    return 0;

}