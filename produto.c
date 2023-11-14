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

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "produto.h"
#include "util.h"


////
////// Funções do Módulo Produto
//////


void ler_cod(char*);
void ler_descr(char*);
void ler_quant(int*);
void ler_tam(int*);
void ler_valor(float*);


void menuProduto(void) {
    Produto* produto;
    char opcao;

    do {
        opcao = tela_menu_produto();
        switch(opcao) {
            case '1': 	produto = tela_cadastrar_produto();
                        grava_prod(produto);
                        free(produto);
                        break;
            case '2': 	produto = tela_pesquisar_produto();
                        exibe_prod(produto);
                        break;
            case '3': 	tela_alterar_produto();
                        break;
            case '4': 	tela_excluir_produto();
                        break;
            case '5':   lista_prod();
                        getchar();
                        break;
        } 		
    } while (opcao != '0');
}


char tela_menu_produto(void) {
    char op;
    limpaTela();
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
    printf("***                |        MENU PRODUTO           |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            1. Cadastrar Produto                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            2. Pesquisar Produto                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            3. Alterar Produto                                           ***\n");
    printf("***                                                                         ***\n");
    printf("***            4. Excluir Produto                                           ***\n");
    printf("***                                                                         ***\n");
    printf("***            5. Listar Produtos                                           ***\n");
    printf("***                                                                         ***\n");
    printf("***            0. Voltar ao Menu Anterior                                   ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("***            Escolha a opção desejada:  ");
    scanf("%c", &op);
    getchar();
    printf("\n");
    delay(1);
    return op;
 }



Produto* tela_cadastrar_produto(void) {
    Produto* produto;

    limpaTela();
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
    printf("***                |      CADASTRAR PRODUTO        |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
   
    produto = (Produto*) malloc(sizeof(Produto));

    ler_cod(produto->cod);

    ler_descr(produto->descr);

    ler_quant(&(produto->quant));

    ler_tam(&(produto->tam));

    ler_valor(&(produto->valor));

    produto->status = 'c';
 
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                 Produto Cadastrado com sucesso!                         ***\n");
    printf("***                  Tecle <ENTER> para voltar...                           ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("\n");
    sleep(1);
    getchar();
    return produto;
}



Produto* tela_pesquisar_produto(void) {
    FILE* fp;
    Produto* produto;
    char cod[14];
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
    printf("***                |      PESQUISAR PRODUTO        |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***           Digite o Cód de Barras que deseja pesquisar: ");
    fgets (cod, 14, stdin);
    getchar();
    produto = (Produto*) malloc(sizeof(Produto));
    fp = fopen("produtos.dat", "rb");
    if (fp == NULL) {
      printf("Ops! Erro na abertura do arquivo!\n");
      printf("Não é possível continuar...\n");
      printf("\t\t\t*** Tecle <ENTER> para voltar...\n");
      getchar();
    } else {
        while(!feof(fp)) {
          fread(produto, sizeof(Produto), 1, fp);
          if((strcmp(produto->cod, cod) == 0) && (produto->status != 'e')) {
            exibe_prod(produto);
            printf("\t\t\t*** Tecle <ENTER> para continuar...\n");
            getchar();
            fclose(fp);
            free(produto);
            return produto;
          } 
        }
    }
    fclose(fp);
    free(produto); 
    return NULL;
}


void tela_alterar_produto(void) {
    char cod[14];
    Produto* produto = (Produto*) malloc(sizeof(Produto));
    FILE* fp;
    int ache = 0;
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
    printf("***                |      ALTERAR PRODUTO          |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***    Digite o Código do Produto que deseja alterar: ");
    fgets(cod, 14, stdin);
    getchar();
    fp = fopen("produtos.dat", "r+b");
    if (fp == NULL) {
      printf("\t\t\t*** Processando as informações...\n");
      sleep(1);
      printf("\t\t\t*** Ops! Erro na abertura do arquivo!\n");
      printf("\t\t\t*** Não é possível continuar...\n");
      printf("\t\t\t*** Tecle <ENTER> para voltar...\n");
      getchar();
    } else {
      while (fread(produto, sizeof(Produto), 1, fp) == 1) {
        if(strcmp(produto->cod, cod) == 0) {
          printf("\n");
          printf("\t\t\t*** Produto Encontrado ***\n");
          printf("\t\t\t*** Refaça o Cadastro ***\n");
          printf("\n");
          
          ler_descr(produto->descr);
          
          ler_quant(&(produto->quant));
          
          ler_tam(&(produto->tam));
          
          ler_valor(&(produto->valor));
          
          produto->status = 'c';

          fseek(fp, -sizeof(Produto), SEEK_CUR);
          fwrite(produto, sizeof(Produto), 1, fp);
          ache = 1;
          break;
        }
      }
    }
    if (!ache) {
        printf("\n");
        printf("\t\t\t Cód de Barras não encontrado!\n");
    } else {
        printf("\n");
        printf("\t\t\t Produto atualizado com sucesso!\n");
    }
  printf("\n");
  sleep(1);
  getchar();
  fclose(fp);
  free(produto);
}


void tela_excluir_produto(void) {
  char cod[14];
  Produto* produto = (Produto*) malloc(sizeof(Produto));
  FILE* fp;
  int ache = 0;
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
  printf("***                |       EXCLUIR PRODUTO         |                        ***\n");
  printf("***                |_______________________________|                        ***\n");
  printf("***                                                                         ***\n");
  printf("***                                                                         ***\n");
  printf("***                                                                         ***\n");
  printf("***       Digite o Código de Barras do Produto (Apenas Números): ");
  fgets(cod, 14, stdin);
  getchar();
  fp = fopen("produtos.dat", "r+b");
  if (fp == NULL) {
    printf("\t\t\t*** Processando as informações...\n");
    sleep(1);
    printf("\t\t\t*** Ops! Erro na abertura do arquivo!\n");
    printf("\t\t\t*** Não é possível continuar...\n");
    printf("\t\t\t*** Tecle <ENTER> para voltar...\n");
    getchar();
  } else {
    while (fread(produto, sizeof(Produto), 1, fp) == 1) {
      if(strcmp(produto->cod, cod) == 0) {
        printf("\n");
        printf("\t\t\t*** Produto Encontrado ***\n");
        printf("\n");
        produto->status = 'e';
        fseek(fp, -sizeof(Produto), SEEK_CUR);
        fwrite(produto, sizeof(Produto), 1, fp);
        ache = 1;
        break;
      }
    }
  }
  if (!ache) {
      printf("\n");
      printf("\t\t\tCód de Barras não encontrado!\n");
  } else {
      printf("\n");
      printf("\t\t\tProduto excluído com sucesso!\n");
  }
  getchar();
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  fclose(fp);
}



// Funções

void ler_cod (char* cod) {
    fflush(stdin);
    printf("Digite os 13 Números do Código de Barras: ");
    fgets (cod, 14, stdin);
    while (!validarCod (cod)) {
        printf("Erro! Digite novamente: ");
        fgets (cod, 14, stdin);
    }
    getchar();
}


// Função inspirada no código do Prof. Flavius

void ler_descr(char* descr) {
    fflush(stdin);
    printf("Digite a descrição do produto: ");
    fgets(descr, 50, stdin); 
    // Remove o caractere de nova linha do final, se estiver presente
    int tam = strlen(descr);
    if (tam > 0 && descr[tam - 1] == '\n') {  
        descr[tam - 1] = '\0';
        fflush(stdin);
    }
    while (!validarDescr(descr)) {
        printf("Descrição inválida: %s\n", descr);
        printf("Informe a descrição do produto novamente: ");
        fflush(stdin);
        fgets(descr, 50, stdin); 
        // Remove o caractere de nova linha do final, se estiver presente
        tam = strlen(descr);
        if (tam > 0 && descr[tam - 1] == '\n') {
            descr[tam - 1] = '\0';
            fflush(stdin);
    }
  } 
}



void ler_quant(int* quant) {
    printf("Quantidade: ");
    scanf("%d", quant);
    getchar();
}

void ler_tam(int* tam) {
    printf("Tamanho: ");
    scanf("%d", tam);
    getchar();
}


void ler_valor(float* valor) {
    printf("Digite o valor: R$ ");
    scanf("%f", valor);
    getchar();
}


void grava_prod(Produto* produto) {
  FILE* fp;
  fp = fopen("produtos.dat", "ab");
  if (fp == NULL) {
    printf("\t\t\t>>> Processando as informações...\n");
    sleep(1);
    printf("\t\t\t>>> Erro!\n");
    printf("\t\t\t>>> Não é possível continuar...\n");
    getchar();
  }
  fwrite(produto, sizeof(Produto), 1, fp);
  fclose(fp);
}



void lista_prod(void) {
  FILE* fp;
  Produto* produto;
  printf("\n = Lista de Clientes = \n");
  produto = (Produto*) malloc(sizeof(Produto));
  fp = fopen("produtos.dat", "rb");
  if (fp == NULL) {
    printf("Erro na abertura do arquivo!/n");
    printf("Não é possível continuar...\n");
    exit(1);
  }
  while (fread(produto, sizeof(Produto), 1, fp)) { 
    if (produto->status != 'e') {
      exibe_prod(produto);
      printf("\t\t\t*** Tecle <ENTER> para continuar...\n");
      getchar();
    }
  }
  fclose(fp);
  free(produto);
}


void exibe_prod(Produto *produto) {

    char situacao[20];
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
  if ((produto == NULL) || (produto->status == 'x')) {
      printf("\n Produto não encontrado!\n");
      printf("\n");
      printf("\t\t\t*** Tecle <ENTER> para continuar...\n");
      getchar();
  } else {
      printf("\n*** Produto Cadastrado***\n");
      printf("\n");
      printf("*** Descrição do Produto: ");
      printf("%s" ,produto->descr);
      printf("\n");
      printf("*** Código de Barras: ");
      printf("%s" ,produto->cod);
      printf("\n");
      printf("*** Quantidade: ");
      printf("%d" ,produto->quant);
      printf("\n");
      printf("*** Numeração do Calçado: ");
      printf("%d" ,produto->tam);
      printf("\n");
      printf("*** Valor: ");
      printf("%.2f" ,produto->valor);
      printf("\n");
    if (produto->status == 'c') {
      strcpy(situacao, "Cadastro Ativo");
    } else {
      strcpy(situacao, "Produto Excluído");
    }
    printf("Status do produto: %s\n", situacao);
    printf("\n");
  }   
}

