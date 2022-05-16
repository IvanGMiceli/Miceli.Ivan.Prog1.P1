#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5
#define TAMN 5

typedef struct
{
   int id;
   char procesador[10];
   char marca[10];
   int precio;

}eNotebook;

//1. Crear una función llamada aplicarDescuento que reciba como parámetro el precio de un producto
//y devuelva el valor del producto con un descuento del 5%. Realizar la llamada desde el main.

//2.Crear una función que se llame contarCaracteres que reciba una cadena de caracteres como primer parámetro
//y un carácter como segundo y devuelva la cantidad de veces que ese carácter aparece en la cadena

//Dada la estructura Notebook(id, procesador, marca, precio) generar una función que permita ordenar un array
//de dicha estructura por marca.
//Ante igualdad de marca deberá ordenarse por precio. Hardcodear datos y mostrarlos desde el main.

int aplicarDescuento(int x);
int contarCaracteres(char cad[], char letra,int tam);
int ordenarMarca(eNotebook vec[], int tam);
int hardcodearNotebook(eNotebook vec[], int tam, int cantidad);

int main()
{
    eNotebook lista[TAMN];

    hardcodearNotebook(lista,TAM,5);

    ordenarMarca(lista,TAM);


    /* PUNTO 2.

    int cadena[5] = {'a','c','b','j','a'};

    contarCaracteres(cadena,'a',TAM);*/

    /* PUNTO 1.

    int precio = 500;

    aplicarDescuento(precio);*/

    return 0;
}

int aplicarDescuento(int x)
{
    int retorno = 1;
    int total;

    total = x - (x * 5 / 100);

    printf("el precio es: %d", total);

    return retorno;
}

int contarCaracteres(char cad[], char letra,int tam)
{
    int retorno = 1;
    int contador = 0;


    for(int i=0; i<tam; i++)
    {
        if(cad[i] == letra)
        {
            contador++;
        }
        retorno = 0;
    }

    printf("La letra se repitio: %d", contador);

    return retorno;
}

int ordenarMarca(eNotebook vec[], int tam)
{

    int resultado = -1;
    eNotebook auxiliar;

    if(vec != NULL && tam > 0)
    {
        for(int i=0; i<tam - 1; i++)
        {
            for(int j = i + 1; j<tam; j++)
            {
                if(vec[i].precio == vec[j].precio)
                {
                    if(strcmp(vec[i].marca, vec[j].marca) < 0)
                    {
                        auxiliar = vec[i];
                        vec[i] = vec[j];
                        vec[j] = auxiliar;

                    }
                    else
                    {
                        if(strcmp(vec[i].marca, vec[j].marca) > 0)

                        {
                            auxiliar = vec[i];
                            vec[i] = vec[j];
                            vec[j] = auxiliar;
                        }

                    }

                }
                else
                {
                    if(vec[i].precio > vec[j].precio)
                    {
                        auxiliar = vec[i];
                        vec[i] = vec[j];
                        vec[j] = auxiliar;
                    }

                }

            }

        }
        resultado = 0;
    }
    return resultado;
}

int hardcodearNotebook(eNotebook vec[], int tam, int cantidad)
{
    int resultado = -1;
    eNotebook notebooks[10] =
    {
        {100,"Intel","Lenovo",2000},
        {110,"AMD","HP",2000},
        {120,"Intel","Visual",2500},
        {130,"AMD","Lenovo",3500},
        {140,"Intel","HP",4000}

    };
}

