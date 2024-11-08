#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char tabuleiro[3][3];
const char JOGADOR = 'X';
const char COMPUTADOR = 'O';

void resetTabuleiro();
void printTabuleiro();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

int main(){
    char winner = ' ';
    char response;

    do
    {
        winner = ' ';
        response = ' ';

        resetTabuleiro();
    
        while (winner == ' ' && checkFreeSpaces() != 0)
        {
            printTabuleiro();
            
            playerMove();
            winner = checkWinner();
            if(winner != ' ' || checkFreeSpaces() == 0){
                break;
            }

            computerMove();
            winner = checkWinner();
            if(winner != ' ' || checkFreeSpaces() == 0){
                break;
            }
        }
        
        printTabuleiro();
        printWinner(winner);
    
        printf("\nGostaria de jogar novamente? [S/N] ");
        scanf(" %c", &response);  //Adicione um espaço antes de %c para ignorar caracteres em branco
        response = toupper(response);
    } while (response == 'S');

    printf("Obrigado por Jogar!");

    return 0;
}

void resetTabuleiro(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            tabuleiro[i][j] = ' ';
        }
    }
}

void printTabuleiro(){
    printf(" %c | %c | %c ", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2] );
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2] );
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2] );
    printf("\n");


}

int checkFreeSpaces(){
    int freeSpaces = 9;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if(tabuleiro[i][j] != ' '){
                freeSpaces--;
            }        
        }    
    }
    return freeSpaces;
}
void playerMove(){
    int x;
    int y;

    do
    {
        printf("Digite a linha[1 - 3]: "); 
        scanf("%d", &x);
        x--;
        printf("Agora digite a coluna[1 - 3]: ");
        scanf("%d", &y);
        y--;

        if (tabuleiro[x][y] != ' '){
            printf("Espaço Invalido\n");
        }else{
            tabuleiro[x][y] = JOGADOR;
            break;    
        }
    } while (tabuleiro[x][y] != ' ');
    
}
void computerMove(){
    //cria uma seed com base no tempo atual
    srand(time(0));
    int x;
    int y;

    if (checkFreeSpaces() > 0){
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        } while (tabuleiro[x][y] != ' ');

        tabuleiro[x][y] = COMPUTADOR;
    }else{
        printWinner(' ');
    }
}
char checkWinner(){
    
    //Checando as Linhas
    for (int i = 0; i < 3; i++){
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][0] == tabuleiro[i][2]){
            return tabuleiro[i][0];
        }
    }
    //Checando as Colunas
    for (int i = 0; i < 3; i++){
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[0][i] == tabuleiro[2][i]){
            return tabuleiro[0][i];
        }
    }
    //Checando as Diagonais
    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[0][0] == tabuleiro[2][2]){
        return tabuleiro[0][0];
    }
    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[0][2] == tabuleiro[2][0]){
        return tabuleiro[0][2];
    }

    return ' ';
}
void printWinner(char winner){
    if (winner == JOGADOR){
        printf("Você VENCEU!!");
    }
    else if (winner == COMPUTADOR){
        printf("Você PERDEU!!");
    }else{
        printf("DEU VELHA, EMPATE!!");
    }
}
