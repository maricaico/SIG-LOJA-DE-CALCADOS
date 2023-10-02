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
#include "cliente.h"
#include "util.h"


/////
////// Funções do Módulo Cliente
//////


void ler_cpf (char*);
void ler_nome (char*);
void ler_email (char*);
void ler_nasc (char*);
void ler_fone (char*);



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


void cadastrarCliente(void) {
	// função ainda em desenvolvimento
	tela_cadastrar_cliente();
}


void pesquisarCliente(void) {
	// função ainda em desenvolvimento
	tela_pesquisar_cliente();
}


void alterarCliente(void) {
	// função ainda em desenvolvimento
	tela_alterar_cliente();
}


void excluirCliente(void) {
	// função ainda em desenvolvimento
	tela_excluir_cliente();
}



char tela_menu_cliente(void) {
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
    delay(1);
    return op;
 }


void tela_cadastrar_cliente(void) {
    char cpf[12];
	char nome[50];
	char email[40];
	char nasc[11];
	char fone[12];

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
    printf("***                |      CADASTRAR CLIENTE        |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    
    ler_cpf(cpf);

    ler_nome(nome);

    ler_email(email);

    ler_nasc(nasc);

    ler_fone(fone);

    
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("\n");
    delay(1);
    getchar();
}


void tela_pesquisar_cliente(void) {
   char cpf[12];

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
    printf("***                |      PESQUISAR CLIENTE        |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                Digite o CPF (Apenas Números):  ");
    scanf("%[0-9]", cpf);
    getchar();
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("\n");
    printf("\n");
	delay(1);
}


void tela_alterar_cliente(void) {
    char cpf[12];

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
    printf("***                |      ALTERAR CLIENTE          |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                Digite o CPF (Apenas Números):  ");
    scanf("%[0-9]", cpf);
    getchar();
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("\n");
    printf("\n");
	delay(1);
}


void tela_excluir_cliente(void) {
    char cpf[12];

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
    printf("***                |       EXCLUIR CLIENTE         |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                Digite o CPF (Apenas Números):  ");
    scanf("%[0-9]", cpf);
    getchar();
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("\n");
    printf("\n");
	delay(1);
}

// Funções

void ler_cpf (char* cpf) {
    fflush(stdin);
    printf("Digite o CPF (Apenas Números): ");
    fgets (cpf, 12, stdin);
    while (!validarCpf (cpf)) {
        printf("Erro! Digite novamente: ");
        fgets (cpf, 12, stdin);
    }
    getchar();
}

// Função inspirada no código do Prof. Flavius

void ler_nome(char* nome) {
  fflush(stdin);
  printf("Digite o nome: ");
  fgets(nome, 50, stdin); 
  // Remove o caractere de nova linha do final, se estiver presente
  int tam = strlen(nome);
  if (tam > 0 && nome[tam - 1] == '\n') {
    nome[tam - 1] = '\0';
    fflush(stdin);
  }
  while (!validarNome(nome)) {
    printf("Nome inválido: %s\n", nome);
    printf("Informe um novo nome: ");
    fflush(stdin);
    fgets(nome, 50, stdin); 
    // Remove o caractere de nova linha do final, se estiver presente
    tam = strlen(nome);
    if (tam > 0 && nome[tam - 1] == '\n') {
      nome[tam - 1] = '\0';
      fflush(stdin);
    }
  } 
}


void ler_email(char* email) {
    fflush(stdin);
    printf("Digite o Email: ");
    fgets(email, 40, stdin);
    while (!validarEmail(email)) {
        printf("Erro! Digite novamente: ");
        fgets(email, 40, stdin);
        fflush(stdin);
    }
}

// Função inspirada no código do Prof. Flavius

void ler_nasc(char* nasc) {
  int dia, mes, ano;
  char dd[3], mm[3], aa[5];
  fflush(stdin);
  printf("Data de nascimento: ");
  fgets(nasc, 11, stdin); 
  getchar();
  
  strncpy(dd, &nasc[0], 2);
  sscanf(dd, "%d", &dia);
  
  strncpy(mm, &nasc[3], 2);
  sscanf(mm, "%d", &mes);

  strncpy(aa, &nasc[6], 4);
  sscanf(aa, "%d", &ano);

  while (!validarData(dia, mes, ano)) {
    printf("Data inválida: %d/%d/%d\n", dia, mes, ano);
    printf("Informe uma nova data\n\n");
    printf("Data de nascimento: ");
    fgets(nasc, 11, stdin);
    fflush(stdin);
    getchar();
    strncpy(dd, &nasc[0], 2);
    sscanf(dd, "%d", &dia);
    strncpy(mm, &nasc[3], 2);
    sscanf(mm, "%d", &mes);
    strncpy(aa, &nasc[6], 4);
    sscanf(aa, "%d", &ano);
    
  } 
}




void ler_fone (char* fone) {
    fflush (stdin);
    printf("Digite o Telefone (Apenas Números): ");
    fgets (fone, 12, stdin);

    while (!validarFone (fone)) {
        printf("Erro! Digite novamente: ");
        fgets (fone, 12, stdin);
    
    }
} 
