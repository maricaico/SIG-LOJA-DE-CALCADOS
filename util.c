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
  if (system("clear") || system("cls")) {

  }
}


/// Retorna 1 se o caractere recebido for um dígito (entre 0 e 9) e 0 se for o contrário
int ehDigito(char c) {
  if (c >= '0' && c <= '9') {
    return true;
  } else {
    return false;
  }
}



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
/// Retorna 1 se o caractere recebido for uma letra do alfabético 
/// (letra entre 'A' e 'Z' ou 'a' e 'z') ou retorna 0 caso contrário
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

/// Retorna 1 se dia, mes e ano correspondem a uma data válida, inclusive
/// anos bissextos, ou retorna 0 caso contrário
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
/// Retorna 1 se string recebido for exclusivamente alfabético ou retorna 0 caso não
int validarNome(char* nome) {
  int tam;
  
  tam = strlen(nome);
  for (int i = 0; i < tam-1; i++) {
    if (!ehLetra(nome[i])) {
      return false;
    }
  }
  return true;  
}

//Função adaptada do código do professsor Flávius 
/// Retorna 1 se string recebido corresponder a um número de celular válido 
/// (apenas dígitos) ou retorna 0 caso contrário
int validarFone(char* fone) {
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



/// Retorna 1 se string recebido corresponder a um número de cpf válido 
/// (apenas dígitos) ou retorna 0 caso contrário

int validarCpf(char* cpf) {
  int tam;

  tam = strlen(cpf);
  if (tam < 11 || tam > 12) {
    return false;
  }
  for (int i = 0; i < tam; i++) {
    if (!ehDigito(cpf[i])) {
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
