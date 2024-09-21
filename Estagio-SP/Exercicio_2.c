#include <stdio.h>

int fibonacci(int n, int a, int b);

int main(void) {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (fibonacci(num,0,1)) {
        printf("%d pertence a sequencia de Fibonacci.\n", num);
    } else {
        printf("%d nao pertence a sequencia de Fibonacci.\n", num);
    }

    return 0;
}

int fibonacci(int n, int a, int b){
    int temp;
    
    if (n==0) return 1; 

    if(b>=n) return (b==n); 

    temp = b;
    b += a; 
    a = temp;

    return fibonacci(n,a,b);
}