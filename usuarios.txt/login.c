#include <stdio.h>
#include<string.h>
#include "login.h"


int autenticar() {
    char usuario[50], senha[50];
    char usuarioDigitado[50], senhaDigitada[50];
    FILE * arquivo = fopen("usuarios.txt", "r");

    if(!arquivo) {
        printf("Erro ao abrir o arquivo de usuários.\n");
        return 0;
    }
    printf("Usuários: ");
    scanf("%s", usuarioDigitado);
    printf("Senha: ");
    scanf("%s", senhaDigitada);

    while (fscanf(arquivo, "%[^;];%s\n", usuario, senha) !=EOF){
        if (strcmp(usuario, usuarioDigitado) == 0 && strcmp(senha, senhaDigitada) == 0) {
            fclose(arquivo);
            printf("Login bem-sucedido!\n");
            return 1;
        }
        
    }
    fclose(arquivo);
    printf("Usuário ou senha incorretos.\n");
    return 0;   
}
