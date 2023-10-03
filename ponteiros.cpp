#include <iostream>

using namespace std;

// aulas sobre ponteiros PCS3111 2023 
// https://eaulas.usp.br/portal/video?idItem=15490

int* retornaPonteiro(int* vetor) {
    int* p = vetor;
    return p;
}

void trocar(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void trocarPorReferencia(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void trocarPorPointeiros(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    // ----------------------------------------- ponteiros e desreferenciação
    int i = 10;
    // quando escrevemos i = 10, em uma posição de memória é armazenado a variável i com valor 10
    int j = 20;

    cout << &i << endl;
    // estamos imprimindo a posição de memória de i
    cout << &j << endl;

    int* p1 = &i; // endereço de i

    // um ponteiro armazena a posição de memória de uma variável
    // também se diz que o ponteiro armazena o endereço de uma variável
    // posição de memória de uma variável = endereço de memória de uma variável

    int* p2 = &j;

    cout << p1 << endl;
    cout << p2 << endl;

    cout << *p1 << endl; // valor no endereço p1

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

    // ---------------------------------------- inicialização de ponteiros
    // O c++ não zera posições de memória
    // quando criamos um ponteiros, sabe-se lá para o que ele está apontando. Ele pode apontar para qualquer posição de memória
    // o valor inicial de um ponteiro é indefinido

    double* ponteiro;

    cout << ponteiro << endl; //saída: 0x8

    ponteiro = NULL;

    cout << ponteiro << endl; 

    ponteiro = nullptr;

    cout << ponteiro << endl;

    // ---------------------------------------------- ponteiros de ponteiros

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

    // ------------------------------------------------------- ponteiros e vetores

    // um vetor não é um ponteiro. No entanto, na prática funciona como se fosse um
    // em C++ não é possível retornar vetores, mas é possível retornar ponteiros

    double vetor[] = {4, 6, 8};

    for(int i = 0; i < 3; i++) {
        cout << vetor[i] << endl;
        cout << &vetor[i] << endl;
    }

    // um ponteiro para vetor pode ser usado como vetor

    int vector[] = {10, 12, 14};

    int* pointer = vector;

    for(int i = 0; i < 3; i++) {
        cout << pointer[i] << endl;
        cout << &pointer[i] << endl;
    }
    cout << vector << endl;
    cout << &vector[0] << endl;
    cout << retornaPonteiro(vector) << endl;
    cout << pointer << endl;

    // um ponteiro de vetor aponta para a primeira posição de memória do ponteiro
    // todas as saídas produzidas nas linhas 107-110 são idênticas

    // ----------------------------------- passagem por referência 

    // em C++, a passagem dos parâmetros em uma função é, por padrão, feita por valor
    // a passagem por referência é possível e é indicada por &

    int alfa = 6;
    int beta = 9;

    trocar(alfa, beta);

    cout << "alfa: " << alfa << endl;
    cout << "beta: " << beta << endl;

    // quando chamamos/acionamos uma função, duas copias das variáveis passadas são criadas e 
    // as alterações acontecem com essas cópias
    // para evitar esse problema, fazemos passagem por referencia
    // não iremos criar cópias, mas mandar as variáveis originais

    trocarPorReferencia(alfa, beta); // olhar e comparar a implementação dessa função e da anterior

    cout << "alfa: " << alfa << endl;
    cout << "beta: " << beta << endl;

    // agora a troca foi efetuada

    // ------------------------------------------ passagem por ponteiros (caso particular de passagem por valor, padrão do C++)

    // uma outra possibilidade é realizar a troca por ponteiros (endereços)

    trocarPorPointeiros(&alfa, &beta); // olhar e comparar a implementação dessa função com as duas anteriores
    
    // aqui a passagem é por valor, ou seja, estamos enviando cópias dos endereços
    // no entanto, quando desreferenciamos essas cópias, estamos alterando o valor das variáveis originais
    // porque as cópias enviadas eram os endereços das variáveis originais

    cout << "alfa: " << alfa << endl;
    cout << "beta: " << beta << endl;

    // a troca foi efetuada novamente, retornando aos valores originais
    
}