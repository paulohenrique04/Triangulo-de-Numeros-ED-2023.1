/*
Dado um vetor de inteiros vet, imprima um triângulo de números tal que:

    na base do triângulo estejam todos os elementos do vetor original;
    o número de elementos em cada nível acima da base é um a menos que no nível inferior;
    e cada elemento no i-ésimo nível é a soma de dois elementos consecutivos do nível inferior.

Por exemplo, se fornecermos como entrada o vetor vet={1,2,3,4,5}, a saída do seu programa deve ser o seguinte triângulo:

48
20 28 
8 12 16
3 5 7 9
1 2 3 4 5

Implemente uma função recursiva que recebe um vetor de inteiros e imprima o triângulo de números.
*/

#include <stdio.h>
#include <string.h>


void imprimir_triangulo(int vet[], int n){
    if(n == 1) {
        printf("%d", vet[0]);
    } else {
        int v[n-1];
        for(int i = 0; i < n-1; i++) {
            v[i] = vet[i] + vet[i+1];
        }
        imprimir_triangulo(v, n-1);
        printf("\n");
        for(int i = 0; i < n; i++) {
            if(i == n-1) {
                printf("%d", vet[i]);
            } else {
                printf("%d ", vet[i]);
            }
        }
    }
}


int main(){
    int n;
    scanf("%d", &n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    imprimir_triangulo(vetor, n);
}