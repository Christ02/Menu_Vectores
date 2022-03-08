#include <stdio.h>

int main ()
{

char palabra [255];
char x[255];
int opcion = 0;

while (opcion != 5)
{
printf ("\n");
printf ("1. Ingrese palabara \n");
printf ("2. Contar caracters \n");
printf ("3. Convertir mayusculas \n");
printf ("4. Buscar letra \n");
printf ("5. Salir \n");

printf ("Ingrese la opcion que desea realizar ");
scanf("%d", &opcion);

switch (opcion)
{
    case 1:
    {
        printf ("\n");
        printf ("Ingrese una palabra: ");
        scanf("%s", palabra);
        break;
    }
    case 2:
    {
        printf ("\n");
        int i = 0;
        int contador = 0;
        while (palabra[i] != '\0')
        {
            contador = contador + 1 ;
            i = i + 1 ;
        }
        printf ("La palabra tiene %d letras! \n", contador);
        break;   
    }
    case 3:
    {
        printf ("\n");
        int i = 0;
        while (palabra[i] != '\0')
        {
            if (palabra[i] >= 'a' && palabra[i] <= 'z')
            {
                palabra[i] = palabra[i] - 'a' + 'A';
            }
            i = i + 1 ;
        }
        printf("En mayuscula es: %s \n", palabra);
        break;
    }
    case 4:
    {
        printf ("\n");
        printf ("Que letra desea buscar y contar?: ");
        scanf("%s", x);
        int i = 0;
        int j = 0;
        int contador = 0;
        while (palabra[i] != '\0')
        {
           if (palabra[i]==x[j])
           { 
               contador=contador+1;
           }
            i = i + 1;
        }
        printf("Las veces que se repite la letra %s son %i \n", x, contador);
        break; 
    }
}
}
}
