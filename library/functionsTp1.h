#ifndef FUNCTIONSTP1_H_INCLUDED
#define FUNCTIONSTP1_H_INCLUDED

typedef struct {
    int day;
    int month;
    int year;
} Fecha;

double factorial(int);
int combinatoria(int, int);
float eALaX(int, double);
float raizCuadrada(float, float);
int isInFibonacci(int);
double calcularSeno(float, float);
int isPerfectDeficientOrAbundant(int);
int productByAddition(int, int);
void quotientAndRemainder(int, int);
int additionFirstXNumbers(int);
int additionFirstEvenNumbers(int);
int additionFirstEvenNumbersLessX(int);
int isPrime(int);
int validarFecha(Fecha);
Fecha nextDay(Fecha);
Fecha sumarDias(Fecha, int);

#endif // FUNCTIONSTP1_H_INCLUDED
