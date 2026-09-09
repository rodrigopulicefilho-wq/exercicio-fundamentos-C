#include <stdio.h>

int main() {
    int contador = 0;
    int comando;

    printf("--- Contador Interativo ---\n");
    printf("Comandos: [1] Contar | [2] Parar\n");

    while (1) { // Loop infinito (1 é verdadeiro em C)
        printf("Digite o comando: ");
        
        // Lê o número inteiro digitado
        if (scanf("%d", &comando) != 1) {
            // Caso o usuário digite uma letra, limpamos o buffer
            while (getchar() != '\n');
            printf("Por favor, digite apenas numeros.\n");
            continue;
        }

        if (comando == 1) {
            contador++;
            printf("Contagem atual: %d\n", contador);
        } 
        else if (comando == 2) {
            printf("Finalizando o contador...\n");
            break; // Sai do loop
        } 
        else {
            printf("Opcao invalida! Use 1 para contar ou 2 para parar.\n");
        }
    }

    printf("--- Resultado Final: %d ---\n", contador);

    return 0;
}
