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
#include "cliente.h"


/////
////// Funções do Módulo Cliente
//////

void menuCliente(void) {
    char opcao;
    
    do {
        opcao = tela_menu_cliente();
        switch(opcao) {
            case '1': 	tela_cadastrar_cliente();
                        break;
            case '2': 	tela_pesquisar_cliente();
                        break;
            case '3': 	tela_alterar_cliente();
                        break;
            case '4': 	tela_excluir_cliente();
                        break;
        } 		
    } while (opcao != '0');
}


char tela_menu_cliente(void) {
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
    printf("***                |        MENU CLIENTE           |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            1. Cadastrar Cliente                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            2. Pesquisar Cliente                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            3. Alterar Cliente                                           ***\n");
    printf("***                                                                         ***\n");
    printf("***            4. Excluir Cliente                                           ***\n");
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


void tela_cadastrar_cliente(void) {
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
    printf("***                |      CADASTRAR CLIENTE        |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            CPF (Apenas Números):                                        ***\n");
    printf("***                                                                         ***\n");
    printf("***            Nome Completo:                                               ***\n");
    printf("***                                                                         ***\n");
    printf("***            Email:                                                       ***\n");
    printf("***                                                                         ***\n");
    printf("***            Data de Nascimento: (dd/mm/aaaa)                             ***\n");
    printf("***                                                                         ***\n");
    printf("***            Telefone (Apenas números):                                   ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}


void tela_pesquisar_cliente(void) {
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
    printf("***                |      PESQUISAR CLIENTE        |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            Digite o CPF (Apenas Números):                               ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}


void tela_alterar_cliente(void) {
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
    printf("***                |      ALTERAR CLIENTE          |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            Digite o CPF (Apenas Números):                               ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}


void tela_excluir_cliente(void) {
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
    printf("***                |       EXCLUIR CLIENTE         |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                Informe o CPF (apenas números):                          ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}
