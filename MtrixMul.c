#include <stdio.h>

// Função para multiplicar duas matrizes e armazenar o resultado em 'result'
void multiply_matrices(int matrix1[][2], int matrix2[][2], int result[][2]) {
    // Dimensões das matrizes
    int rows1 = 2, cols1 = 2; // Para a matriz1
    int rows2 = 2, cols2 = 2; // Para a matriz2

    // Verifica se as dimensões são compatíveis para multiplicação
    if (cols1 != rows2) {
        printf("Erro: O número de colunas da primeira matriz não é igual ao número de linhas da segunda matriz.\n");
        return;
    }

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

int main() {
    // Matrizes de exemplo
    int matrix_a[2][2] = {{1, 2}, {3, 4}};
    int matrix_b[2][2] = {{2, 0}, {1, 2}};
    int result[2][2];

    // Multiplica as matrizes
    multiply_matrices(matrix_a, matrix_b, result);

    // Imprime o resultado da multiplicação
    printf("Resultado da multiplicacao:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
