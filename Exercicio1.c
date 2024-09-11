#include <stdio.h>
#include <stdlib.h>

int fib(int x, int y) {
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;

    int result = fib(x-1, y) + fib(x-2, y);
    
    if (result == y) {
        printf("O valor %d pertence a sequencia de Fibonacci\n", y);
        exit(0); 
    }

    return result;
}

int main() {
    int x, y;
    printf("Digite um valor: ");
    scanf("%d", &x);
    y = x;
    x = x + 10;

    fib(x, y); 
    printf("O valor %d nao pertence a sequencia de Fibonacci\n", y);
    return 0;
}
