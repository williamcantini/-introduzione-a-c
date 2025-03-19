#include <stdio.h>
#include <math.h>

/**
 * Programma per risolvere un'equazione di secondo grado nella forma ax² + bx + c = 0
 * Calcola le soluzioni reali, se esistono, usando la formula:
 * x1 = (-b + sqrt(Δ)) / (2a)
 * x2 = (-b - sqrt(Δ)) / (2a)
 * dove Δ (Delta) = b² - 4ac
 */

int main() {
    double a, b, c; // Coefficienti dell'equazione
    double delta;   // Discriminante
    double x1, x2;  // Soluzioni

    // Intestazione del programma
    printf("=== RISOLUTORE DI EQUAZIONI DI SECONDO GRADO ===\n");
    printf("Risolve equazioni nella forma: ax² + bx + c = 0\n\n");

    // Input dei coefficienti
    printf("Inserisci il coefficiente a: ");
    scanf("%lf", &a);
    
    // Verifica che l'equazione sia effettivamente di secondo grado
    if (a == 0) {
        printf("Non è un'equazione di secondo grado (a = 0).\n");
        return 1;
    }
    
    printf("Inserisci il coefficiente b: ");
    scanf("%lf", &b);
    
    printf("Inserisci il coefficiente c: ");
    scanf("%lf", &c);
    
    // Calcolo del discriminante
    delta = b*b - 4*a*c;
    
    // Analisi delle soluzioni in base al discriminante
    if (delta > 0) {
        // Due soluzioni reali distinte
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("\nL'equazione ha due soluzioni reali distinte:\n");
        printf("x1 = %.4lf\n", x1);
        printf("x2 = %.4lf\n", x2);
    } else if (delta == 0) {
        // Una soluzione reale (doppia)
        x1 = -b / (2*a);
        printf("\nL'equazione ha una soluzione reale doppia:\n");
        printf("x1 = x2 = %.4lf\n", x1);
    } else {
        // Nessuna soluzione reale
        double parteReale = -b / (2*a);
        double parteImmaginaria = sqrt(-delta) / (2*a);
        printf("\nL'equazione non ha soluzioni reali.\n");
        printf("Soluzioni complesse:\n");
        printf("x1 = %.4lf + %.4lfi\n", parteReale, parteImmaginaria);
        printf("x2 = %.4lf - %.4lfi\n", parteReale, parteImmaginaria);
    }
    
    return 0;
}