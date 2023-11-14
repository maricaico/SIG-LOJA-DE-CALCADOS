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
// Assinatura das funções Módulo Produto
////


typedef struct produto Produto;

struct produto {
    char cod[14];
	char descr[50];
	int quant;
	int tam;
	float valor;
	char status;
	char situacao[20];
};


void menuProduto(void);
char tela_menu_produto(void);
void grava_prod(Produto* produto);
void tela_alterar_produto(void);
void tela_excluir_produto(void);
void ler_cod(char*);
void ler_descr(char*);
void ler_quant(int*);
void ler_tam(int*);
void ler_valor(float*);
Produto* tela_cadastrar_produto(void);
Produto* tela_pesquisar_produto(void);

void exibe_prod(Produto *produto);
void lista_prod(void);