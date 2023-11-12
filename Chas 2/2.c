//
// Created by Dimitrius on 12.11.23.
//
#include <stdio.h>
#include <string.h> // strlen za PC2
#include <stdlib.h> // malloc za PC2

void PA2() {
    char zbor[100];
    scanf("%s", zbor);
    // scanf("%[^\n]", zbor);
    // fgets(zbor, 100, stdin);

    char karakter = zbor[0]; //test\0
    int i = 0, counter = 0;
    while (karakter != '\0') {
        if (karakter == 'e') {
            counter++;
        }
        i = i + 1;
        karakter = zbor[i];
    }

    printf("%d", counter);
}

void PB2() {
    int matrix[4][4] = {{1,  2,  3,  4},
                        {5,  6,  7,  8},
                        {9,  10, 11, 12},
                        {13, 14, 15, 16}};

    for (int i = 0; i < 4; ++i) {
        for (int j = i; j < 4; ++j) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void PC2() {
    // char *str1; /* Eingabestring */ // <- Fali alokacija
    char str1[81];
    char str2[81]; /* Ausgabestring */ // <- Fali golemina
    char *p1, *p2; // <- Deklarirame 2 pointeri od tip char

    // str1 = (char *) malloc(sizeof(char) * 80); // <- Alociraj memorija za 80 polinja

    printf("Bitte ein Wort eingeben: ");
    scanf(" %s", str1);

    /* soll nur eine Ausgabe erfolgen, geht dies auch ohne str2 und zwar wie folgt: */
    printf("So soll das Ergebnis aussehen: ");
    for (int i = strlen(str1) - 1; i >= 0; i--) {
        printf("%c", str1[i]);
    }

    /* nun mit Kopie in str2: */
    p1 = str1 + strlen(str1) - 1; /* p1 zeigt auf das Ende von str1 */
    p2 = str2; /* p2 zeigt auf den Anfang von str2 */

    /* von hinten nach vorn wird str1 zeichenweise nach str2 kopiert */
    while (p1 >= str1) { // <- Dodeka se naogjame posle pochetnata memorija na str1
        *p2 = *p1; // Vrednosta smestena vo p2 = vrednosta smestena vo p1
        p2++;
        p1--;
    }

    *p2 = '\0'; /* str2 Sting-Endezeichen abschliessen */

    /* Ausgabe beider Strings */
    printf("\n%s <--> %s\n", str1, str2);

}

void NA2() {
#define key 15
    char zbor[31]; // +1 za '\0'
    scanf("%s", zbor);

//    char *p = zbor;
//    while (*p != '\0') {
//        *p = *p ^ key;
//        p++;
//    }
//
//    printf("Encrypted: %s\n", zbor);
//    p = zbor;
//    while (*p != '\0') {
//        *p = *p ^ key;
//        p++;
//    }

    char c = zbor[0];
    for (int i = 0; c != '\0'; ++i) {
        zbor[i] = c ^ key;
        c = zbor[i+1];
    }

    printf("Encrypted: %s\n", zbor);
    c = zbor[0];
    for (int i = 0; c != '\0'; ++i) {
        zbor[i] = c ^ key;
        c = zbor[i+1];
    }

    printf("Decrypted: %s", zbor);
}

void NB2() {
    float matrix[2][2] = {{2.1, 3.0},
                          {4.2, 3.5}};
    int scalar;
    scanf("%d", &scalar);

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            matrix[i][j] = matrix[i][j] * scalar;
        }
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%f ", matrix[i][j]);
        }
        printf("\n");
    }
}

void NC2() {
    char *str = "Hello World!\n";
    int Laenge = 0;

    while (*str++ != '\0') // <- Sporeduvashe memoriska lokacija so karakter, so * se zima vrednosta
        ++Laenge;
    for(int i = 0; i <= Laenge; ++i){
        str--; // <- Mora da se vrati nazad
    }
    printf("%d: %s", Laenge, str); // <- Se broi i '\n'
}