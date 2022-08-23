#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../library/functionsTp1.h"

void menu(void);
void delay(int);

int main() {
    system("color 06");

    Fecha date = {31,04,1999};
    Fecha proximoDia= nextDay(date);
    printf("%d-%d-%d", proximoDia.day, proximoDia.month, proximoDia.year);

//    int desicion;
//    int inputNumber=0;
   /* do {
        menu();
        scanf("%d",&desicion);

        switch (desicion) {
        case 1:
            puts("\n\t---Factorial---\n");
            puts("Ingrese un numero a operar: ");
            scanf("%d", &inputNumber);
            printf("El factorial de %d es: %lf.0",inputNumber, factorial(inputNumber));
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
        case 12:
            break;
        case 13:
            break;
        case 14:
            break;
        case 15:
            break;
        case 16:
            break;
        case 17:
            break;
        case 18:
            break;
        case 0:
            break;
        default:
            printf("\n\tNo es una opcion valida...\n");
            delay(1);
            main();
            break;
        }
    } while (desicion !=0);*/

//    printf("Fin del programa\n");


    return 0;
}

void menu(void) {
    printf("\n\tSelecciona un numero(0 para salir)\n\n");
    printf("\t\t+--------------------------------------+\n");
    printf("\t\t|                MENU                  |\n");
    printf("\t\t+--------------------------------------+\n");
    printf("\t\t|   1) Factorial                       |\n");
    printf("\t\t|   2) Combinatorio                    |\n");
    printf("\t\t|   3) e^x                             |\n");
    printf("\t\t|   4) Raiz cuadrada                   |\n");
    printf("\t\t|   5) Fibonacci                       |\n");
    printf("\t\t|   6) Seno(x)                         |\n");
    printf("\t\t|   7) Naturales perf/def/abund        |\n");
    printf("\t\t|   8) Sumas sucesivas                 |\n");
    printf("\t\t|   9) Cociente entero y resto         |\n");
    printf("\t\t|   10) Suma primeros N naturales      |\n");
    printf("\t\t|   11) Suma primeros N pares          |\n");
    printf("\t\t|   12) Suma primeros par menores a N  |\n");
    printf("\t\t|   13) Determinar si N es primo       |\n");
    printf("\t\t|   14) Fecha correcta                 |\n");
    printf("\t\t|   15) Fecha dia siguiente            |\n");
    printf("\t\t|   16) Suma de dias a Fecha           |\n");
    printf("\t\t|   17) Resta de dias a Fecha          |\n");
    printf("\t\t|   18) Diferencia de dias             |\n");
    printf("\t\t|   19) Dia a entero                   |\n");
    printf("\t\t|   20) Ejercicio                      |\n");
    printf("\t\t|   21) Ejercicio                      |\n");
    printf("\t\t|   22) Ejercicio                      |\n");
    printf("\t\t|   23) Ejercicio                      |\n");
    printf("\t\t|   24) Ejercicio                      |\n");
    printf("\t\t|   25) Ejercicio                      |\n");
    printf("\t\t|   26) Ejercicio                      |\n");
    printf("\t\t|   27) Ejercicio                      |\n");
    printf("\t\t|   28) Ejercicio                      |\n");
    printf("\t\t|   29) Ejercicio                      |\n");
    printf("\t\t|   30) Ejercicio                      |\n");
    printf("\t\t|   31) Ejercicio                      |\n");
    printf("\t\t|   32) Ejercicio                      |\n");
    printf("\t\t|   33) Ejercicio                      |\n");
    printf("\t\t|   34) Ejercicio                      |\n");
    printf("\t\t|   35) Ejercicio                      |\n");
    printf("\t\t|   36) Ejercicio                      |\n");
    printf("\t\t|   37) Ejercicio                      |\n");
    printf("\t\t+--------------------------------------+\n");
}

void delay(int number_of_seconds) {
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
