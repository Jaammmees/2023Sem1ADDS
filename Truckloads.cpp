// Pile of crates to divide pile in half, forming two smaller piles, then continue dividing untill piles fit on a truck. When an odd number is divided
// one pile will have one more than the other.
// Problem is to determine how many trucks we need to ship the crates

// Create a class truckloads that contains a method numTrucks that is given numCrates (warehouse number) and load size (max on truck) and return trucks required

#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int maxLoad) {
    if (numCrates == 0) {
        return 0;
    } else if (numCrates <= maxLoad) {
        return 1;
    } else {
        int pile1 = numCrates / 2;
        int pile2 = numCrates - pile1;
        return numTrucks(pile1, maxLoad) + numTrucks(pile2, maxLoad);
    }
}
