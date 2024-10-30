#include <stdio.h>

int main(){
    int x;         //Declaração 
    x = 123;       //Inicialização
    int y = 321;   //Declaração + Inicialização
  
    int age = 20;        //Inteiro
    float gpa = 2.05;    //Real
    char grade = 'C';    //Um caractere 
    char name[] = "Bro"; //Uma array de cararcteres ['B']['r']['o']['\0']
  
    printf("Hello %s!\n", name);
    printf("You are %d years old\n", age);
    printf("You average grade is \"%c\"\n", grade);
    printf("Your GPA is %.2f\n", gpa);
  
    return 0;
}
