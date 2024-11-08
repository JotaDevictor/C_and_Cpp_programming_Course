#include <stdio.h>

int main(){
     
     // memória = um conjunto de bytes dentro da RAM(rua)
     // bloco de memória = uma unidade única (byte) dentro da memória, usada para armazenar algum valor(pessoa)
     // endereço de memória = o endereço onde um bloco de memória está localizado(endereço da casa)
 
    char a;
    double b[3];

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));

    printf("%p\n", &a);
    printf("%p\n", &b);
    
    //O tamanho de a é 1 byte, como esperado para uma variável do tipo char.
    //O tamanho de b é 24 bytes porque é um array de três elementos double, cada um com 8 bytes (3 * 8 = 24).
    
    return 0;
}







    