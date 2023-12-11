////////////////////////////////////////////////////////////////////////////////////////////
///////////                                                                         ////////
///////////             Universidade Federal do Rio Grande do Norte                 ////////
///////////                 Centro de Ensino Superior do Seridó                     ////////
///////////               Departamento de Computação e Tecnologia                   ////////
///////////                  Disciplina DCT1106 -- Programação                      ////////
///////////                  Projeto Loja de Sapatos Masculinos                     ////////
///////////             Developed by @maricaico  -- since Agosto, 2023              ////////
///////////                                                                         ////////
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "relatorio.h"
#include "cliente.h"
#include "usuario.h"
#include "produto.h"
#include "venda.h"

////
////// Funções do módulo Relatório
////

void listar_venda_cpf(Venda*);



void menuRelatorio(void) {
    char opcao;
    

    do {
        opcao = tela_menu_relatorio();
        switch(opcao) {
            case '1':   tela_relatorio_usuario();
                        printf("\n");
                        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
                        getchar();
                        break;
            case '2':   tela_relatorio_cliente();
                        printf("\n");
                        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
                        getchar();
                        break;
            case '3':   tela_relatorio_produto();
                        printf("\n");
                        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
                        getchar();
                        break;
            case '4':   tela_relatorio_venda();
                        break;
          } 		
    } while (opcao != '0');
}


char tela_menu_relatorio(void) {
    char op;

    system("clear||cls");
    printf("\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***  ____________________________________________________________________   ***\n");
    printf("*** |                                                                    |  ***\n");
    printf("*** |     SISTEMA DE GESTÃO PARA LOJA DE SAPATOS DE SAPATOS MASCULINOS   |  ***\n");
    printf("*** |____________________________________________________________________|  ***\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***                 _______________________________                         ***\n");
    printf("***                |                               |                        ***\n");
    printf("***                |        MENU RELATÓRIOS        |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            1. Relatório de Usuários                                     ***\n");
    printf("***                                                                         ***\n");
    printf("***            2. Relatório de Clientes                                     ***\n");
    printf("***                                                                         ***\n");
    printf("***            3. Relatório de Produtos                                     ***\n");
    printf("***                                                                         ***\n");
    printf("***            4. Relatório de Vendas                                       ***\n");
    printf("***                                                                         ***\n");
    printf("***            0. Voltar ao Menu Anterior                                   ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***            Escolha a opção desejada:  ");
    scanf("%c", &op);
    getchar();
    printf("\n");
    printf("\t\t\t>>> ... Aguarde ...\n");
    sleep(1);
    return op;
 }



void tela_relatorio_usuario(void){
    char opcao;

    do {
        opcao = relatorio_usuario();
        switch(opcao) {
            case '1':   lista_usuario();
                        printf("\n");
                        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
                        getchar();
                        break;
            case '2':   lista_status('i');
                        printf("\n");
                        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
                        getchar();
                        break;
            case '3':   lista_status('a');
                        printf("\n");
                        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
                        getchar();
                        break;
          } 		
    } while (opcao != '0');
}

char relatorio_usuario(void) {
    char op;

    system("clear||cls");
    printf("\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***  ____________________________________________________________________   ***\n");
    printf("*** |                                                                    |  ***\n");
    printf("*** |     SISTEMA DE GESTÃO PARA LOJA DE SAPATOS DE SAPATOS MASCULINOS   |  ***\n");
    printf("*** |____________________________________________________________________|  ***\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***                 _______________________________                         ***\n");
    printf("***                |                               |                        ***\n");
    printf("***                |     RELATÓRIO DE USUÁRIOS     |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            1. Relatório por CPF, Nome e Fone                            ***\n");
    printf("***                                                                         ***\n");
    printf("***            2. Relatório por Status Excluído                             ***\n");
    printf("***                                                                         ***\n");
    printf("***            3. Relatório por Status Ativo                                ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            0. Voltar ao Menu Anterior                                   ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***            Escolha a opção desejada:  ");
    scanf("%c", &op);
    getchar();
    printf("\n");
    printf("\t\t\t>>> ... Aguarde ...\n");
    sleep(1);
    return op;

}



