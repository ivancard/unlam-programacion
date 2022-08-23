#include <stdlib.h>
#include <math.h>

double factorial(int number) {
    number = abs(number);
    double factorial = 1;
    if (number == 0) {
        return factorial;
    } else {
        int i;
        for (i=number; i>0; i-- ) {
            factorial*=i;
        }
        return factorial;
    }
}

int combinatoria(int m, int n) {
    if (m<n) {
        return 0; // If the operation is not possible, returns 0.
    }
    return factorial(m)/(factorial(n)*factorial(m-n));
}

float eALaX(int x, double tol) {
    int i = 0;
    float result = 0, term;

    do {
        term = (pow(x, i)/factorial(i));
        result += term;
        i++;
    } while (term > tol);

    return result;
}

float raizCuadrada(float number, float tol) {
    float prevTerm;
    float actualTerm = 1;

    do {
        prevTerm = actualTerm;
        actualTerm = (prevTerm+(number/prevTerm))/2;
    } while(fabs(actualTerm - prevTerm) > tol);

    return actualTerm;
}

int isInFibonacci(int num) {

    //Returns 1 if is true, 0 of is false.

    int firstNumber = 1;
    int secondNumber = 1;
    int aux = 0;

    while (aux != num && aux<num) {
        aux = firstNumber + secondNumber;
        firstNumber = secondNumber;
        secondNumber = aux;
        if(num == aux || num == 1) return 1;
    }

    return 0;
}

float calcularSeno(float number, float tol) {

    int i = 1;
    float result = 0;
    int term = 0;

    do {
        term = pow(number, i)/factorial(i);
        result += (term * (- 1));
        i += 2;
    } while (tol < abs(term));

    return result;

}

int isPerfectDeficientOrAbundant(int number) {

    /*
     *  returns:
     *      1 - for perfect
     *      2 - for deficient
     *      3 - for abundant
     *
    */

    int i;
    int accumulator = 0;

    for(i=1; i<number ; i++) {
        if(number%i==0) {
            accumulator += i;
        }
    }
    return accumulator == number ? 1 : (accumulator < number ? 2 : 3);
}

int productByAddition(int multiplicand, int multiplier) {
    int product = 0;

    if (multiplicand != 0 &&  multiplier != 0) {
        int i;
        for (i=0 ; i<multiplicand ; i++) {
            product+=multiplier;
        }
        return product;
    } else {
        return 0;
    }
}

void quotientAndRemainder(int numberA, int numberB) {
    if (numberB != 0) {
        printf("El cociente entero entre %d y %d es: %d\n", numberA, numberB, numberA/numberB );
        printf("El resto entre %d y %d es: %d", numberA, numberB, numberA%numberB );
    } else {
        printf("No es posible dividir por cero");
    }
}

int additionFirstXNumbers(int number) {
    int acumulator = 0;
    int i;

    for (i=0 ; i<=number ; i++ ) {
        acumulator+= i;
    }
    return acumulator;
}

int additionFirstEvenNumbers(int number) {
    int acumulator = 0;
    int i;

    for (i=0 ; i<=number ; i++ ) {
        if (i%2 == 0 ) acumulator+= i;
    }
    return acumulator;
}

int additionFirstEvenNumbersLessX(int number) {
    int acumulator = 0;
    int i;

    for (i=0 ; i<number ; i++ ) {
        if (i%2 == 0 ) acumulator+= i;
    }
    return acumulator;
}

int isPrime(int number) {
    int i;
    for(i = 2; i < number; i++) {
        if(number % i == 0) {
            return 0;
        }
    }
    return 1;
}

typedef struct {
    int day;
    int month;
    int year;
} Fecha;


int esBisiesto(int year) {
    if(year % 4 == 0) {
        if(year % 100 == 0) {
            if(year % 400 == 0) {
                return 1;
            } else {
                return 0;
            }
        } else {
            return 1;
        }
    } else {
        return 0;
    }
}

int validarFecha(Fecha fecha) {
    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if( fecha.day<=0 || fecha.day>31 || fecha.month<=0 || fecha.month>12 || fecha.year <= 0) {
        return 0;
    }

    if(fecha.day > monthDays[fecha.month - 1]) {
        if (fecha.month==2 && fecha.day == 29) {
            if (esBisiesto(fecha.month)) {
                return 1;
            } else {
                return 0;
            }
        } else {
            return 0;
        }
    }

    return 1;
}

Fecha nextDay(Fecha fecha){
    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    Fecha nextDate = {0,0,0};

    if(fecha.day > monthDays[fecha.month - 1]){
        if (fecha.day == monthDays[fecha.month - 1]){
            if (fecha.month == 12) {
                nextDate.day = 01;
                nextDate.month = 01;
                nextDate.year =++fecha.year;
                return nextDate;
            } else {
                nextDate.day = 01;
                nextDate.month = ++fecha.month;
                nextDate.year = fecha.year;
                return nextDate;
            }
        }
        nextDate.day = fecha.day + 1;
        nextDate.month = fecha.month;
        nextDate.year = fecha.year;
        return nextDate;
    }
    return nextDate;
}

