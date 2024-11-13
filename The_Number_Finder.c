#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>
int P_A=0;
int main () {
    int N_R, N_U;
    int T_E = 1;
    char R_O[5];
    if (P_A==0) {
        printf("Benvenuti a The Number Choice!\n");
        Sleep (2000);
    }     
    printf ("Per cominciare scrivete di quanto volete fare il range di valori, da 1 a? ");
    scanf("%d", &N_R);
    srand(time(0));
    N_R = rand() % N_R + 1;
    printf("Tutto pronto, provate a indovinare il numero!\n");
    Sleep(1000);
    do {
        printf("Tentativo numero %d: ", T_E);
        scanf("%d", &N_U);
        if (N_U > N_R) {
            printf("Il numero e' minore di %d, riprovare.\n", N_U);
            T_E++;
        }
        else if (N_U < N_R) {
            printf("Il numero e' maggiore di %d, riprovare.\n", N_U);
            T_E++;
        }
        else {
            printf("Complimenti, hai indovinato il numero in %d tentativi!\n", T_E);
        }
    } while (N_U != N_R);
    printf("Volete ricominciare il gioco? ");
    scanf("%s", R_O);
    if (strcmp(R_O, "Si") == 0 || strcmp(R_O, "si") == 0) {
        P_A++;
        system("cls");
        main();
    } else {
        printf("Grazie per aver giocato! Arrivederci.\n");
    }
    Sleep(3000);
    return 0;
}