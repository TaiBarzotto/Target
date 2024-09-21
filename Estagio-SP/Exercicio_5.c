#include <stdio.h>

void inverter(char *vetor, int i);

int main(void){
    char *frase = NULL;
    size_t tamanho = 0;

    printf("Digite uma frase: ");
    getline(&frase, &tamanho, stdin); 

    inverter(frase,0);

    return 0;
}

void inverter(char *vetor, int i){
    if (vetor[i+1]=='\0'){
        return;
    }
    inverter(vetor, i+1);
    printf("%c", vetor[i]);
}