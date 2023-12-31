#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double B, h, area, per, diag;

    cout << "Base do retangulo: ";
    cin >> B;
    cout << "Altura do retangulo: ";
    cin >> h;

    area = B * h;
    per = 2 * (B + h);
    diag = sqrt(pow(B, 2) + pow(h, 2));

    cout << "AREA = " << area << endl;
    cout << "PERIMETRO = " << per << endl;
    cout << "DIAGONAL = " << diag << endl;

    return 0;
}
