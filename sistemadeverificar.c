#include <stdio.h>	
#include <stdlib.h>	
#include <string.h> //biblioteca para comparação de string comando "strcmp" e "strcpy"

int main(){

char escolhausuario[50];
char Idusuario[50];
char Idsenha[50];
char novoidusuario[50];
char novoidsenha[50];	

	printf("Alinhafacil\n\n");
	
	//Crio O laço de repetição na qual iria repetir ate o usuario cadastrar o novo usuario ou realizar login
	do{
		//Peço para o usuario realizar um escolha
	printf("\nDeseja efetuar o Login ou Cadastrar um novo usuario?\n$");
	scanf("%s", escolhausuario);
	
	//se o usuario escolher login executo o codigo abaixo
		if (strcmp(escolhausuario,"Login") == 0 || strcmp(escolhausuario,"login") == 0){
			
			printf("Digite seu Login:\n$");
			scanf("%s", &Idusuario);
			printf("\nDigite sua senha:\n$");
			scanf("%s", &Idsenha);
			
			
			//se o id do usuario e sua senha for correspondentes entao imprima Bem vindo (Usuario)
			if (strcmp(Idusuario, "admin123") == 0 && strcmp(Idsenha, "12345" ) == 0){
				
				printf("\nBem Vindo admin123\n\n");
} 

			//senão forem correspondentes logo imprima login ou senha incorretos
			else{
				
				printf("Login ou Senha Incorretos.\n\n");
}
}
		
		// se o usuario escolher cadastro executo o codigo abaixo
		else if (strcmp(escolhausuario, "Cadastrar") == 0 || strcmp(escolhausuario, "cadastrar") == 0){
				do{	
				
					strcpy(Idusuario, "admin123");
					
					printf("\nDigite o seu login desejado:\n$");
					scanf("%s", &novoidusuario);
					
				if (strcmp(novoidusuario, Idusuario) == 0){
					printf("\nJá Existe esse Login cadastrado! Favor tente outro\n\n");				

}
				else{
					printf("\nDigite sua Senha desejada;\n$");
					scanf("%s", novoidsenha);
					printf("\nUsuario Cadastrado com Sucesso!\n\n");
					
					}
	
				}while(strcmp(novoidusuario, Idusuario) == 0);
				
				
		}else {
			printf("\n\nEscolha uma Opção existente!\n\n");
}
				
		}while (strcmp(escolhausuario, "Login") != 0  && strcmp(escolhausuario, "login") != 0 && strcmp(escolhausuario, "Cadastrar") != 0 && strcmp(escolhausuario, "cadastrar") != 0);
	

system("Pause");

return 0;
	
}

