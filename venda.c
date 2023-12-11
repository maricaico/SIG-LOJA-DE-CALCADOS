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
#include "produto.h"
#include "util.h"
#include "relatorio.h"


////
////// Funções do módulo Vendas
////


void ler_Cupom(char*);
void ler_CPf (char*);
void ler_Datahora(char*);





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
            case '4':   listar_vendas();
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
    printf("***            4. Listar Vendas                                             ***\n");
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
    char* nome_prod;

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

    printf("Código de Barras do Produto (13 dígitos): ");
    scanf("%ld", &venda->cod);
    getchar();

    nome_prod = get_prod(venda->cod);

    printf("Descrição do produto: %s\n", nome_prod); 

    venda->tam = get_tam_prod(venda->cod);

    printf("Tamanho: %d\n", venda->tam);
    
    ler_CPf(venda->cpf); 
    
    printf("Quantidade: ");
    scanf("%d", &venda->quant);
    getchar();

    venda->quant = get_est_prod(venda->cod, venda->quant);

    venda->valor = get_val_prod(venda->cod);

    printf("Valor Unitário: R$ %.2f\n", venda->valor);
    getchar();

    venda->preco = venda->quant * venda->valor;

    printf("Valor Total: R$ %.2f\n", venda->preco);

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



void listar_vendas(void) {
  FILE* fp;
  Venda* venda;
  printf("\n = Lista de Vendas = \n");
  venda = (Venda*) malloc(sizeof(Venda));
  fp = fopen("vendas.dat", "rb");
  if (fp == NULL) {
    printf("Erro na abertura do arquivo!/n");
    printf("Não é possível continuar...\n");
    exit(1);
  }
  while (fread(venda, sizeof(Venda), 1, fp)) { 
    if (venda->status != 'e') {
      exibe_venda(venda);
      printf("\t\t\t*** Tecle <ENTER> para continuar...\n");
      getchar();
    }
  }
  fclose(fp);
  free(venda);
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
      printf("%ld" ,venda->cod);
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


char* get_prod(const long int cod) {
  Produto produto;
  FILE* fp = fopen("produtos.dat", "rb");

  if (fp == NULL) {
    printf("\t\t\t>>> Processando as informações...\n");
    sleep(1);
    printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
  }
  while (fread(&produto, sizeof(produto), 1, fp) == 1) {
    if(produto.cod == cod){ 
      char* x = (char*)malloc(strlen(produto.descr) + 1);
      if (x == NULL) {
        printf("Ocorreu um erro.\n");
        fclose(fp);
        return NULL;
      }
      strcpy(x, produto.descr);
      fclose(fp);
      return x;
      
    }
  }
  fclose(fp);
  return NULL;
}



int get_est_prod(long int cod, int quant) {
  Produto* produto;
  FILE* fp = fopen("produtos.dat", "r+b");

  if (fp == NULL) {
    printf("\t\t\t>>> Processando as informações...\n");
    sleep(1);
    printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
  }
  produto = (Produto*) malloc(sizeof(Produto));
  while (fread(produto, sizeof(Produto), 1, fp) == 1) {
     if (produto->cod == cod) {
      if (produto->quant == 0) {
        printf("\n\t\t\tO Produto zerado!");
        printf("\n\t\t\t Venda Cancelada!\n");
        fclose(fp);
        return 0;
      }
      else if (quant > produto->quant) {
        do {
          printf("Quantidade superior a do estoque! Estoque: %d\n", produto-> quant);
          printf("Quantidade: ");
          scanf("%d", &quant);
          getchar();
        } while (quant > produto->quant);
      }
      produto->quant -= quant;
      fseek(fp, -sizeof(Produto), SEEK_CUR);
      fwrite(produto, sizeof(Produto), 1, fp);
    }
  }
  fclose(fp);
  return quant;
}


float get_val_prod(long int cod) {
  Produto* produto;
  float valor;
  FILE* fp = fopen("produtos.dat", "rb");

  if (fp == NULL) {
    printf("\t\t\t>>> Processando as informações...\n");
    sleep(1);
    printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
  }
  produto = (Produto*) malloc(sizeof(Produto));
  while (fread(produto, sizeof(Produto), 1, fp) == 1) {
     if (produto->cod == cod) {
      valor = produto->valor;
      fclose(fp);
      free(produto);
      return valor;
    }
  }
  fclose(fp);
  free(produto);
  return 0;
}



int get_tam_prod(long int cod) {
  Produto* produto;
  int tam;
  FILE* fp = fopen("produtos.dat", "rb");

  if (fp == NULL) {
    printf("\t\t\t>>> Processando as informações...\n");
    sleep(1);
    printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
  }
  produto = (Produto*) malloc(sizeof(Produto));
  while (fread(produto, sizeof(Produto), 1, fp) == 1) {
      if (produto->cod == cod) {
      tam = produto->tam;
      fclose(fp);
      free(produto);
      return tam;
    }
  }
  fclose(fp);
  free(produto);
  return 0;
}
 