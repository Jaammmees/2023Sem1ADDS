#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int maxLoad){
    if (memo.find(numCrates) != memo.end() && memo[numCrates].find(maxLoad) != memo[numCrates].end()) {
            return memo[numCrates][maxLoad];
        }
        
        int result;
        if (numCrates == 0) {
            result = 0;
        } else if (numCrates <= maxLoad) {
            result = 1;
        } else {
            int pile1 = numCrates / 2;
            int pile2 = numCrates - pile1;
            result = numTrucks(pile1, maxLoad) + numTrucks(pile2, maxLoad);
        }

        memo[numCrates][maxLoad] = result;
        return result;
}