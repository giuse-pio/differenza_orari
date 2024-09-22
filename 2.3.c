#include<stdio.h>

int main() {
    float ora1, min1, sec1, ora2, min2, sec2, differenza;
    printf("inserisci l'ora: ");
    scanf("%f", &ora1);
    printf("inserisci i min: ");
    scanf("%f", &min1);
    printf("inserisci i sec: ");
    scanf("%f", &sec1);
    printf("inserisci l'ora2: ");
    scanf("%f", &ora2);
    printf("inserisci i min2: ");
    scanf("%f", &min2);
    printf("inserisci i sec2: ");
    scanf("%f", &sec2);
    ora1=(ora1*3600);
    min1=(min1*60);
    ora2=(ora2*3600);
    min2=(min2*60);
    differenza=(ora1+min1+sec1)-(ora2+min2+sec2);
    printf("la differenza dei due orari è: %f secondi", differenza);
}



