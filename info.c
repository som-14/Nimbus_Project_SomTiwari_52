#include <stdio.h>
#include "flight.h"
#include "info.h"

void showFlights() {
    int i;
    printf("\nFlights available:\n");
    for (i = 0; i < MAX_FLIGHTS; i++) {
        printf("%d  %s\n", fl[i].fno, fl[i].dest);
    }
}

void showDetails() {
    int f, i, j;
    int b = 0, e = 0;

    printf("flight no: ");
    scanf("%d", &f);

    i = findFlight(f);
    if (i < 0) {
        printf("not found\n");
        return;
    }

    for (j = 0; j < MAX_SEATS; j++) {
        if (fl[i].s[j] == 1)
            b++;
        else
            e++;
    }

    printf("\nFlight: %d\n", fl[i].fno);
    printf("To: %s\n", fl[i].dest);
    printf("Booked: %d\n", b);
    printf("Empty: %d\n", e);
}info
