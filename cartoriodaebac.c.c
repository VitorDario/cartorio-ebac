#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o de mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o
#include <string.h> //biblioteca responsavel do scan s 


int registro()  //cadastro de usu�rio   //come�o das variaveis
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	//final das variaveis
	
	printf("Digite aqui seu CPF:     \n");
	
	scanf("%s",cpf);
	
	
	
	strcpy(arquivo, cpf); //responsavel por copiar valores de arquivo
	FILE *file; // cria um arqivo
	file = fopen(arquivo, "w"); //abre um arquivo dentro dessa variavel   e "w" � para criar um novo
	fprintf(file,cpf); // salvo o valor da variavel
	fclose(file); // fecha o arquivo
		file = fopen(arquivo, "a");  //"a" � para atualizar info 
	fprintf(file, ",");
	fclose(file);

	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
		file = fopen(arquivo, "a");   
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado:  ");
	scanf("%s" , sobrenome);
	
	file= fopen(arquivo,"a");
	fprintf(file, sobrenome);
	fclose(file);	
		file = fopen(arquivo, "a");   
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o seu cargo;   ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
		file = fopen(arquivo, "a");   
	fprintf(file, ",");
	fclose(file);
	
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); // tem q colocar dnv prq � outra variavel
	char cpf[40];
	char conteudo[200];
	
	printf("Digite aqui o cpf  ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf,"r"); //r = ler o arquivo de cima la
	
	if(file == NULL)   //se for algum cpf errado tipo 10 por ex, ele vai falar isso
	{
		printf("Arquivo n�o localizado!.\n");
	}
	
	while(fgets(conteudo,200,file) != NULL) //enquanto ele estiver escrevendo o conteudo, vai buscar
	{
		printf("\nEssas s�o as informa��es do us�ario:\n\n ");
		printf("%s",conteudo);
		printf("\n\n");
	}
	system ("pause");
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o cpf a ser deletado: \n");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;        //FILE entra ae  e  file qual ele entra
	file = fopen(cpf, "r");
	
	if(file == NULL) 
	{
		printf("Usu�rio Deletado!.\n");
		system("pause");
	}
	
	
}




int main()
{
	int opcao=0;
	
	int x=1;
	for(x=1;x=1;) //looping para o menu
	{

		system("cls");

	setlocale(LC_ALL, "Portuguese"); //l�ngua tem q escrever em ingl�s
	
		printf("\t*********************************\n"); //in�cio do menu
		printf("\t*\tCart�rio da Ebac\t*\n");
		printf("\t*********************************\n\n");
		printf("Escolha a op��o desejada no menu:\n\n");
		printf("\t1.registrar ou cadastrar nomes\n\n");
		printf("\t2.consultar nomes\n\n");
		printf("\t3.deletar nomes\n\n");
		printf("\t4.Sair do sistema\n\n");
		printf("*Esse � o novo software do D�rio*\n\n");
		printf("*Digite aqui sua resposta:*"); //fim do menu
	
		scanf("%d", &opcao); //armazenando a escolha do usu�rio
		system("cls"); //apagar tudo para ficar mais bonito
			
			
			switch(opcao)  //encurtar tudo
	{
		case 1:   //nao precisa deixar system pause
		registro();
		break;
		
		case 2:	
		consulta();
		break;
		
		case 3:
		deletar();
		break;
		
		case 4;
		printf("Obrigado pela prefer�ncia\n");
		return 0
		break;
		
		default:
		printf("\t'Essa op��o n�o est� dispon�vel!'\n");
		system("pause");
		break;
		
		
	}
	
	}
}	
