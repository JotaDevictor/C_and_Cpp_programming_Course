#include <stdio.h>

void printIdade(int *idade){

    printf("Função = 'Você possui %d anos de idade.'\n", *idade);    //Desreferenciar

}

int main(){
    int age = 21;
    int *pAge = NULL;
    pAge = &age;

    printf("Endereço da variável age: %p\n", &age);
    printf("Valor do ponteiro Age: %p\n", pAge);
    
    printf("tamanho de age: %d bytes\n", sizeof(age));
    printf("tamanho do ponteiro Age: %d bytes\n", sizeof(pAge));

    printf("Valor da variável age: %d\n", age);
    printf("Valor armazenado no endereço: %d\n", *pAge);            // Desreferenciação


    printIdade(pAge);



    return 0;
}

