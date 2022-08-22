#include <stdio.h>

#define CUAD(X) (X)*(X)
#define CUBO(X) CUAD(X)*(X)
#define MAYOR(X,Y) ((X)>(Y) ? (X) : (Y))
// Macros Caracteres

#define ESLETRA(X) ((((X)>='A' && (X)<='Z') || ((X)>='a' && (X)<='z')) ? 1:0)
#define ESNUMERO(X) ((X)>='0' && (X)<='9') ? 1 : 0
#define ESMAYUSCULA(X) ((X)>='A' && (X)<='Z') ? 1 : 0
#define ESMINUSCULA(X) ((X)>='a' && (X)<='z') ? 1 : 0
#define ESBLANCO(X) ((X)==' ') ? 1 : 0
#define ESVOCAL(X) ((X)=='A' || (X)=='a' || (X)=='E' || (X)=='e' || (X)=='I' || (X)=='i' || (X)=='O' || (X)=='o' || (X)=='U' || (X)=='u') ? 1 : 0
#define TOUPPER(X) (ESMINUSCULA(X)) ? (X) - 32 : (X)
#define TOLOWER(X) (ESMINUSCULA(X)) ? (X) : (X) + 32


// Macros Numericas
#define ABS(x) (x)<0?-(x):(x)
#define REDONDEO(X) ((X) - (int)(X)) >= 0.5 ? (int)(++X) : (int)X
#define TRUNCAR(X) (int)(X)
#define DECIMALS(X) (X) - (int)(X)
#define ESPAR(X) ((X)%2 == 0) ? 1 : 0
#define ESIMPAR(X) ((X)%2 != 0) ? 1 : 0


int main()
{
    printf("Letra \"C\" es letra? %s", ESLETRA('C') ? "true" : "false"  );
    return 0;
}
