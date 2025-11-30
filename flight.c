    #include <stdio.h>
#include <string.h>
#include "flight.h"

struct flight fl[MAX_FLIGHTS];

void initFlights() {
    int i, j;

    fl[0].fno = 101;
    strcpy(fl[0].dest, "Delhi");

    fl[1].fno = 202;
    strcpy(fl[1].dest, "Mumbai");

    fl[2].fno = 303;
    strcpy(fl[2].dest, "Bangalore");

    for (i = 0; i < MAX_FLIGHTS; i++) {
        for (j = 0; j < MAX_SEATS; j++) {
            fl[i].s[j] = 0;
        }
    }
}

int findFlight(int x) {
    int i;
    for (i = 0; i < MAX_FLIGHTS; i++) {
        if (fl[i].fno == x) {
            return i;
        }
    }
    return -1;
}
