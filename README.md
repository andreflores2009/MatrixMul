Exemplo de um teste de regressão de multiplicação de matrizes na linguagem C:


Após inserir um teste no código, vamos verificar se isso não causou algum tipo de problema ou alteração indesejada.

#include <stdio.h>
#include <stdbool.h>

// Função para multiplicar duas matrizes e armazenar o resultado em 'result'
void multiply_matrices(int matrix1[][2], int matrix2[][2], int result[][2]) {
    // Dimensões das matrizes
    int rows1 = 2, cols1 = 2; // Para a matriz1
    int rows2 = 2, cols2 = 2; // Para a matriz2

    // Multiplicação das matrizes
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0; // Inicializa o elemento resultante como zero
            for (int k = 0; k < cols1; k++) {
                // Calcula o elemento (i, j) da matriz resultante
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

// Função para comparar duas matrizes
bool compare_matrices(int expected[][2], int actual[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (expected[i][j] != actual[i][j]) {
                return false; // As matrizes são diferentes
            }
        }
    }
    return true; // As matrizes são iguais
}

int main() {
    // Matrizes de exemplo para teste
    int matrix_a[2][2] = {{1, 2}, {3, 4}};
    int matrix_b[2][2] = {{2, 0}, {1, 2}};
    int expected_result[2][2] = {{4, 4}, {10, 8}}; // Resultado esperado da multiplicação

    // Matriz para armazenar o resultado da multiplicação
    int result[2][2];

    // Chama a função de multiplicação
    multiply_matrices(matrix_a, matrix_b, result);

    // Compara o resultado obtido com o resultado esperado
    if (compare_matrices(expected_result, result)) {
        printf("Teste de regressao passou com sucesso!\n");
    } else {
        printf("Teste de regressao falhou.\n");
    }

    return 0;
}


É um exemplo muito simples, mas que nos dá a ideia sobre teste de regressão.


Um teste de regressão é usado para garantir que alterações recentes no código-fonte não afetem negativamente o comportamento existente do software. Quando aplicamos um teste de regressão após uma modificação no código, estamos verificando se as alterações introduzidas introduziram novos defeitos ou se afetaram áreas do software que funcionavam corretamente anteriormente.

No exemplo que discutimos:

Alteração no Código: Suponhamos que o código original para a multiplicação de matrizes tenha sido modificado ou atualizado.
Execução do Teste de Regressão: Após essa alteração, executamos o teste de regressão para verificar se o resultado da multiplicação permanece o mesmo em comparação com o resultado esperado antes da modificação.
Comparação dos Resultados: A função compare_matrices é usada para comparar o resultado obtido após a alteração (result) com o resultado esperado (expected_result).
Verificação do Comportamento Esperado: Se os resultados forem idênticos, o teste de regressão passa, indicando que a modificação não introduziu novos problemas na funcionalidade testada.
Detecção de Regressão: Se os resultados forem diferentes, isso indica uma regressão, significando que a modificação introduziu um novo problema ou alterou o comportamento esperado do código.
Portanto, esse teste é considerado um teste de regressão porque estamos verificando se a alteração recente introduziu regressão ou problemas em partes do código que anteriormente funcionavam corretamente.

Os testes de regressão são fundamentais para garantir a estabilidade e a confiabilidade do software após alterações no código. Eles ajudam a identificar problemas rapidamente e garantir que o software continue a funcionar conforme o esperado, mesmo após atualizações ou modificações.






