#include <stdio.h> //Biblioteca de comunicação de usuário
#include <stdlib.h> //Biblioteca de Alocação de espaço de memória
#include <locale.h> //Biblioteca de alocação de texto por região
#include <string.h> //Bibliote a responsavel por cuidar das string


int registro() //Função responsavel por cadastrar os usuarios no sistema
{
    char arquivo [40]; //Inicio de criação de variaveis
    char cpf [40];
    char nome [40];
    char sobrenome [40];
    char cargo[40]; //fim de criação de variaveis
    
    printf("Digite o CPF a ser cadastrado: "); //Coletando informações do usuario
    scanf("%s", cpf); //%s Refere-se ao string
    
    strcpy(arquivo, cpf); //Responsavel por os valores das string
    
    FILE*file; //cria o arquivo
    
    file = fopen(arquivo,"w"); //Cria o arquivo
    fprintf(file, cpf);//salva o arquivo
    fclose(file); //fecha o arquivo
    
    file = fopen(arquivo,"a"); //Cria o Arquivo
    fprintf(file,","); //salva o arquivo
    fclose(file); //fecha o arquivo
    
    printf("Digite o nome a ser cadastrado: "); //coletandp informações do usuario
    scanf("%s",nome);
   
    file =fopen(arquivo,"a"); //Cria o Arquivo
    fprintf(file, nome);//salva o arquivo
    fclose(file); //fecha o arquivo
    
    file = fopen(arquivo,"a");//Cria o arquivo
    fprintf(file,","); //salva o arquivo
    fclose(file); //fecha o arquivo
    
    printf("Digite o Sobrenome a ser cadastrado: "); //coletando informações do usuario
    scanf("%s",sobrenome);
    
    file = fopen(arquivo,"a"); //cria o arquivo
    fprintf(file, sobrenome); //salva o arquivo
    fclose(file); //fecha o arquivo
    
    file = fopen(arquivo,"a");//cria o arquivo
    fprintf(file,","); //salva o arquivo
    fclose(file); //fecha o arquivo
    
    printf("Digite o cargo a ser cadastrado: "); //Coletando informações do usuario
    scanf("%s", cargo);
    
    file = fopen(arquivo,"a"); //Cria o arquivo
    fprintf(file, cargo); //salva o arquivo
    fclose(file); //fecha o arquivo
    
    system("pause"); 
    
}

int consultar()
{
  char cpf [40];
  char conteudo[200];
  
  printf("digite o CPF que deseja consultar: ");
  scanf("%s",cpf);
  
  FILE* file; //cria o arquivo
  
  file = fopen(cpf,"r"); //cria o arquivo
  
  if (file == NULL)
  {
      printf("Não foi possivel encontrar esses dados! ");
      
  }
	 while(fgets(conteudo,200,file)!=NULL)
	 {
	     printf("Essas são as informações encontradas: ");
	     printf("%s",conteudo);
	     printf("\n\n");
	     
	     
	 }
    system("pause");
    
}

int deletar() 
{
    setlocale(LC_ALL, "Portuguese"); //definindo a linguagem 
    char cpf[40];
    
    printf("Digite o cpf a ser deletado: ");
    scanf("%s",cpf);
    
    remove (cpf);
    
    FILE*file;
    file = fopen(cpf,"r");
    
    if (file == NULL)
    {
        printf("O usúario não existe\n\n");
        system("pause");
    }
    
    
    
}


int main()
{
    int opcao=0; //definindo as variáveis 
    int laco=1;
    char senhadigitada[]="a";
    int comparacao;
    
    printf("#####Cartorio Da EBAC#####");
    printf("Login de Administrador!\n\nDigite sua senha: ");
    scanf("%s",senhadigitada);
    
    comparacao = strcmp(senhadigitada,"admin");
    
    if(comparacao == 0)
    {
        system("cls");
        
    for(laco=1;laco=1;)
        
    {
        
    
        
    
    
       system("cls");
    	setlocale(LC_ALL, "Portuguese"); //definindo a linguagem 
    	printf("#####Cartório Da EBAC#####\n\n");//inicio do menu
    	printf("Escolha a opção desejada do Menu:\n\n");
    	printf("\t1 - Registrar Nomes\n\n");
    	printf("\t2 - Consultar Nomes\n\n");
    	printf("\t3 - Deletar Nomes\n\n");
     printf("\t4 - sair do menu\n\n");      
	    printf("opção: "); //fim do menu
	
	
	
    	scanf("%d",&opcao); //armazenando as escolhas
    	system("cls"); //Responsavel por limpar a tela
	
	switch(opcao) //inicio da seleção
	{
	    case 1: //Chamada de funções
	    registro();
	    break;
	    
	    case 2://Chamadw de Funções
	    consultar();
	    break; 
	    
	    case 3: //Chamada de funções
	    deletar();
	    break;
	    
	    case 4: //Chamada de funções
	    printf("Obrigador por usar o sistema!\n\n");
	    return 0;
	    break;
	    
	    default:
	    printf("Essa opção não está disponível!");
	    system("pause");
	    break;
	    
	}
        }
	
}
    else 
    printf("Senha Incorreta!!!");
}


