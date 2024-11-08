#include <stdio.h>
#include <ctype.h>

int main() {
    // Definindo as perguntas
    char questions[][100] = {
        "1. Em que ano foi criada a linguagem C?:", 
        "2. Quem criou a linguagem C?:",         
        "3. O que veio antes de C?:"
    };

    // Definindo as alternativas
    char alternativas[][100] = {
        "A. 1969", "B. 1972", "C. 1975", "D. 1999",
        "A. Dennis Ritchie", "B. Tesla", "C. John Carmack", "D. Doc Brown",
        "A. Objective C", "B. B", "C. C++", "D. C#"
    };

    // Definindo as respostas corretas
    char answers[3] = {'B', 'A', 'B'};

    int score = 0;
    int numberOFquestions = sizeof(questions) / sizeof(questions[0]);

    printf("QUIZ GAME\n");
    printf("***************************************\n");

    for (int i = 0; i < numberOFquestions; i++) {
        printf("%s\n", questions[i]);

        // Mostra as alternativas para a pergunta atual
        for (int j = (i * 4); j < (i * 4) + 4; j++) {
            printf("%s\n", alternativas[j]);
        }

        char palpite;
        printf("Palpite: ");
        scanf(" %c", &palpite);  // Adiciona um espaço antes de %c para ignorar caracteres de \n anteriores
        palpite = toupper(palpite);  // Converte para maiúsculo

        if (palpite == answers[i]) {
            printf("CORRECT!\n");
            score++;
        } else {
            printf("INCORRECT!\n");
        }
    }

    printf("Score Final: %d/%d\n", score, numberOFquestions);

    return 0;
}
