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
// Assinatura das funções Módulo Vendas
////



typedef struct venda Venda;

struct venda {
    int cod;
	char cpf[12];
	char cupom[5];
	char descr[50];
	int quant;
	int tam;
	float valor;
	float preco;
	char status;
	char dataHora[40];
	char situacao[20];
};

void menuVenda(void); 
char tela_menu_venda(void);
void grava_venda(Venda* venda);
void tela_excluir_venda();
void ler_Cupom(char*);
void ler_CPf (char*);
Venda* tela_registrar_venda(void);
Venda* tela_consultar_venda(void);
void ler_Datahora(char*);
void exibe_venda(Venda *venda);
