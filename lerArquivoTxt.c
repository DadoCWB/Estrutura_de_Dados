
/*	=====================================================================================================================================================
	Descrição:	Esse código tem por objetivo 	1) abrir um arquivo .txt;
												2) Ler as 3 primeiras linhas desse arquivo;
												3) armazenar cada linha em uma string;
												4) imprimir  conteudo da string na tela
	-----------------------------------------------------------------------------------------------------------------------------------------------------
	Versão 1.0
	última atualização: 30/03/2019
	disponível em: https://github.com/DadoCWB/Estrutura_de_Dados
	=====================================================================================================================================================
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i;			// contador 
	char txt[50];	//string para armazera os caracteres de cada linha lida dento do laço pelo fscanf  
					//estou supondo que uma linha não irá conter mais que 50 caracteres
	
	FILE *arq; //Ponteiro para abrir o arquivo txt
	
	arq=fopen("NomeRG10.txt", "r"); //nome do arquivo a ser aberto
									// o "r" significa que o arquivo será aberto em modo leitura 
	
	for(i=0;i<3;i++){
		fscanf(arq,"%s",txt); // lê uma linha do arquivo e armazena-a na string txt
		
		printf("\n%s",txt); //imprime na tela cada uma das linhas que foi lida pelo fscanf
	}
		
};

/*
Explicando um pouco as coisas:
	
	O ponteiro na linha 23 é do tipo FILE. Ele é usado para varrer cada caractere contido no arquivo e
	armazená-los na string txt.
 
	fscanf é bem parecido com scanf . A diferença é que scanf lê o teclado e fscanf lê um arquivo.
	
	para ler TODAS as linhas do arquivo ao invés de 3 recomenda-se:
	
	while(!feof(arq)){ // le o arquivo até a ultima linha
  		fscanf(arq,"%s",txt); // lê uma linha do arquivo e armazena-a na string txt
		
		printf("\n%s",txt); //imprime na tela cada uma das linhas que foi lida pelo fscanf 
	}
	
*/
