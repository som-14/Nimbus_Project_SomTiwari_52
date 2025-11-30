#include <stdio.h>
#include "flight.h"
#include "booking.h"
#include "info.h"
#include "app.h"

void runApp() {
    int ch;

    initFlights();

    printf("simple airline project\n");
    while (1) {
        printf("\n1.show\n2.book\n3.cancel\n4.details\n5.exit\n");
        printf("choice: ");
        scanf("%d", &ch);

        if (ch == 1) {
            showFlights();
        } else if (ch == 2) {
            bookSeat();
        } else if (ch == 3) {
            cancelSeat();
        } else if (ch == 4) {
            showDetails();
        } else if (ch == 5) {
            break;
        } else {
            printf("wrong\n");
        }
    }
}

int main() {
    runApp();
    return 0;
}
