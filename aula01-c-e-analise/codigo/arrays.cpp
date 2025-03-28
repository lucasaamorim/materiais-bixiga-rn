#include<bits/stdc++.h>
using namespace std;

int main() {
    // Arrays são listas de coisas

    int arr[50]; // declaração

    arr[0]; // <-- primeiro elemento da lista
    arr[1]; // <-- segundo elemento
    arr[49]; // <-- ultimo elemento
    arr[50]; // <-- ILEGAL:

    // lendo 50 inteiros
    for(int i=0; i<50; i++) {
        cin >> arr[i];
    }

    int n;
    cin >> n;
    if(n >= 100) {
        cout << "erro no n, está fora dos limites";
    }

    for(int i=0; i<n; i++) {
        cout << "1";
        cout << "2";
    }


    for(int i=0; i<n; i++) {
        int soma = 0;
        for(int j=0; j<i; j++) {
            soma++;
        }
        cout << soma;
    }

    for(int i=0; i<n; i++) {
        
    }


    // podemos criar arrays de qualquer tipo
    double darr[10];
    bool barr[10];
    long long larr[10];
    // etc...

}