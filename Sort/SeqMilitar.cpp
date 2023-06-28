#include <stdio.h>

void subsequenciasIterativo(int n) {
    int i, j;
    int count = 1 << n; // número total de subsequências é 2^n

    for (i = 0; i < count; i++) {
        for (j = 0; j < n; j++) {
            if (i & (1 << j)) {
                printf("%d ", j + 1);
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Subsequências em ordem militar:\n");
    subsequenciasIterativo(n);
    return 0;
}
