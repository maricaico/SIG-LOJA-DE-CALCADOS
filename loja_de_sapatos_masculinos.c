#include <stdio.h>

/////
// Assinatura das funções
void tela_principal(void);
void tela_sobre(void);
void tela_equipe(void);

/////
// Programa principal
int main(void) {
    tela_principal();
    tela_sobre();
    tela_equipe();
    return 0;
}


/////
// Funções

void tela_principal(void) {
    printf("\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***             Universidade Federal do Rio Grande do Norte                 ***\n");
    printf("***                 Centro de Ensino Superior do Seridó                     ***\n");
    printf("***               Departamento de Computação e Tecnologia                   ***\n");
    printf("***                  Disciplina DCT1106 -- Programação                      ***\n");
    printf("***                  Projeto Loja de Sapatos Masculinos                     ***\n");
    printf("***             Developed by @maricaico  -- since Ago, 2023                 ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***                                                                         ***\n");
    printf("***            = = = = = Sistema de Gestão Escolar = = = = =                ***\n");
    printf("***                                                                         ***\n");
    printf("***            1. Cadastro                                                  ***\n");
    printf("***            2. Vendas                                                    ***\n");
    printf("***            3. Estoque                                                   ***\n");
    printf("***            4. Relatórios                                                ***\n");
    printf("***            0. Sair                                                      ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("\n");
}


void tela_sobre(void) {
    printf("\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("///                                                                         ///\n");
    printf("///     **** SISTEMA DE GESTÃO PARA LOJA DE CALÇADOS MASCULINOS ****        ///\n");
    printf("///                                                                         ///\n");
    printf("///  Programa desenvolvido para a disciplina DCT1106 - Programação, e será  ///\n");
    printf("///  usado como requisito de conclusão da disciplina. O programa contém as  ///\n");
    printf("///  principais funcionalidades necessárias para o controle  e a gestão de  ///\n");
    printf("///  vendas e de estoque de uma loja de sapatos masculinos.                 ///\n");
    printf("///                                                                         ///\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("\n");
}


void tela_equipe(void) {
    printf("\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("///                                                                         ///\n");
    printf("///      **** SISTEMA DE GESTÃO PARA LOJA DE CALÇADOS MASCULINOS ****       ///\n");
    printf("///                                                                         ///\n");
    printf("///            Este projeto foi desenvolvido por:                           ///\n");
    printf("///                                                                         ///\n");
    printf("///            Mariana dos Santos Batista Medeiros                          ///\n");
    printf("///            E-mail: mari_caico@yahoo.com.br                              ///\n");
    printf("///            Git: https://github.com/maricaico                            ///\n");
    printf("///                                                                         ///\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("\n");
} 
