#include <stdio.h>
void llamarFuncion();
int main()
{
 for (int j=0 ; j < 5 ; j++)
 {
 llamarFuncion();
 }
}

void llamarFuncion()
{
 /* Solo la primera vez que se llame a esta función se creará y se le asignará
 el valor de 0 a la variable estática numVeces */
 static int numVeces = 0;
 printf("Esta función se ha llamado %d veces.\n",++numVeces);
}
