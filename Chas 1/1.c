//
// Created by Dimitrius on 10.11.23.
//
#include <stdio.h>

void VA() {
    int ganzeZahl = 2 + 3 / 5;
    float kommaZahl = 2 + 3 / 5;

    printf("%f\n", kommaZahl);
    printf("%d\n", ganzeZahl);
    printf("%d\n", 5 % 3 - 2);
}

void VB() {
    const int N;
    int sum = 0;

    scanf("%d", &N);

    for (int i = 0; i <= N; i++) {
        sum += i;
    }

    int i = 0;
    while(i <= N){
        sum += i;
        i++;
    }

    printf("The Sum is: %d", sum);
}

void PA() {
    int i0, i1, i2, i3, i4;
    double d0, d1, d2, d3, d4;
    d0 = 3 / 4.0;
    d1 = 3. / 4;
    d2 = 3 / 4;
    d3 = d0 + 2;
    d4 = d2 + 2;

    i0 = 3 / 4.0 + 2;
    i1 = 5 - 3. / 4;
    i2 = 3 / 4 + 2;

    i3 = 4 + 1 % 3;
    i4 = 5 * 8 % 3 / 2;
    printf("%d %d %d %d %d\n", i0, i1, i2, i3, i4);
    printf("%f %f %f %f %f", d0, d1, d2, d3, d4);
    printf("\n%f\n%f\n%f", 5 - 3. / 4, 3 / 4.0 + 2, (float) (3 / 4));
    printf("\n%d\n%d", (int) (5 - 3. / 4), (int) (3 / 4.0 + 2));
}

void PB() {
#define PRV 'A'
#define VTOR 'G'
#define TRET 'D'
    char c1, c2, c3;
    scanf("%c %c%c", &c1, &c2, &c3); // LEADING ZA WHITESPACE
    if (c1 == PRV) {
        printf("Tochno");
    }
}

void PC() {
    int N, brojac = 0;

    scanf("%d", &N);

    // while (brojac <= N) {
    //     for (int i = 0; i < brojac; ++i) {
    //         printf("*");
    //     }
    //     printf("\n");
    //     brojac++;
    // }

    //*
    //**
    //***
    //

    while(brojac < N){
        printf("*");
        for(int i = 0; i < brojac; ++i){
            printf("*");
        }
        printf("\n");
        brojac++;
    }

}

void PD() {
    int N;
    scanf("%d", &N);

    printf("     ");
    for (int i = 1; i <= N; ++i) {
        printf("%-5d", i);
    }

    for (int i = 1; i <= N; ++i) {
        printf("\n");
        printf("%-5d", i);
        for (int j = 1; j <= N; ++j) {
            printf("%-5d", i * j);
        }
    }
}

void NA() {
    int i0 = 3, i1 = 5, i2 = 10, i3;
    double d0 = 3., d1 = 5., d2;
    i3 = i0 + i1 + i2; // 3 + 5 + 10 = 18
    i3 = i2 - i1 - i0; // 18 = 10 - 5 - 3 = 0 | i3 = 0
    i3 = i2 / i0 + i1 * i2; // 10 / 3 + 5 * 10 = 3 + 50 = 53
    i3 = i2 / (i0 + i1) * i2; // 10 / (3 + 5) = 10 / 8 = 1
    i3 = i2 / (d0 + i1) * i2; // 10 / (3.0 + 3) = 10 / 6.0 = 1.6
    i3 = i2 % i0; // 10 % 3 = 1
    d2 = d1 / d0; // 5.0 / 3.0 = 1.6
    d2 = d1 + d0 * i0; // 5.0 + 3.0 * 3 = 5.0 + 9.0 = 14.0
    d2 = i2 / d0; // 10 / 3.0 = 3.3
    d2 = i2 / d0 + d1 / d0; // 10 / 3.0 + 5.0 / 3.0 = 3.3 + 1.6 = 4.9
    d2 = i2 / i0 + d1 / i0; // 10 / 3 + 5.0 / 3 = 3 + 1.6 = 4.6
}

void NB() {
#define ZAHL 345
    int a = ZAHL;
    int querSum = 0;
    for (; a != 0; a /= 10) {
        querSum += a % 10;
    }

    printf("Die Quersumme von Zahl %d ist: %d", ZAHL, querSum);
}

void NC() {
    int a = 3, b = 5, c = -1, min;
    min = c;
    if (a < b)
        if (a < c)
            min = a;
    else
        if (b < c)
            min = b;
    printf("Minimum:%d\n", min);

}

void ND() {
#define N 3
#define num 5
    printf("%d", num << N);
}
