#include <stdio.h>

int main(){
    
    //FILE *pF = fopen("test.txt", "w");      // "w" Escreve um texto no arquivo aberto
    //FILE *pF = fopen("test.txt", "a");      // "a" Anexa um texto no arquivo aberto
    //FILE *pF = fopen("C:\\Users\\Rayanne Santos\\Desktop\\test.txt", "w");  //Abre arquivo no caminho especificado para escrita 
                                                                              //ex: Área de Trabalho

    FILE *pF = fopen("test.txt", "r");         // "r" Abre para leitura (erro se o arquivo não existir)
      if(pF == NULL){
        printf("Não foi possivel abrir o arquivo para leitura.");
      }else{
        printf("O arquivo foi aberto com sucesso!");
      }
    
    fprintf(pF, "Spider-Man, Batman, Flash, Thor, Hulk.....\n");
    
    fclose(pF);    //Fecha o arquivo
    
    //PARA DELETAR O ARQUIVO.
    /*
    if(remove("test.txt") == 0){
        printf("O arquivo foi deletado com sucesso!");
    }else{
        printf("Não foi possível deletar o arquivo.");
    }*/

    return 0;
}
