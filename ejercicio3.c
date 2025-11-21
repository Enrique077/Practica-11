/*Enrique Mena Hernández
programa 3*/

#include <stdio.h>
int resultado; //variable global
void multiplicar(); // prototipo de la función 
int main()
{
 multiplicar(); //llamado de la función multiplicar
 printf("%i",resultado);
 return 0;
}
void multiplicar() //función multiplicar
{
 resultado = 5 * 4;
}
