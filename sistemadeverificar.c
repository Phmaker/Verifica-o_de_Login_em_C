#include <stdio.h>	
#include <stdlib.h>	
#include <string.h> //biblioteca para comparação de string comando "strcmp" e "strcpy"
#include <locale.h> //biblioteca responsavel para utilizar acentos 
#include <windows.h> //biblioteca para usar a função system

// crio uma struct a qual irá armazenar os dados do novo usuário criado.
struct sistemaloginuser {
	char escolhauser;
	char iduserLogin[50];
	char iduserSenha[50];
	char nomeuser[20];
	int qntdd_de_novosusers;
};

// crio uma struct para armazenar os dados de cadastro de um novo cliente PF.
struct cadastro_novo_cliente {
	char nome[50];
	char sobrenome[50];
	char placa_carro[8];
	char cpf[15];
	char email[50];
	char telefone[17];	
};

//utilizo os typedef para atribuir apelidos para as struct
typedef struct sistemaloginuser sistemaloginuser;

int main() {
	
	// código para utilizar acentos
	setlocale(LC_ALL, "Portuguese");
	
	// código para inserir cor no terminal
	system("color 1E");

	// introduzindo o apelido a um tipo de variável para utilizar scanf
	sistemaloginuser usuario;
	sistemaloginuser loginuser;
	
	// declaro uma variável do tipo inteiro para verificar se já houve usuário 
	int usuariosCadastrados = 0;
	int loginRealizado = 0;


// Comando para adicionar cor as saídas como printf	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
	
	// apenas uma "interface" para deixar o terminal mais bnt
	printf("+============================================================================+\n\n");
	printf("\t\t\t\tALINHA FÁCIL\n\n");
	printf("+============================================================================+\n\n");
	
	// inicio o principal laço de repetição do programa
	do {
	
		system("color 1E");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
	
		// peço ao usuário para escolher uma opção e salvo a sua escolha
		printf("\n\t\t\tEscolha uma das opções!\n\n\n");
		printf("\n1 - Para Logar | 2 - Para cadastrar | 3 - Sair do Programa\n\n\n$");
		scanf(" %c", &loginuser.escolhauser);
	
		// comando usado para não ter problema em lixo de memória nos próximos scanf
		fflush(stdin);

		switch (loginuser.escolhauser) {
	
			case '1':
				
				//comando para limparar cmd
                system("cls");
                
                //commado para colorir terminal e saida de dados
                system("color 1E");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
                
                //imprimir "interface" grafica
                printf("+===================================================================+\n\n");
                printf("\t\t\tALINHA FÁCIL\n\n");
                printf("+===================================================================+\n\n");
                printf("\n\t\t\tTELA DE LOGIN\n\n");
				
				
				//se usuarioscadastrados for menor ou = a 0 entao 
                if (usuariosCadastrados <= 0) {
                    printf("\nNenhum usuário encontrado. Realize o cadastro primeiro!\n");
                } 
					//senao faça
					else {
                    printf("\nDigite Seu Login:\n\n$");
                    scanf(" %49s", loginuser.iduserLogin);
                    fflush(stdin);
                    printf("\nDigite Sua Senha:\n\n$");
                    scanf(" %49s", loginuser.iduserSenha);
                    fflush(stdin);


					//comparaçao entre strings
                    if (strcmp(loginuser.iduserLogin, usuario.iduserLogin) == 0 && strcmp(loginuser.iduserSenha, usuario.iduserSenha) == 0) {
                        printf("\nLogin Realizado com sucesso!\n");
                        loginRealizado = 1;
                    } else {
                        printf("\nLogin ou senha incorretos.\n");
                    }
                }
                break;

			case '2':
                do {
                    // comando para limpar a tela do terminal
                    system("cls");
                    system("color 1E");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);

                    // após a limpeza do terminal, imprimo na tela novamente essa "interface"
                    printf("+===================================================================+\n\n");
                    printf("\t\t\tALINHA FÁCIL\n\n");
                    printf("+===================================================================+\n\n");
                    printf("\n\t\t\tTELA DE CADASTRO\n\n");

                    // peço ao usuário para cadastrar seu nome
                    printf("\nDigite Seu Nome:\n\n$");
                    scanf(" %19s", usuario.nomeuser);
                    fflush(stdin);

                    // peço ao usuário para cadastrar seu login
                    printf("\nDigite Seu Login:\n\n$");
                    scanf(" %49s", usuario.iduserLogin);
                    fflush(stdin);

                    // Verificar se o login já existe
                    if (strcmp(usuario.iduserLogin, loginuser.iduserLogin) == 0) {
                        printf("\nJá existe um usuário cadastrado com esse login. Tente novamente.\n");
                    } 
					else {
                        // peço ao usuário para cadastrar sua senha
                        printf("\nDigite Sua Senha:\n\n$");
                        scanf(" %49s", usuario.iduserSenha);
                        fflush(stdin);
                        printf("\nCadastro Realizado com sucesso\n");
                        usuariosCadastrados = 1; // Indica que um usuário foi cadastrado
                        break;
                    }
                } while (1);
                break;
			
			case '3':
				system("color 1E");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
				
				// realizo uma confirmação, pois às vezes o usuário pode clicar sem querer
				printf("\nDeseja realmente sair do Programa?\n");
				printf("\nDigite 1 - para confirmar\n");
				scanf(" %s", &loginuser.escolhauser);
				fflush(stdin);
				system("cls");
				// utilizando um if para ser a lógica: se o usuário confirmar, encerra o programa
				if (loginuser.escolhauser == '1') {
					return 0;
				}
				break;
		}
	} while (!loginRealizado); //utilizei a logica do enquanto for diferente de loginrealizado execute

	printf("\nBem Vindo %s\n", usuario.nomeuser);
	
	do{
	}while(1);

	return 0;
}
