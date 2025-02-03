/********************************

    Escreva um programa em C que leia 8 números inteiros e armazene-os em um vetor. 
    Depois, o programa deve contar quantos desses números são negativos e exibir essa quantidade.

*********************************/

#include <stdio.h>

int main()
{
    int numeros[8] = {0, 1, 2, 3, 4, 5, 6, 7 }; 
    int negativos = 0; // variavel responsavel pelos valores negativos, é inicializada com 0 para que os valores digitados comece do 0.
    
     // Ler dos números
    printf("Digite 8 numeros:\n"); //pede ao usuario a digitar 8 numeros
    for (int i = 0; i < 8; i++) { //vai emprimir tantas vezes enquanto i for menor que 8
        printf("Número %d: ", i + 1); //isso vai mostrar os numeros de 1 a 1 por conta do "i + 1" até dar 8 vezes (exibe Número 1, Número 2... até Número 8.)
        scanf("%d", &numeros[i]);//guarda o número digitado pelo usuario na variavel de numeros
    
     // Verificar se o número é negativo
        if (numeros[i] < 0) { //se o número for menor que zero
            negativos++; //entao ele é negativo
        }
    }
    printf("Desses 8 valores existem: %d negativos\n", negativos); //mostra quantos numeros foram negativos
 
    return 0;
}
 
 /* _______________________________
   | .___________________________. |
   | |                           | |
   | |      Programa Por:        | |
   | | 𝓡𝓪𝓶𝓸𝓷 𝓑𝓾𝔃𝓾𝓽𝓽𝓲 𝓥𝓸𝓵𝓵𝓮𝓽  | |
   | |                           | |
   | |                           | |
   | .___________________________. |
   /.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.\       
  /.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.\      
 /.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.\     
/_______/____________________\________\
\_____________________________________/    
