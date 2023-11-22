# Trabalho de Álgebra Linear - Autovalores e autovetores

### Introdução: 

Dada uma matriz quadrada de ordem $n$, $A$, estaremos entendendo por _autovalor_ e _autovetor_ de $A$, autovalor e autovetor da transformação linear $T_A:\mathbb{R}^n \rightarrow \mathbb{R}^n$, associada à matriz $A$ em relação à base canônica, isto é, $T_A (v) = A \cdot v$ (na forma coluna). Assim, um autovalor $\lambda \in \mathbb{R}$ de $A$, e um autovetor $v \in \mathbb{R}^n$, são soluções da equação $A \cdot v = \lambda v, v \neq 0$.


### Orientações gerais:
O objetivo deste trabalho é proporcionar aos alunos uma experiência prática na implementação de um algoritmo para a extração de autovalores e autovetores de uma matriz $3x3$. A implementação deve ser realizada em linguagem C, utilizando apenas as bibliotecas padrão `stdio.h` e `stdlib.h`.

1. Utilize somente as bibliotecas padrão stdio.h e stdlib.h.
2. Implemente funções modulares para cálculos específicos, facilitando a compreensão e manutenção do código.
3. Comente o código de forma adequada, explicando o propósito de cada seção e a lógica por trás das operações realizadas.
4. Poderá ser feito em **até** duas pessoas.


### Entrada
Será em formato textual....
```
4 2 0
-1 1 0
0 1 2
```

### Saída
Deverá ser em formato textual...

```
Fulano e Beltrano

Matriz de entrada:
4 2 0
-1 1 0
0 1 2

Matriz dos autovalores:
2 0 0
0 2 0
0 0 3

Autovetores associados a cada autovalor:
2:
[(0,0,1)]

3:
[-2,1,1)]
```
### Exemplo de arquivo esperado
```c
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
```

### Avaliação
A avaliação do algoritmo implementado seguirá um processo automatizado através de um script. Cada dupla de alunos deverá enviar um arquivo em linguagem C (.c) contendo todas as funções utilizadas no algoritmo. Cada função deve ser devidamente documentada, explicando o propósito de sua chamada e o que é realizado em seu contexto. O arquivo .c será compilado usando o comando padrão 

```bash
gcc -o nomedosalunos nomedosalunos.c'
```

Após a compilação, o método será executado da seguinte maneira, utilizando um arquivo de entrada (input.txt):
```bash
./nomedosalunos input.txt
```

A saída gerada pelo programa deverá seguir o formato especificado anteriormente. O script de avaliação verificará se a saída está no formato correto e se os valores apresentados são os esperados.
Caso ocorram erros de compilação devido a falhas lógicas no código ou outros problemas, o envio não será considerado.

