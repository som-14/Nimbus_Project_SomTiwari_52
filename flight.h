#ifndef FLIGHT_H
#define FLIGHT_H

#define MAX_FLIGHTS 3
#define MAX_SEATS 50

struct flight {
    int fno;
    char dest[20];
    int s[MAX_SEATS];
};

extern struct flight fl[MAX_FLIGHTS];

void initFlights();
int findFlight(int x);

#endif
