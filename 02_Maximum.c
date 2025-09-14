#include <stdio.h>

int main() {
    int zahl_1 = 11;
    int zahl_2 = 47;
    int zahl_3 = 1;  
    
    int max = zahl_1;
    if (zahl_2 > max) max = zahl_2;
    if (zahl_3 > max) max = zahl_3;
    
    int modulo = max % 3;
    
    printf("OUTPUT: \n");
    printf("Zahl_1: %d\n", zahl_1);
    printf("Zahl_2: %d\n", zahl_2);
    printf("Zahl_3: %d\n", zahl_3);
    printf("Das Maximum ist: %d\n", max);
    printf("Der Wert von Modulo ist: %d\n", modulo);
    
    switch(modulo) {
        case 0:
            printf("Modulo 0: Rest 0\n");
            break;
        case 1:
            printf("Modulo 1: Rest 1\n");
            break;
        case 2:
            printf("Modulo 2: Rest 2\n");
            break;
    }
    
    return 0;
}