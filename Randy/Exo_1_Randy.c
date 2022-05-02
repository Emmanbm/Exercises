//Crée un programme en langage C qui calcule et affiche le périmètre d'un rectange de longueur = 7.5 et de largeur = 2.4
#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Crée un programme en langage C qui calcule et affiche le périmètre d'un rectange de longueur = 7.5 et de largeur = 2.4
float longueur = 7.5;
float largeur = 2.4;
float perimetredunrectangle = 2 * (longueur + largeur);
printf("%f + %f * 2 = %f", longueur, largeur, perimetredunrectangle);
  
  return 0;
}
