#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int x = 5;
    int y = 10;

    // Se a condição é verdadeira, execute o código entre chaves
    if(x < y) {
        cout << "O x é menor que y";
    } else if (x == y) { 
        /*
            Se a condição anterior não for verdadeira, 
            então se a nova condição for verdade, 
            execute o codigo entre chaves
        */
        cout << "O x é igual ao y";
    } else {
        /*
            Se nenhuma das condições anteriores for verdadeira, execute este código
        */
        cout << "O x é maior que o y";
    }

    // Podemos encadear quantos else-if quisermos
    if(true) {} 
    else if(true) {}
    else if(true) {}
    else if(true) {}
    else {} // o else é opcional

    // Outros comparadores:
    if(x != y) {} // x diferente de y
    if(x <= y) {} // x menor igual a y
    if(x >= y) {} // x maior igual a y

    // Operadores lógicos
    bool a = false, b = false;
    if(a && b) {} // verdadeiro se as duas forem verdadeiras
    if(a || b) {} // verdadeiro se pelo menos uma das duas for verdadeira
    if(!a) {} // verdadeiro se 'a' for falso (o inverso de 'a')
    if(a ^ b) {} // verdadeiro se *exatamente uma* das condições for verdade
    

    // podemos juntar comparadores com expressões e operadores lógicos. Exemplo:
    if(x*y <= 50 && x*y >= 10) {
        // se x*y é menor igual a 50 E x*y é menor igual a 10, execute o código que está aqui
    }

}