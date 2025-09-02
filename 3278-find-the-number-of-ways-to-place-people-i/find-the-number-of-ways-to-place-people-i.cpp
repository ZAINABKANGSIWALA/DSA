class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        
        int n = points.size();
        int cnt = 0;

        sort(points.begin(), points.end(), [](vector<int> &a, vector<int> &b) {

            if(a[0] == b[0]) {
                return a[1] > b[1];
            }

            return a[0] < b[0];
        });

        for(int i = 0; i < n; i++) {

            for(int j = i + 1; j < n; j++) {

                int topLeft = i;
                int bottomRight = j;

                if(points[topLeft][0] <= points[bottomRight][0] && points[topLeft][1] >= points[bottomRight][1]) {

                    bool isOverlap = false;
                    for(int k = 0; k < n; k++) {

                        if(k == topLeft || k == bottomRight) continue;

                        bool xCoordOverlap = (points[k][0] >= points[topLeft][0] && points[k][0] <= points[bottomRight][0]);
                        bool yCoordOverlap = (points[k][1] <= points[topLeft][1] && points[k][1] >= points[bottomRight][1]);

                        if(xCoordOverlap && yCoordOverlap) {

                            isOverlap = true;
                            break;
                        }
                    }

                    if(!isOverlap) {
                        cnt++;
                    }
                }
            }
        }

        return cnt;
    }
};