#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }


    for(int i=0; i<n; i++) {
        int soma = 0;
        for(int j=0; j<=i; j++) {
            soma = soma + a[j];
        }
        cout << soma << ' ';
    }

    cout << '\n';

    int soma = 0;
    for(int i=0; i<n; i++) {
        soma = soma + a[i];
        cout << soma;
    }

}