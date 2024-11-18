#include <stdio.h>
#include<string.h>
#include "cadastro.h"

void cadastraIndustria() {
    FILE *arquivo = fopen("cadastros.txt", "a");
    if(!arquivo){
    printf("Erro ao abrir o arquivo do cadastros.\n");
    return; 

    }
    char nome[50], cnpj[20], endereco[100];
    printf("Nome da Empresa: ");
    scanf(" %[^\n]s", nome);
    printf("CNPJ: ");
    scanf("%s", cnpj);
    printf("Endereço: ");
    scanf(" %[^\n]s", endereco);

    fprintf(arquivo, "%s;%s;%s\n", nome, cnpj, endereco);
    fclose(arquivo);
    printf("Cadastro realizado com sucesso!\n");
    
}