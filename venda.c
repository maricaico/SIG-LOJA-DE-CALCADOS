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
#include "venda.h"
#include "util.h"


////
////// Funções do módulo Vendas
////


void ler_Cupom(char*);
void ler_Cod(char*);
void ler_CPf (char*);
void ler_Quant(int*);
void ler_Valor(float*);





void menuVenda(void) {
    Venda* venda;
    char opcao;

    do {
        opcao = tela_menu_venda();
        switch(opcao) {
            case '1':   venda = tela_registrar_venda();
                        grava_venda(venda);
                        free(venda);
                        break;
            case '2':   venda = tela_consultar_venda();
                        exibe_venda(venda);
                        break;
            case '3':   tela_excluir_venda(); 
                        break; 
                        
          } 		
    } while (opcao != '0');
}


char tela_menu_venda(void) {
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
    printf("***                |          MENU VENDAS          |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            1. Registrar Venda                                           ***\n");
    printf("***                                                                         ***\n");
    printf("***            2. Consultar Vendas                                          ***\n");
    printf("***                                                                         ***\n");
    printf("***            3. Excluir Vendas                                            ***\n");
    printf("***                                                                         ***\n");
    printf("***            0. Voltar ao Menu Anterior                                   ***\n");
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


 Venda* tela_registrar_venda(void) {
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
    printf("***                |      REGISTRAR VENDAS         |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
   
    venda = (Venda*) malloc(sizeof(Venda));
 

    ler_Cupom(venda->cupom);  
    
    ler_CPf(venda->cpf); 
    
    ler_Cod(venda->cod);

    ler_Quant(&(venda->quant));

    ler_Valor(&(venda->valor));

    venda->status = 'a';

    ler_Datahora(venda->dataHora);

    
    printf("Data e Hora da Venda: %s\n", venda->dataHora);

    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                 Venda Realizada com sucesso!                            ***\n");
    printf("***                  Tecle <ENTER> para voltar...                           ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("\n");
    sleep(1);
    getchar();
    return venda;
}


Venda* tela_consultar_venda(void) {
    FILE* fp;
    Venda* venda;
    char cupom[5];
    system("clear||cls");
    printf("\n");
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
    printf("***                |      CONSULTAR VENDAS         |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***           Digite o Cód do Cupom Fiscal que deseja pesquisar: ");
    fgets (cupom, 5, stdin);
    getchar();
    venda = (Venda*) malloc(sizeof(Venda));
    fp = fopen("vendas.dat", "rb");
    if (fp == NULL) {
      printf("Ops! Erro na abertura do arquivo!\n");
      printf("Não é possível continuar...\n");
      printf("\t\t\t*** Tecle <ENTER> para voltar...\n");
      getchar();
    } else {
        while(!feof(fp)) {
          fread(venda, sizeof(Venda), 1, fp);
          if((strcmp(venda->cupom, cupom) == 0) && (venda->status != 'e')) {
            exibe_venda(venda);
            printf("\t\t\t*** Tecle <ENTER> para continuar...\n");
            getchar();
            fclose(fp);
            free(venda);
            return venda;
          } 
        }
    }
    fclose(fp);
    free(venda); 
    return NULL;
}



void tela_excluir_venda(void) {
  char cupom[5];
  Venda* venda = (Venda*) malloc(sizeof(Venda));
  FILE* fp;
  int achado = 0;
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
  printf("***                |       EXCLUIR VENDA           |                        ***\n");
  printf("***                |_______________________________|                        ***\n");
  printf("***                                                                         ***\n");
  printf("***                                                                         ***\n");
  printf("***                                                                         ***\n");
  printf("***       Digite o Cód do Cupom Fiscal que deseja excluir: ");
  fgets(cupom, 5, stdin);
  getchar();
  fp = fopen("vendas.dat", "r+b");
  if (fp == NULL) {
    printf("\t\t\t*** Processando as informações...\n");
    sleep(1);
    printf("\t\t\t*** Ops! Erro na abertura do arquivo!\n");
    printf("\t\t\t*** Não é possível continuar...\n");
    printf("\t\t\t*** Tecle <ENTER> para voltar...\n");
    getchar();
  } else {
    while (fread(venda, sizeof(Venda), 1, fp) == 1) {
      if(strcmp(venda->cupom, cupom) == 0) {
        printf("\n");
        printf("\t\t\t*** Venda Encontrada ***\n");
        printf("\n");
        venda->status = 'e';
        fseek(fp, -sizeof(Venda), SEEK_CUR);
        fwrite(venda, sizeof(Venda), 1, fp);
        achado = 1;
        break;
      }
    }
  }
  if (!achado) {
      printf("\n");
      printf("\t\t\tCupom Fiscal não encontrado!\n");
  } else {
      printf("\n");
      exibe_venda(venda);
      printf("\n");
      printf("\t\t\tVenda excluída com sucesso!\n");
  }
  getchar();
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  fclose(fp);
}


// Funções


void ler_Cupom (char* cupom) {
    fflush(stdin);
    printf("Digite a numeração do cupom fiscal com 4 dígitos : ");
    fgets (cupom, 5, stdin);
    while (!validarCupom (cupom)) {
        printf("Erro! Digite novamente: ");
        fgets (cupom, 5, stdin);
    }
    getchar();
}



void ler_Cod (char* cod) {
    fflush(stdin);
    printf("Digite os 13 Números do Código de Barras: ");
    fgets (cod, 14, stdin);
    while (!validarCod (cod)) {
        printf("Erro! Digite novamente: ");
        fgets (cod, 14, stdin);
    }
    getchar();
}


void ler_CPf (char* cpf) {
    fflush(stdin);
    printf("Digite o CPF (Apenas Números): ");
    fgets (cpf, 12, stdin);
    while (!validarCpf (cpf)) {
        printf("Erro! Digite novamente: ");
        fgets (cpf, 12, stdin);
    }
    getchar();
}


void ler_Quant(int* quant) {
    printf("Quantidade: ");
    scanf("%d", quant);
    getchar();
}


void ler_Valor(float* valor) {
    printf("Digite o valor: R$ ");
    scanf("%f", valor);
    getchar();
}



void grava_venda(Venda* venda) {
  FILE* fp;
  fp = fopen("vendas.dat", "ab");
  if (fp == NULL) {
    printf("\t\t\t>>> Processando as informações...\n");
    sleep(1);
    printf("\t\t\t>>> Erro!\n");
    printf("\t\t\t>>> Não é possível continuar...\n");
    getchar();
  }
  fwrite(venda, sizeof(Venda), 1, fp);
  fclose(fp);
}



void ler_Datahora(char* dataHora) {
    time_t tempoAtual;
    struct tm *infoTempo;

    time(&tempoAtual);
    infoTempo = localtime(&tempoAtual);

    strftime(dataHora, 20, "%d/%m/%Y %H:%M:%S", infoTempo);
}



void exibe_venda(Venda *venda) {

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
  if ((venda == NULL) || (venda->status == 'x')) {
      printf("\n Venda não encontrada!\n");
      printf("\n");
      printf("\t\t\t*** Tecle <ENTER> para continuar...\n");
      getchar();
  } else {
      printf("\n*** Venda Encontrada***\n");
      printf("\n");
      printf("*** Cupom Fiscal***");
      printf("%s" , venda->cupom);
      printf("\n");
      printf("*** CPF: ");
      printf("%s" ,venda->cpf);
      printf("\n");
      printf("*** Código de Barras: ");
      printf("%s" ,venda->cod);
      printf("\n");
      printf("*** Quantidade: ");
      printf("%d" ,venda->quant);
      printf("\n");
      printf("*** Valor: ");
      printf("%.2f" ,venda->valor);
      printf("\n");
      printf("*** Data e hora: ");
      printf("%s" ,venda->dataHora);
      printf("\n");
    if (venda->status == 'a') {
      strcpy(situacao, "Venda Ativa");
    } else {
      strcpy(situacao, "Venda Excluída");
    }
    printf("*** Status da venda: %s\n", situacao);
    printf("\n");
  }   
}





      