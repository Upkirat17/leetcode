class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long totMass = mass;
        sort(asteroids.begin(), asteroids.end());

        for (int asteroid : asteroids){
            if(totMass < asteroid){
                return false;
            }
            totMass += asteroid;
        }
        return true;
    }
};