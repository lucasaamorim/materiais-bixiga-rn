#include<bits/stdc++.h>
using namespace std;

int main() {
    // laços servem para rodar comandos repetidamente

    /*
        for(comando de início; condição; incremento) {}

        comando de início - Comando que será executado uma vez quando o laço iniciar
        condição - O laço roda enquanto a condição for verdade
        incremento - Comando que será executado toda vez que o laço terminar e
          voltar para o começo
    */ 
    for(int i=0; i<=50; i++) {
        // execute esse código 50 vezes
        cout << i << ' ';
    }

    int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        //execute esse código tantas vezes quanto o valor de t
    }

    
    // cada parte do for é opcional
    for(;;) {
        // válido (mas dá loop infinito)
    }



    /**
     * while(condição) {}
     * 
     * rode o código dentro das chaves repetidamente, enquanto a condição for verdade
     */
    int a = 11, b = 10;
    while(a <= b) {
        a++; // equivale à: a = a + 1
    }


    /**
     * do {
     * 
     * } while(condição)
     * 
     * o do-while executa o código primeiro, depois checa a condição para ver se repete.
     * o while checa a condição antes de rodar o código pela primeira vez
     */
	do {

	} while(a < b);
}
