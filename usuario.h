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
// Assinatura das funções Módulo Usuário
////

typedef struct usuario Usuario;

struct usuario {
    char cpf[12];
	char nome[50];
	char email[40];
	char nasc[11];
	char fone[12];
	char status;
	char situacao[20];
};



void menuUsuario(void);
char tela_menu_usuario(void);
void grava_usu(Usuario* usuario);
void tela_alterar_usuario(void);
void tela_excluir_usuario(void);
void ler_Cpf (char*);
void ler_Nome (char*);
void ler_Email (char*);
void ler_Nasc (char*);
void ler_Fone (char*);
Usuario* tela_cadastrar_usuario(void);
Usuario* tela_pesquisar_usuario(void);
void exibe_usu(Usuario *usuario);
void lista_tods(void);


