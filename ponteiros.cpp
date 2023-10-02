#include <iostream>

using namespace std;

// aulas sobre ponteiros PCS3111 2023 
// https://eaulas.usp.br/portal/video?idItem=15490

int main(){
    int i = 10;
    // quando escrevemos i = 10, em uma posição de memória é armazenado a variável i com valor 10
    int j = 20;

    cout << &i << endl;
    // estamos imprimindo a posição de memória de i
    cout << &j << endl;

    int* p1 = &i; 
    // um ponteiro armazena a posição de memória de uma variável
    // também se diz que o ponteiro armazena o endereço de uma variável
    // posição de memória de uma variável = endereço de memória de uma variável
    int* p2 = &j;

    cout << p1 << endl;
    cout << p2 << endl;

    cout << *p1 << endl;
    // desreferenciação permite obter o valor apontado pelo ponteiro
    // o ponteiro/apontador (pointer) "aponta" para uma variável (guarda sua posição de memória)
    // quando utilizamos o operador *, desreferenciamos o ponteiro e conseguimos obter o valor (amazenado) da (na) variável para a qual ele aponta
    // valor da variável = valor armazenado na variável
    cout << *p2 << endl;

    double a = 10.0;
    double* b = &a;
    *b = 50.0;

    // a saída será 10.0 ou 20.?
    // 20.0, pois alteramos com a desreferenciação o valor da variável a
    
    cout << a << endl;
    cout << *b << endl;

    // O c++ não zera posições de memória
    // quando criamos um ponteiros, sabe-se lá para o que ele está apontando. Ele pode apontar para qualquer posição de memória
    // o valor inicial de um ponteiro é indefinido

    double* ponteiro;

    cout << ponteiro << endl; //saída: 0x8

    ponteiro = NULL;

    cout << ponteiro << endl; 

    ponteiro = nullptr;

    cout << ponteiro << endl;

    // ponteiros de ponteiros

    int k = 123;
    int* k1 = &k;
    int** k2 = &k1;
    // k2 é um ponteiro (guarda a posição de memória) de um ponteiro (que por sua vez também guarda uma posição de memória)
    // de inteiro
    // k2 é um ponteiro para um ponteiro de um inteiro
    // k2 é um ponteiro para um ponteiro de uma variável inteira
    // k2 é um apontador para um outro apontador de uma variável inteira 

    cout << k << endl;
    cout << *k1 << endl;
    cout << **k2 << endl;
    cout << &k << endl; // posição de memória da variável inteira k
    cout << k1 << endl; // posição de memória da variável inteira k
    cout << *k2 << endl; // valor apontado por k2: k1, que por sua vez é posição de memória da variável inteira k

}