#include <stdio.h>

int restore() {
    return 1;
}

int add(int n) {
    return n+=1;
}

int negate(int n) {
    return -n;
}

int mult(int n) {
    return n*2;
}

int main() {

    int n = 1;
    int menu;
    do {
        printf("n = %i\n\n", n);
        printf(
            "0. Restore the initial value (n = 1)\n"
            "1. Add 1\n"
            "2. Negate the number (+/-)\n"
            "3. Multiple by 2\n"
            "9. Exit\n");

        scanf("%i", &menu);

        switch (menu) {
            case 0: 
                n = restore();
                break;
            case 1: 
                n = add(n);
                break;
            case 2: 
                n = negate(n);
                break;
            case 3: 
                n = mult(n);
                break;
            case 9: 
                break;
        }
    }while (menu != 9);
    return 0;
}