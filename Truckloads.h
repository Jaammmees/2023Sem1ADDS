// Pile of crates to divide pile in half, forming two smaller piles, then continue dividing untill piles fit on a truck. When an odd number is divided
// one pile will have one more than the other.
// Problem is to determine how many trucks we need to ship the crates

// Create a class turckloads that contains a method numTrucks that is given numCrates (warehouse number) and load size (max on truck)
// and return trucks required

class Truckloads{
    public:
        int numTrucks(int numCrates, int maxLoadonTruck);
};