void lista_usuario(void){

    FILE* fp;
    Usuario* usuario;
    printf("\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***  ____________________________________________________________________   ***\n");
    printf("*** |                                                                    |  ***\n");
    printf("*** |     SISTEMA DE GESTÃO PARA LOJA DE SAPATOS DE SAPATOS MASCULINOS   |  ***\n");
    printf("*** |____________________________________________________________________|  ***\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***                 _______________________________                         ***\n");
    printf("***                |                               |                        ***\n");
    printf("***                |RELATORIO POR CPF, NOME E FONE |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("\n");
    usuario = (Usuario*) malloc(sizeof(Usuario));
    fp = fopen("usuarios.dat", "rb");
    if (fp == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
    printf("%-12s", "CPF");
    printf("|");
    printf("%-51s", "Nome do Usuário");
    printf("|");
    printf("%-12s", "Telefone");
    printf("\n");
    printf("%13s", "|");
    printf("%51s", "|");
    printf("\n");
    while (fread(usuario, sizeof(Usuario), 1, fp)) { 
        if (usuario->status != 'i') {
            printf("%-12s", usuario->cpf);
            printf("|");
            printf("%-50s", usuario->nome);
            printf("|");
            printf("%-12s", usuario->fone);
            printf("\n");
        }
    }
    fclose(fp);
    free(usuario);
    getchar();
 }


void lista_status(char st) {  
    Usuario* usuario;
    FILE* fp;

    system("clear||cls");
    printf("\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***  ____________________________________________________________________   ***\n");
    printf("*** |                                                                    |  ***\n");
    printf("*** |     SISTEMA DE GESTÃO PARA LOJA DE SAPATOS DE SAPATOS MASCULINOS   |  ***\n");
    printf("*** |____________________________________________________________________|  ***\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***                 _______________________________                         ***\n");
    printf("***                |                               |                        ***\n");
    printf("***                |     RELATÓRIO POR STATUS: %c   |                        ***\n", st);
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("\n");
    getchar();
    usuario = (Usuario*) malloc(sizeof(Usuario));
    fp = fopen("usuarios.dat", "rb");
    if (fp == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
    printf("%-12s", "CPF");
    printf("|");
    printf("%-51s", "Nome do Usuário");
    printf("|");
    printf("%-12s", "Status");
    printf("\n");
    printf("%13s", "|");
    printf("%51s", "|");
    printf("\n");
    while (fread(usuario, sizeof(Usuario), 1, fp)) { 
        if (usuario->status == st) {
            printf("%-12s", usuario->cpf);
            printf("|");
            printf("%-50s", usuario->nome);
            printf("|");
            printf("%c", usuario->status);
            printf("\n");
        }
    }
    fclose(fp);
    free(usuario);
    getchar();
}



void tela_relatorio_cliente(void){
    char opcao;

    do {
        opcao = relatorio_cliente();
        switch(opcao) {
            case '1':   lista_cliente();
                        printf("\n");
                        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
                        getchar();
                        break;
            case '2':   lista_status_cl('i');
                        printf("\n");
                        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
                        getchar();
                        break;
            case '3':   lista_status_cl('a');
                        printf("\n");
                        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
                        getchar();
                        break;
            case '4':   lista_alfa();
                        break;
          } 		
    } while (opcao != '0');
}



char relatorio_cliente(void) {
    char op;

    system("clear||cls");
    printf("\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***  ____________________________________________________________________   ***\n");
    printf("*** |                                                                    |  ***\n");
    printf("*** |     SISTEMA DE GESTÃO PARA LOJA DE SAPATOS DE SAPATOS MASCULINOS   |  ***\n");
    printf("*** |____________________________________________________________________|  ***\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***                 _______________________________                         ***\n");
    printf("***                |                               |                        ***\n");
    printf("***                |     RELATÓRIO DE CLIENTES     |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            1. Relatório por CPF, Nome e Fone                            ***\n");
    printf("***                                                                         ***\n");
    printf("***            2. Relatório por Status Excluído                             ***\n");
    printf("***                                                                         ***\n");
    printf("***            3. Relatório por Status Ativo                                ***\n");
    printf("***                                                                         ***\n");
    printf("***            4. Relatório por Ordem Alfabética                            ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            0. Voltar ao Menu Anterior                                   ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***            Escolha a opção desejada:  ");
    scanf("%c", &op);
    getchar();
    printf("\n");
    printf("\t\t\t>>> ... Aguarde ...\n");
    sleep(1);
    return op;

}


void lista_cliente(void) {
    FILE* fp;
    Cliente* cliente;
    printf("\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***  ____________________________________________________________________   ***\n");
    printf("*** |                                                                    |  ***\n");
    printf("*** |     SISTEMA DE GESTÃO PARA LOJA DE SAPATOS DE SAPATOS MASCULINOS   |  ***\n");
    printf("*** |____________________________________________________________________|  ***\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***                 _______________________________                         ***\n");
    printf("***                |                               |                        ***\n");
    printf("***                |      RELATÓRIO DE CLIENTES    |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("\n");
    cliente = (Cliente*) malloc(sizeof(Cliente));
    fp = fopen("clientes.dat", "rb");
    if (fp == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
    printf("%-12s", "CPF");
    printf("|");
    printf("%-51s", "Nome do Usuário");
    printf("|");
    printf("%-12s", "Telefone");
    printf("\n");
    printf("%13s", "|");
    printf("%51s", "|");
    printf("\n");
    while (fread(cliente, sizeof(Cliente), 1, fp)) { 
        if (cliente->status != 'i') {
            printf("%-12s", cliente->cpf);
            printf("|");
            printf("%-50s", cliente->nome);
            printf("|");
            printf("%-12s", cliente->fone);
            printf("\n");
        }
    }
    fclose(fp);
    free(cliente);
    getchar();
 }


 void lista_status_cl(char st) {  //Cód desenvolvida com auxílio do Prof Flavius
    Cliente* cliente;
    FILE* fp;

    system("clear||cls");
    printf("\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***  ____________________________________________________________________   ***\n");
    printf("*** |                                                                    |  ***\n");
    printf("*** |     SISTEMA DE GESTÃO PARA LOJA DE SAPATOS DE SAPATOS MASCULINOS   |  ***\n");
    printf("*** |____________________________________________________________________|  ***\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***                 _______________________________                         ***\n");
    printf("***                |                               |                        ***\n");
    printf("***                |     RELATÓRIO POR STATUS: %c   |                        ***\n", st);
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("\n");
    getchar();
    cliente = (Cliente*) malloc(sizeof(Cliente));
    fp = fopen("clientes.dat", "rb");
    if (fp == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
    printf("%-12s", "CPF");
    printf("|");
    printf("%-50s", "Nome do Cliente");
    printf("|");
    printf("%-12s", "Status");
    printf("\n");
    printf("%13s", "|");
    printf("%51s", "|");
    printf("\n");
    while (fread(cliente, sizeof(Cliente), 1, fp)) { 
        if (cliente->status == st) {
            printf("%-12s", cliente->cpf);
            printf("|");
            printf("%-50s", cliente->nome);
            printf("|");
            printf("%c", cliente->status);
            printf("\n");
        }
    }
    fclose(fp);
    free(cliente);
    getchar();
}


void lista_alfa(void) {  //Cód inspirado em https://github.com/AronSilva04
    FILE* fp = fopen("clientes.dat", "rb");
    Cliente* novo_cli;
    Cliente* lista;
    system("clear||cls");
    if (fp == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
    printf("\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***  ____________________________________________________________________   ***\n");
    printf("*** |                                                                    |  ***\n");
    printf("*** |     SISTEMA DE GESTÃO PARA LOJA DE SAPATOS DE SAPATOS MASCULINOS   |  ***\n");
    printf("*** |____________________________________________________________________|  ***\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***                 _______________________________                         ***\n");
    printf("***                |                               |                        ***\n");
    printf("***                |RELATÓRIO EM ORDEM ALFABÉTICA  |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("\n");
    printf("\n = Lista de Clientes em Ordem Alfabética = \n");
    printf("\n");
    printf("%-12s", "CPF");
    printf("|");
    printf("%-30s", "Nome do Cliente");
    printf("\n");
    printf("%13s", "|");
    printf("\n");
    lista = NULL;
    novo_cli = (Cliente*)malloc(sizeof(Cliente));
    if (novo_cli == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao alocar a memória!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
    while(fread(novo_cli, sizeof(Cliente), 1, fp) == 1) {
        novo_cli->prox = NULL;
        if ((lista == NULL) || (strcmp(novo_cli->nome, lista->nome) < 0)) {
            novo_cli->prox = lista;
            lista = novo_cli;
        } else {
            Cliente* ant = lista;
            Cliente* atual = lista->prox;
            while ((atual != NULL) && strcmp(atual->nome, novo_cli->nome) < 0) {
                ant = atual;
                atual = atual->prox;
            }
            ant->prox = novo_cli;
            novo_cli->prox = atual;
        }
        novo_cli = (Cliente*)malloc(sizeof(Cliente));
        if (novo_cli == NULL) {
            printf("\t\t\t>>> Processando as informações...\n");
            sleep(1);
            printf("\t\t\t>>> Houve um erro ao alocar a memória!\n");
            printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
            getchar();
    }
  }
  fclose(fp);
  novo_cli = lista;
  while(novo_cli != NULL) {
    printf("%-12s", novo_cli->cpf);
    printf("|");
    printf("%-30s", novo_cli->nome);
    printf("\n");
    novo_cli = novo_cli->prox;
  }
  novo_cli = lista;
  while (lista != NULL) {
    lista = lista->prox;
    free(novo_cli);
    novo_cli = lista;
  }
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
    
 



void tela_relatorio_produto(void){
    char opcao;

    do {
        opcao = relatorio_produto();
        switch(opcao) {
            case '1':   lista_produto();
                        printf("\n");
                        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
                        getchar();
                        break;
            case '2':   lista_status_pr('e');
                        printf("\n");
                        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
                        getchar();
                        break;
            case '3':   lista_status_pr('c');
                        printf("\n");
                        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
                        getchar();
                        break;
          } 		
    } while (opcao != '0');
}



char relatorio_produto(void) {
    char op;

    system("clear||cls");
    printf("\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***  ____________________________________________________________________   ***\n");
    printf("*** |                                                                    |  ***\n");
    printf("*** |     SISTEMA DE GESTÃO PARA LOJA DE SAPATOS DE SAPATOS MASCULINOS   |  ***\n");
    printf("*** |____________________________________________________________________|  ***\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***                 _______________________________                         ***\n");
    printf("***                |                               |                        ***\n");
    printf("***                |     RELATÓRIO DE PRODUTOS     |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            1. Relatório por Cód, Descr e Quant                          ***\n");
    printf("***                                                                         ***\n");
    printf("***            2. Relatório por Status Excluído                             ***\n");
    printf("***                                                                         ***\n");
    printf("***            3. Relatório por Status Ativo                                ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            0. Voltar ao Menu Anterior                                   ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***            Escolha a opção desejada:  ");
    scanf("%c", &op);
    getchar();
    printf("\n");
    printf("\t\t\t>>> ... Aguarde ...\n");
    sleep(1);
    return op;

}

void lista_produto(void) {
    FILE* fp;
    Produto* produto;
    printf("\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***  ____________________________________________________________________   ***\n");
    printf("*** |                                                                    |  ***\n");
    printf("*** |     SISTEMA DE GESTÃO PARA LOJA DE SAPATOS DE SAPATOS MASCULINOS   |  ***\n");
    printf("*** |____________________________________________________________________|  ***\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***                 _______________________________                         ***\n");
    printf("***                |                               |                        ***\n");
    printf("***                |      RELATÓRIO DE PRODUTOS    |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    getchar();
    produto = (Produto*) malloc(sizeof(Produto));
    fp = fopen("produtos.dat", "rb");
    if (fp == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
    printf("%-14s", "Código");
    printf("|");
    printf("%-52s", "Descrição do produto");
    printf("|");
    printf("%-12s", "Quantidade");
    printf("\n");
    printf("%14s", "|");
    printf("%51s", "|");
    printf("\n");
    while (fread(produto, sizeof(Produto), 1, fp)) { 
        if (produto->status != 'e') {
            printf("%-13ld", produto->cod);
            printf("|");
            printf("%-50s", produto->descr);
            printf("|");
            printf("%-13d", produto->quant);
            printf("\n");
        }
    }
    fclose(fp);
    free(produto);
    getchar();
}




void lista_status_pr(char st) {  //Cód desenvolvida com auxílio do Prof Flavius
    Produto* produto;
    FILE* fp;
    system("clear||cls");
    printf("\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***  ____________________________________________________________________   ***\n");
    printf("*** |                                                                    |  ***\n");
    printf("*** |     SISTEMA DE GESTÃO PARA LOJA DE SAPATOS DE SAPATOS MASCULINOS   |  ***\n");
    printf("*** |____________________________________________________________________|  ***\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***                 _______________________________                         ***\n");
    printf("***                |                               |                        ***\n");
    printf("***                |     RELATÓRIO POR STATUS: %c   |                        ***\n", st);
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("\n");
    getchar();
    produto = (Produto*) malloc(sizeof(Produto));
    fp = fopen("produtos.dat", "rb");
    if (fp == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
   printf("%-14s", "Código");
    printf("|");
    printf("%-52s", "Descrição do produto");
    printf("|");
    printf("%-12s", "Status");
    printf("\n");
    printf("%14s", "|");
    printf("%51s", "|");
    printf("\n");
    while (fread(produto, sizeof(Produto), 1, fp)) { 
        if (produto->status == st) {
            printf("%-13ld", produto->cod);
            printf("|");
            printf("%-50s", produto->descr);
            printf("|");
            printf("%-13c", produto->status);
            printf("\n");
        }
    }
    fclose(fp);
    free(produto);
    getchar();
}



void tela_relatorio_venda(void){
    char opcao;
    Venda* venda_x;

    do {
        opcao = relatorio_venda();
        switch(opcao) {
            case '1':   lista_venda();
                        printf("\n");
                        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
                        getchar();
                        break;
            case '2':   listar_venda_cpf(venda_x);
                        printf("\n");
                        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
                        getchar();
                        break;
        } 		
    } while (opcao != '0');
}


char relatorio_venda(void) {
    char op;

    system("clear||cls");
    printf("\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***  ____________________________________________________________________   ***\n");
    printf("*** |                                                                    |  ***\n");
    printf("*** |     SISTEMA DE GESTÃO PARA LOJA DE SAPATOS DE SAPATOS MASCULINOS   |  ***\n");
    printf("*** |____________________________________________________________________|  ***\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***                 _______________________________                         ***\n");
    printf("***                |                               |                        ***\n");
    printf("***                |     RELATÓRIO DE VENDAS       |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            1. Relatório por Cupom, Cod de Barras e CPF                  ***\n");
    printf("***                                                                         ***\n");
    printf("***            2. Relatório Vendas por CPF                                  ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            0. Voltar ao Menu Anterior                                   ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***            Escolha a opção desejada:  ");
    scanf("%c", &op);
    getchar();
    printf("\n");
    printf("\t\t\t>>> ... Aguarde ...\n");
    sleep(1);
    return op;

}


void lista_venda(void) {
    FILE* fp;
    Venda* venda;
    system("clear||cls");
    printf("\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***  ____________________________________________________________________   ***\n");
    printf("*** |                                                                    |  ***\n");
    printf("*** |     SISTEMA DE GESTÃO PARA LOJA DE SAPATOS DE SAPATOS MASCULINOS   |  ***\n");
    printf("*** |____________________________________________________________________|  ***\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***                 _______________________________                         ***\n");
    printf("***                |                               |                        ***\n");
    printf("***                |      RELATÓRIO DE VENDAS      |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    getchar();
    venda = (Venda*) malloc(sizeof(Venda));
    fp = fopen("vendas.dat", "rb");
    if (fp == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
    printf("%-13s", "Cupom");
    printf("|");
    printf("%-51s", "Cód de Barras");
    printf("|");
    printf("%-13s", "CPF");
    printf("\n");
    printf("%14s", "|");
    printf("%51s", "|");
    printf("\n");
    while (fread(venda, sizeof(Venda), 1, fp)) { 
        if (venda->status != 'e') {
            printf("%-13s", venda->cupom);
            printf("|");
            printf("%-50ld", venda->cod);
            printf("|");
            printf("%-13s", venda->cpf);
            printf("\n");
        }
    }
    fclose(fp);
    free(venda);
    getchar();
}


void listar_venda_cpf(Venda* venda) {  //Cód corrigido com base no Cód de https://github.com/AronSilva04
    FILE* fp;
    char* nome_cliente;
    char* nome_produto;
    char cpf[12];
    system("clear||cls");
    printf("\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***  ____________________________________________________________________   ***\n");
    printf("*** |                                                                    |  ***\n");
    printf("*** |     SISTEMA DE GESTÃO PARA LOJA DE SAPATOS DE SAPATOS MASCULINOS   |  ***\n");
    printf("*** |____________________________________________________________________|  ***\n");
    printf("***                                                                         ***\n");
    printf("***  =#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#   ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***                 _______________________________                         ***\n");
    printf("***                |                               |                        ***\n");
    printf("***                |  Listagem de vendas por CPF:  |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***       Digite o CPF do cliente que deseja consultar: ");
    fgets(cpf, 12, stdin);
    printf("\n");
    getchar();
    venda = (Venda*) malloc(sizeof(Venda));
    fp = fopen("vendas.dat", "rb");
    if (fp == NULL) {
        printf("\t\t\t*** Processando as informações...\n");
        sleep(1);
        printf("\t\t\t*** Ops! Erro na abertura do arquivo!\n");
        printf("\t\t\t*** Não é possível continuar...\n");
        printf("\t\t\t*** Tecle <ENTER> para voltar...\n");
        getchar();
    }
    printf("%-7s", "Cupom");
    printf("|");
    printf("%-14s", "Cód de Barras");
    printf("|");
    printf("%-19s", "Produto");
    printf("|");
    printf("%-19s", "Cliente");
    printf("|");
    printf("%-12s", "Valor");
    printf("|");
    printf("%-10s", "Data da Venda");
    printf("\n");
    printf("%8s", "|");
    printf("%14s", "|");
    printf("%20s", "|");
    printf("%20s", "|");
    printf("%13s", "|");
    printf("\n");
    while (fread(venda, sizeof(Venda), 1, fp) == 1){
        if (strcmp(venda->cpf, cpf) == 0){
            nome_cliente = get_cliente(cpf);
            nome_produto = get_prod(venda->cod);
            printf("%-8s", venda->cupom);
            printf("%-15ld", venda->cod);
            printf("%-20s", nome_produto);
            printf("%-20s", nome_cliente);
            printf("R$ %-10.2f", venda->preco);
            printf("%-17s", venda->dataHora);
            printf("\n");
        }
    }
    fclose(fp);
    free(venda);
}


char* get_cliente(const char* cpf){  //Função inspirada no Cód de https://github.com/AronSilva04
    Cliente cliente;
    FILE* fp = fopen("clientes.dat", "rb");

   if (fp == NULL) {
        printf("\t\t\t*** Processando as informações...\n");
        sleep(1);
        printf("\t\t\t*** Ops! Erro na abertura do arquivo!\n");
        printf("\t\t\t*** Não é possível continuar...\n");
        printf("\t\t\t*** Tecle <ENTER> para voltar...\n");
        getchar();
    }
    while (fread(&cliente, sizeof(cliente), 1, fp) == 1){
        if(strcmp(cliente.cpf, cpf) == 0){
            char* x = (char*) malloc(strlen(cliente.nome) + 1);
            if (x == NULL){
                printf("Ocorreu um erro!\n");
                fclose(fp);
                return x;
            }
            strcpy(x, cliente.nome);
            fclose(fp);
            return x;
    }
  }
  fclose(fp);
  return NULL;
}






