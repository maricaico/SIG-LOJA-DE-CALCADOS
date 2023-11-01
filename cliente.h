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

/////
// Assinatura das funções Módulo Cliente
////

typedef struct cliente Cliente;

struct cliente {
    char cpf[12];
	char nome[50];
	char email[40];
	char nasc[11];
	char fone[12];
	char status;
	char situacao[20];
};


void menuCliente(void);
char tela_menu_cliente(void);
void grava_cli(Cliente* cliente);
void ler_Arqcliente(int num);
void tela_alterar_cliente(void);
void tela_excluir_cliente(void);
void ler_cpf (char*);
void ler_nome (char*);
void ler_email (char*);
void ler_nasc (char*);
void ler_fone (char*);
Cliente* tela_cadastrar_cliente(void);
Cliente* tela_pesquisar_cliente(void);

void exibe_cli(Cliente* cliente);
void lista_todos(void);

