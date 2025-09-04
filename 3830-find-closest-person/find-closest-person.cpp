class Solution {
public:
    int findClosest(int x, int y, int z) {
        int xzdis = abs(z-x);
        int yzdis = abs(z-y);
        if(xzdis < yzdis) return 1;
        else if(xzdis > yzdis) return 2;
        else return 0;
    }
};