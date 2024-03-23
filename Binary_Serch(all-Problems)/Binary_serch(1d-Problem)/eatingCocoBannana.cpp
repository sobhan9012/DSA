/*

using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = findMax(piles);
        for(int i = 1; i < maxi; i++) {
            int reqTime = CalculateTimeToHour(piles, i);
            if(reqTime <= h) {
                return i;
            }
        }
        return maxi; // Return maximum speed if no suitable speed is found
    }

    int findMax(vector<int> &piles) {
        int maxi = piles[0]; // Initialize maxi with first element
        for(int i = 1; i < piles.size(); i++) {
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }

    int CalculateTimeToHour(vector<int> &v, int hour) {
        int totalHour = 0;
        for(int i = 0; i < v.size(); i++) {
            totalHour += ceil((double)(v[i]) /(double)(hour));
        }
        return totalHour;
    }
};
*/