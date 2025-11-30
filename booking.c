#include <stdio.h>
#include "flight.h"
#include "booking.h"

void bookSeat() {
    int f, seat, i;

    printf("flight no: ");
    scanf("%d", &f);

    i = findFlight(f);
    if (i < 0) {
        printf("no flight\n");
        return;
    }

    printf("seat between 0 to 49: ");
    scanf("%d", &seat);

    if (seat < 0 || seat >= MAX_SEATS) {
        printf("seat wrong\n");
        return;
    }

    if (fl[i].s[seat] == 1) {
        printf("already booked\n");
    } else {
        fl[i].s[seat] = 1;
        printf("done\n");
    }
}

void cancelSeat() {
    int f, seat, i;

    printf("flight no: ");
    scanf("%d", &f);

    i = findFlight(f);
    if (i < 0) {
        printf("wrong flight\n");
        return;
    }

    printf("seat: ");
    scanf("%d", &seat);

    if (seat < 0 || seat >= MAX_SEATS) {
        printf("wrong seat\n");
        return;
    }

    if (fl[i].s[seat] == 0) {
        printf("empty already\n");
    } else {
        fl[i].s[seat] = 0;
        printf("seat cancelled\n");
    }
}
