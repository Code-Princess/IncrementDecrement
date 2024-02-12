#include<stdio.h>
int main(void){
    // Inkrementieren
    int a;
    a = 5;
    a++;
    // a = a + 1; //alternative Schreibweise
    printf("a: %d\n", a);

    // Dekrementieren
    int b;
    b = 2;
    b--;
    // b = b - 1; //alternative Schreibweise
    printf("b: %d\n", b);

    // Postinkrement
    int c;
    c = 0;
    a = 0;
    c = a++;
    // c = a; // alternative Schreibweise: zuerst Variablenzuweisung
    // a = a + 1; // danach Inkrementieren
    printf("c: %d\n", c);
    printf("a: %d\n", a);

    // Präinkrement
    c = 0;
    a = 0;
    c = ++a;
    // a = a + 1; // alternative Schreibweise: zuerst Inkrementieren
    // c = a; // danach Variablenzuweisung
    printf("c: %d\n", c);
    printf("a: %d\n", a);

    // Postdekrement
    int d;
    d = 0;
    b = 0;
    d = b--;
    // d = b; // alternative Schreibweise: zuerst Variablenzuweisung
    // b = b - 1; // danach Dekrementieren
    printf("d: %d\n", d);
    printf("b: %d\n", b);

    // Prädekrement
    d = 99;
    b = 3;
    d = --b;
    // b = b - 1; // alternative Schreibweise: zuerst Dekrementieren
    // d = b; // danach Variablenzuweisung
    printf("d: %d\n", d);
    printf("b: %d\n", b);

}