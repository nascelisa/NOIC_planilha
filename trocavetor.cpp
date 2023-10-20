#include <bits/stdc++.h>

using namespace std;

int main ()
{

    int N[20];

        for (int i = 0; i < 20 ; i++) 
        
        {
            cin >> N[i];
        }

            for (int i = 0; i < 10; i++ ) 
            {
                int save = N[i]; 
                N[i] = N[19 - i];
                N[19 - i] = save;

            }

        
        for (int i = 0; i < 20; i++) {
        cout << "N[" << i << "] = "<< N[i] << endl; }


    return 0;
}