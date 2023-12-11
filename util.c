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
#include "util.h"

#define true 1
#define false 0

// Faz uma pausa
void delay(int segundos) {
  int tempo = 1000 * segundos;
  clock_t inicio = clock();
  while (clock() < inicio + tempo) {
    // não faz nada, apenas gasta tempo
  }
}


// Limpa a Tela
void limpaTela(void) {
  system("clear||cls");
}


// Função inspirada no código do Prof. Flavius

int ehDigito(char c) {
  if (c >= '0' && c <= '9') {
    return true;
  } else {
    return false;
  }
}



// Função inspirada no código do Prof. Flavius

int ehBissexto(int aa) {
  if ((aa % 4 == 0) && (aa % 100 != 0)) {
    return true;
  } else if (aa % 400 == 0) {
    return true;
  } else {
    return false;
  }
}


// Função inspirada no código do Prof. Flavius

int ehLetra(char c) {
  if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
    return true;
  } else if (c == ' ' || c == 13) {
    return true;
  } else {
    return false;
  }
}


int ehValido(char c) {
  if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
    return true;
  } else if (c == ' ' || c == 13) {
    return true;
  } else if (c >= '0' && c <= '9') {
    return true;
  }  else if (c == '.' || c == '_' || c == '@') {
    return true;
  } else { 
    return false;
  }
}



//Função adaptada do código do professsor Flávius 
int validarData(int dd, int mm, int aa) {
  int maiorDia;
  if (aa < 0 || mm < 1 || mm > 12)
    return false;
  if (mm == 2) {
    if (ehBissexto(aa)) 
      maiorDia = 29;
    else
      maiorDia = 28;
  } else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
    maiorDia = 30;
  } else
    maiorDia = 31;
  if (dd < 1 || dd > maiorDia)
    return false;
  return true;
}

//Função adaptada do código do professsor Flávius 

int validarNome(char* nome) {
  for (int i=0; nome[i]!='\0'; i++) {
    if (!ehLetra(nome[i])) {
      return false;
    }

  }
  return true;
}



//Função adaptada do código do professsor Flávius 

int validarFone (char* fone) {
  int tam;

  tam = strlen(fone);
  if (tam < 11 || tam > 12) {
    return false;
  }
  for (int i = 0; i < tam; i++) {
    if (!ehDigito(fone[i])) {
      return false;
    }
  }
  return true;
}



// Função feita com ajuda do Chatgpt

int validarEmail(char* email) {
  int tam = strlen(email);
  int temArroba = 0;
   // Verifica se o email tem pelo menos um caractere '@' e um ponto '.'
  for (int i = 0; i < tam; i++) {
    if (email[i] == '@') {
      temArroba = 1;
    } else if (email[i] == '.') {
      if (temArroba) {
        return true;
      }
    } else if (!ehValido(email[i])) {
      return false;
    }
  }
  return false;
}

/// Função para Validação de Código de Barras


int validarCod(char* cod) {
  int tam;

  tam = strlen(cod);
  if (tam < 13 || tam > 14) {
    return false;
  }
  for (int i = 0; i < tam; i++) {
    if (!ehDigito(cod[i])) {
      return false;
    }
  }
  return true;
}



int validarCupom(char* cupom) {
  int tam;

  tam = strlen(cupom);
  if (tam < 4 || tam > 5) {
    return false;
  }
  for (int i = 0; i < tam; i++) {
    if (!ehDigito(cupom[i])) {
      return false;
    }
  }
  return true;
}


//Função adaptada do código do professsor Flávius 

int validarDescr(char* descr) {
  for (int i=0; descr[i]!='\0'; i++) {
    if (!ehLetra(descr[i])) {
      return false;
    }

  }
  return true;
}


// Função baseada no código de https://github.com/RenanMRb/ProjetoEagleEyes.git
int validarCpf(const char* cpf) {
    int i, j, digito1 = 0, digito2 = 0;

    // Verifica se o CPF possui 11 dígitos
    if (strlen(cpf) != 11) {
        return 0;
    }

    // Verifica se o CPF não possui todos os dígitos iguais
    for (i = 0; i < 10; i++) {
        if (cpf[i] != cpf[i + 1]) {
            break;
        }
    }
    if (i == 10) {
        return 0;
    }

    // Calcula os dígitos verificadores do CPF
    for (i = 0, j = 10; i < 9; i++, j--) {
        digito1 += (cpf[i] - '0') * j;
    }
    digito1 %= 11;
    if (digito1 < 2) {
        digito1 = 0;
    } else {
        digito1 = 11 - digito1;
    }
    if ((cpf[9] - '0') != digito1) {
        return 0;
    }

    for (i = 0, j = 11; i < 10; i++, j--) {
        digito2 += (cpf[i] - '0') * j;
    }
    digito2 %= 11;
    if (digito2 < 2) {
        digito2 = 0;
    } else {
        digito2 = 11 - digito2;
    }
    if ((cpf[10] - '0') != digito2) {
        return 0;
    }

    // Se passou por todas as verificações, o CPF é válido
    return 1;
} 