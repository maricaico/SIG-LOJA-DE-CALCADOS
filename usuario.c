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
#include "usuario.h"
#include "util.h"


/////
////// Funções do Módulo Usuário
//////


void ler_Cpf (char*);
void ler_Nome (char*);
void ler_Email (char*);
void ler_Nasc (char*);
void ler_Fone (char*);



void menuUsuario(void) {
    Usuario* usuario;
    char opcao;

    do {
        opcao = tela_menu_usuario();
        switch(opcao) {
            case '1': 	usuario = tela_cadastrar_usuario();
                        grava_usu(usuario);
                        free(usuario);
                        break;
            case '2': 	usuario = tela_pesquisar_usuario();
                        exibe_usu(usuario);
                        break;
            case '3': 	tela_alterar_usuario();
                        break;
            case '4': 	tela_excluir_usuario();
                        break;
            case '5':   lista_tods();
                        getchar();
                        break;
        } 		
    } while (opcao != '0');
}



char tela_menu_usuario(void) {
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
    printf("***                |        MENU USUÁRIO           |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            1. Cadastrar Usuário                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            2. Pesquisar Usuário                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***            3. Alterar Usuário                                           ***\n");
    printf("***                                                                         ***\n");
    printf("***            4. Excluir Usuário                                           ***\n");
    printf("***                                                                         ***\n");
    printf("***            5. Listar Usuários                                           ***\n");
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



Usuario* tela_cadastrar_usuario(void) {
    Usuario* usuario;

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
    printf("***                |      CADASTRAR USUÁRIO        |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");

    usuario = (Usuario*) malloc(sizeof(Usuario));

    ler_Cpf(usuario->cpf);

    ler_Nome(usuario->nome);

    ler_Email(usuario->email);

    ler_Nasc(usuario->nasc);

    ler_Fone(usuario->fone);

    usuario-> status = 'a';

    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                 Usuário Cadastrado com sucesso!                         ***\n");
    printf("***                                                                         ***\n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    printf("\n");
    sleep(1);
    getchar();
    return usuario;
}


Usuario* tela_pesquisar_usuario(void) {
    FILE* fp;
    Usuario* usuario;
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
    printf("***                |      PESQUISAR USUÁRIO        |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***       Informe o CPF do usuário que deseja pesquisar: ");
    fgets (cpf, 12, stdin);
    getchar();
    usuario = (Usuario*) malloc(sizeof(Usuario));
    fp = fopen("usuarios.dat", "rb");
    if (fp == NULL) {
      printf("Ops! Erro na abertura do arquivo!\n");
      printf("Não é possível continuar...\n");
      printf("\t\t\t*** Tecle <ENTER> para voltar...\n");
      getchar();
    } else {
        while(!feof(fp)) {
          fread(usuario, sizeof(Usuario), 1, fp);
          if((strcmp(usuario->cpf, cpf) == 0) && (usuario->status != 'x')) {
            exibe_usu(usuario);
            printf("\t\t\t*** Tecle <ENTER> para continuar...\n");
            getchar();
            fclose(fp);
            free(usuario);
            return usuario;
          } 
        }
    }
    fclose(fp);
    free(usuario);
    return NULL;
}



void tela_alterar_usuario(void) {
    char cpf[12];
    Usuario* usuario = (Usuario*) malloc(sizeof(Usuario));
    FILE* fp;
    int achei = 0;
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
    printf("***                |      ALTERAR USUÁRIO          |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***           Digite o CPF do usuário que deseja alterar: ");
    fgets(cpf, 12, stdin);
    getchar();
    fp = fopen("usuarios.dat", "r+b");
    if (fp == NULL) {
      printf("\t\t\t*** Processando as informações...\n");
      sleep(1);
      printf("\t\t\t*** Ops! Erro na abertura do arquivo!\n");
      printf("\t\t\t*** Não é possível continuar...\n");
      printf("\t\t\t*** Tecle <ENTER> para voltar...\n");
      getchar();
    } else {
      while (fread(usuario, sizeof(Usuario), 1, fp) == 1) {
        if(strcmp(usuario->cpf, cpf) == 0) {
          printf("\n");
          printf("\t\t\t*** Usuário Encontrado ***\n");
          printf("\t\t\t*** Refaça o Cadastro ***\n");
          printf("\n");

          ler_Cpf(usuario->cpf);

          ler_Nome(usuario->nome);

          ler_Email(usuario->email);

          ler_Nasc(usuario->nasc);

          ler_Fone(usuario->fone);

          usuario-> status = 'a';

          fseek(fp, -sizeof(Usuario), SEEK_CUR);
          fwrite(usuario, sizeof(Usuario), 1, fp);
          achei = 1;
          break;
        }
      }
    }
    if (!achei) {
        printf("\n");
        printf("\t\t\t CPF não encontrado!\n");
    } else {
        printf("\n");
        printf("\t\t\t Usuário atualizado com sucesso!\n");
    }
  printf("\n");
  sleep(1);
  getchar();
  fclose(fp);
  free(usuario);
}



void tela_excluir_usuario(void) {
    char cpf[12];
    Usuario* usuario = (Usuario*) malloc(sizeof(Usuario));
    FILE* fp;
    int achei = 0;
    system("clear||cls");
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
    printf("***                |       EXCLUIR USUÁRIO         |                        ***\n");
    printf("***                |_______________________________|                        ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                                                                         ***\n");
    printf("***                Informe o CPF do Usuário: ");
    fgets(cpf, 12, stdin);
    getchar();
    fp = fopen("usuarios.dat", "r+b");
    if (fp == NULL) {
      printf("\t\t\t*** Processando as informações...\n");
      sleep(1);
      printf("\t\t\t*** Ops! Erro na abertura do arquivo!\n");
      printf("\t\t\t*** Não é possível continuar...\n");
      printf("\t\t\t*** Tecle <ENTER> para voltar...\n");
      getchar();
    } else {
      while (fread(usuario, sizeof(Usuario), 1, fp) == 1) {
        if(strcmp(usuario->cpf, cpf) == 0) {
          printf("\n");
          printf("\t\t\t*** Usuário Encontrado ***\n");
          printf("\n");
          usuario->status = 'i';
          fseek(fp, -sizeof(Usuario), SEEK_CUR);
          fwrite(usuario, sizeof(Usuario), 1, fp);
          achei = 1;
          break;
        }
      }
    }
    if (!achei) {
        printf("\n");
        printf("\t\t\tUsuário não encontrado!\n");
    } else {
        printf("\n");
        printf("\t\t\tUsuário excluído com sucesso!\n");
    }
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  fclose(fp);
}



// Funções

void ler_Cpf (char* cpf) {
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

void ler_Nome(char* nome) {
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


void ler_Email(char* email) {
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

void ler_Nasc(char* nasc) {
  int dia, mes, ano;
  char dd[3], mm[3], aa[5];
  fflush(stdin);
  printf("Data de nascimento (dd/mm/aaaa): ");
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




void ler_Fone (char* fone) {
    fflush (stdin);
    printf("Digite o Telefone (Apenas Números): ");
    fgets (fone, 12, stdin);

    while (!validarFone (fone)) {
      printf("Erro! Digite novamente: ");
      fgets (fone, 12, stdin);
    }
    getchar();
} 



void grava_usu(Usuario* usuario) {
  FILE* fp;
  fp = fopen("usuarios.dat", "ab");
  if (fp == NULL) {
    printf("\t\t\t>>> Processando as informações...\n");
    sleep(1);
    printf("\t\t\t>>> Erro!\n");
    printf("\t\t\t>>> Não é possível continuar...\n");
    getchar();
  }
  fwrite(usuario, sizeof(Usuario), 1, fp);
  fclose(fp);
}



void lista_tods(void) {
  FILE* fp;
  Usuario* usuario;
  printf("\n = Lista de Usuários = \n");
  usuario = (Usuario*) malloc(sizeof(Usuario));
  fp = fopen("usuarios.dat", "rb");
  if (fp == NULL) {
    printf("Erro na abertura do arquivo!/n");
    printf("Não é possível continuar...\n");
    exit(1);
  }
  while (fread(usuario, sizeof(Usuario), 1, fp)) { 
    if (usuario->status != 'i') {
      exibe_usu(usuario);
      printf("\t\t\t*** Tecle <ENTER> para continuar...\n");
      getchar();
    }
  }
  fclose(fp);
  free(usuario);
}



void exibe_usu(Usuario *usuario) {

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
  if ((usuario == NULL) || (usuario->status == 'x')) {
      printf("\n Usuário não encontrado!\n");
      printf("\n");
      printf("\t\t\t*** Tecle <ENTER> para continuar...\n");
      getchar();
  } else {
      printf("\n*** Usuário Cadastrado***\n");
      printf("\n");
      printf("*** Nome do Usuário: ");
      printf("%s" ,usuario->nome);
      printf("\n");
      printf("*** CPF: ");
      printf("%s" ,usuario->cpf);
      printf("\n");
      printf("*** Email: ");
      printf("%s" ,usuario->email);
      printf("\n");
      printf("*** Data de Nascimento: ");
      printf("%s" ,usuario->nasc);
      printf("\n");
      printf("*** Telefone: ");
      printf("%s" ,usuario->fone);
      printf("\n");
    if (usuario->status == 'a') {
      strcpy(situacao, "Cadastro Ativo");
    } else {
      strcpy(situacao, "Cadastro Inativo");
    }
    printf("Status do Usuário: %s\n", situacao);
    printf("\n");
  }   
}