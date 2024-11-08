#include <stdio.h>

int main(){
    FILE *pF = fopen("C:\\Users\\Rayanne Santos\\Desktop\\texto.txt", "r"); // Abre o arquivo a partir de um caminho especifico.
    char buffer[255];  // Tamanho de cada linha do texto.
    
    if (pF == NULL){
        printf("Arquivo Inexistente!\n");  // Verifica se o arquivo existe.
    }
    else{
        while (fgets(buffer, 255, pF) != NULL){   // Lê e imprime seu conteúdo linha por linha.
            printf("%s", buffer);
        }
    }
    
    fclose(pF);
    
    return 0;
} 
