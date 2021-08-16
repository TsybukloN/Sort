#include "Sort_lib.h"

int* isort(int* mass, short size) { //2ms faster
    for (short e = 0; e < size; e++) {
        for (short y = 0; y < size; y++) {
            if (mass[e] < mass[y]) {
                int x = mass[y];
                mass[y] = mass[e];
                mass[e] = x;
            }
        }
    }
    return mass;
}

int* ssort(int* mass, short size) { //65ms slower
    int u;
    for (short n = size - 1; n >= 0; n--) {
        int x = mass[n];
        short flag = 0;
        for (short e = n - 1; e >= 0; e--) {
            if (x < mass[e]) {
                x = mass[e];
                u = e;
                flag++;
            }
        }
        if (flag != 0) {
            x = mass[u];
            mass[u] = mass[n];
            mass[n] = x;
        }
    }
    return mass;
}

//int* shellsort(int* mass, short size) {
//  
//  
//}
