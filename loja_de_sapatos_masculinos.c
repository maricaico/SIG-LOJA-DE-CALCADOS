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
#include "usuario.h"
#include "cliente.h"
#include "produto.h"
#include "venda.h"
#include "relatorio.h"


/////
// Assinatura das funções
/////

char tela_principal(void);
void tela_sobre(void);
void tela_equipe(void);


/////
// Programa principal
////


int main(void) {
    char opcao;

    do {
        opcao = tela_principal();
        switch(opcao) {
            case '1':   menuUsuario();
                        break;
            case '2':   menuCliente();
                        break;
            case '3':   menuProduto();
                        break;
            case '4':   menuVenda();
                        break;
            case '5':   menuRelatorio();
                        break;
            case '6':   tela_sobre();
                        tela_equipe();
                        break;
        } 	
    } while (opcao != '0');

    return 0;
}

 
/////
// Funções Módulo Principal



char tela_principal(void) {
    char op;

    system("clear||cls");
    printf("\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***             Universidade Federal do Rio Grande do Norte                 ***\n");
    printf("***                 Centro de Ensino Superior do Seridó                     ***\n");
    printf("***               Departamento de Computação e Tecnologia                   ***\n");
    printf("***                  Disciplina DCT1106 -- Programação                      ***\n");
    printf("***                  Projeto Loja de Sapatos Masculinos                     ***\n");
    printf("***             Developed by @maricaico  -- since Agosto, 2023              ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***       **** SISTEMA DE GESTÃO PARA LOJA DE CALÇADOS MASCULINOS ****      ***\n");
    printf("***                                                                         ***\n");
    printf("***            1. Módulo Usuário                                            ***\n");
    printf("***            2. Módulo Cliente                                            ***\n");
    printf("***            3. Módulo Produto                                            ***\n");
    printf("***            4. Módulo Vendas                                             ***\n");
    printf("***            5. Módulo Relatórios                                         ***\n");
    printf("***            6. Sobre o Programa                                          ***\n");
    printf("***            0. Sair                                                      ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***            Escolha a opção desejada:  ");
    scanf("%c", &op);
    getchar();
    printf("\n");
    printf("\t\t\t>>> ... Aguarde ...\n");
    sleep(1);
    return op;
 }



void tela_sobre(void) {
    system("clear||cls");
    printf("\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***     **** SISTEMA DE GESTÃO PARA LOJA DE CALÇADOS MASCULINOS ****        ***\n");
    printf("***                                                                         ***\n");
    printf("***  Programa desenvolvido para a disciplina DCT1106 - Programação, e será  ***\n");
    printf("***  usado como requisito de conclusão da disciplina. O programa contém as  ***\n");
    printf("***  principais funcionalidades necessárias para o controle, e a gestão de  ***\n");
    printf("***  vendas e de estoque de uma loja de sapatos masculinos.                 ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void tela_equipe(void) {
    system("clear||cls");
    printf("\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***      **** SISTEMA DE GESTÃO PARA LOJA DE CALÇADOS MASCULINOS ****       ***\n");
    printf("***                                                                         ***\n");
    printf("***            Este projeto foi desenvolvido por:                           ***\n");
    printf("***                                                                         ***\n");
    printf("***            Mariana dos Santos Batista Medeiros                          ***\n");
    printf("***            E-mail: mari_caico@yahoo.com.br                              ***\n");
    printf("***            Git: https://github.com/maricaico                            ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}
