#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    double altMed, soma, menor, per;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    int idade[N];
    double alt[N];
    string nome[N];

    for(int i = 0; i < N; i++){
        cout << "Dados da " << i+1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline (cin, nome[i]);
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> alt[i];
    }

    soma = 0;
    for(int i = 0; i < N; i++){
        soma = soma + alt[i];
    }

    altMed = soma / N;

    cout << "\nAltura média: " << altMed << endl;

    menor = 0;
    for(int i = 0; i < N; i++){
        if(idade[i] < 16){
            menor = menor + 1;
        }
    }

    per = menor * 100.0 / N;

    cout << "Pessoas com menos de 16 anos: " << per << "%" << endl;

    for(int i = 0; i < N; i++){
        if(idade[i] < 16){
            cout << nome[i] << endl;
        }
    }

    return 0;
}
