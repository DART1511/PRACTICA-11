#include <stdio.h>
void sumar(); // prototipo de la función
int main()
{
 sumar(); // llamado de la función suma
}
void sumar() // función suma
{
 int z, x=5, y=10; //variables locales
 z=x+y;
 printf("%i",z);
}
