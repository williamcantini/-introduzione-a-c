#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * Calcolatrice semplice in C
 * Supporta operazioni di base: addizione, sottrazione, moltiplicazione, divisione
 * e altre operazioni come potenza e radice quadrata
 */

// Prototipi delle funzioni
void mostraMenu();
double somma(double a, double b);
double sottrazione(double a, double b);
double moltiplicazione(double a, double b);
double divisione(double a, double b);
double potenza(double base, double esponente);
double radiceQuadrata(double numero);

int main() {
    int scelta;
    double num1, num2, risultato;
    char continua = 's';
    
    printf("=== CALCOLATRICE IN C ===\n\n");
    
    while (continua == 's' || continua == 'S') {
        mostraMenu();
        printf("Inserisci la tua scelta (1-7): ");
        scanf("%d", &scelta);
        
        switch (scelta) {
            case 1: // Addizione
                printf("Inserisci il primo numero: ");
                scanf("%lf", &num1);
                printf("Inserisci il secondo numero: ");
                scanf("%lf", &num2);
                risultato = somma(num1, num2);
                printf("Risultato: %.2lf + %.2lf = %.2lf\n", num1, num2, risultato);
                break;
                
            case 2: // Sottrazione
                printf("Inserisci il primo numero: ");
                scanf("%lf", &num1);
                printf("Inserisci il secondo numero: ");
                scanf("%lf", &num2);
                risultato = sottrazione(num1, num2);
                printf("Risultato: %.2lf - %.2lf = %.2lf\n", num1, num2, risultato);
                break;
                
            case 3: // Moltiplicazione
                printf("Inserisci il primo numero: ");
                scanf("%lf", &num1);
                printf("Inserisci il secondo numero: ");
                scanf("%lf", &num2);
                risultato = moltiplicazione(num1, num2);
                printf("Risultato: %.2lf * %.2lf = %.2lf\n", num1, num2, risultato);
                break;
                
            case 4: // Divisione
                printf("Inserisci il numeratore: ");
                scanf("%lf", &num1);
                printf("Inserisci il denominatore: ");
                scanf("%lf", &num2);
                
                if (num2 == 0) {
                    printf("Errore: impossibile dividere per zero!\n");
                } else {
                    risultato = divisione(num1, num2);
                    printf("Risultato: %.2lf / %.2lf = %.2lf\n", num1, num2, risultato);
                }
                break;
                
            case 5: // Potenza
                printf("Inserisci la base: ");
                scanf("%lf", &num1);
                printf("Inserisci l'esponente: ");
                scanf("%lf", &num2);
                risultato = potenza(num1, num2);
                printf("Risultato: %.2lf ^ %.2lf = %.2lf\n", num1, num2, risultato);
                break;
                
            case 6: // Radice quadrata
                printf("Inserisci un numero: ");
                scanf("%lf", &num1);
                
                if (num1 < 0) {
                    printf("Errore: impossibile calcolare la radice quadrata di un numero negativo!\n");
                } else {
                    risultato = radiceQuadrata(num1);
                    printf("Risultato: √%.2lf = %.2lf\n", num1, risultato);
                }
                break;
                
            case 7: // Uscita
                printf("Grazie per aver usato la calcolatrice!\n");
                return 0;
                
            default:
                printf("Opzione non valida! Per favore, riprova.\n");
        }
        
        printf("\nVuoi eseguire un'altra operazione? (s/n): ");
        scanf(" %c", &continua);
        printf("\n");
    }
    
    printf("Grazie per aver usato la calcolatrice!\n");
    return 0;
}

// Implementazione delle funzioni
void mostraMenu() {
    printf("MENU OPERAZIONI:\n");
    printf("1. Addizione\n");
    printf("2. Sottrazione\n");
    printf("3. Moltiplicazione\n");
    printf("4. Divisione\n");
    printf("5. Potenza\n");
    printf("6. Radice quadrata\n");
    printf("7. Esci\n\n");
}

double somma(double a, double b) {
    return a + b;
}

double sottrazione(double a, double b) {
    return a - b;
}

double moltiplicazione(double a, double b) {
    return a * b;
}

double divisione(double a, double b) {
    return a / b;
}

double potenza(double base, double esponente) {
    return pow(base, esponente);
}

double radiceQuadrata(double numero) {
    return sqrt(numero);
}