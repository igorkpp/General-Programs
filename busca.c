#include <stdio.h>

#define tamanho 6

int busca(int *v, int chave) {
    int i;
    for (i = 0; i < tamanho; i++){
        if (v[i] == chave)
            return i;
    }
    return -1;
}   
int main() {
    int v[] = {1,2,3,4,5,6};
    printf("Digite um inteiro\n");
    int elemento;
    scanf("%d", &elemento );
    int posicao = busca(v, elemento);
    if(posicao != -1)
        printf("Esse elemento esta na posicao: %d\n", posicao);
    else printf("Esse elemento nao esta no vetor\n");
    return 0;
}