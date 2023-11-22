// Trabalho feito pelo Fulano e Beltrano

#include <stdio.h>

// Função para calcular a potência de um número
// Parâmetros: base (base da potência), expoente (expoente da potência)
// Retorna: o resultado da potência
int calcularPotencia(int base, int expoente) {
    // Inicializar o resultado como 1, pois qualquer número elevado a 0 é 1
    int resultado = 1;

    // Iterar até o expoente se tornar 0
    while (expoente > 0) {
        // Multiplicar a base pelo resultado atual
        resultado *= base;

        // Decrementar o expoente
        expoente--;
    }

    // Retornar o resultado final
    return resultado;
}

int main() {
    // Variáveis para armazenar a base e o expoente
    int base, expoente;

    // Solicitar a entrada do usuário
    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    // Calcular e exibir a potência
    int resultado = calcularPotencia(base, expoente);
    printf("%d elevado a %d é igual a %d\n", base, expoente, resultado);

    return 0;
}
