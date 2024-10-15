#include <iostream>
#include <vector>
#include <cassert>

using std::vector;
using namespace std;

class PlaceFlowers{

public:
    void testPlaceFlowers(){
        vector<int> testSet = {1,0,0,0,1};
        int flowersToPLace = 1;
        bool result = true;
        assert(placeFlowers(testSet, flowersToPLace) == result);

    }

public:
    bool placeFlowers(vector<int>& flowerbed, int n) {
        int hasPlaced = 0;
        vector <int> padded = {0};
        for (int i = 0; i < flowerbed.size(); i++){
            padded.push_back(flowerbed[i]);
        }
        padded.push_back(0);
        for (int i = 1; i < padded.size()-1; i++){
            if (hasPlaced == n) {
                    return true;
                }
            if (padded[i] == 0 && padded[i-1] == 0 && padded[i+1] == 0){
                padded[i] = 1;
                hasPlaced += 1;

            }
        }
        if (hasPlaced == n) {
                    return true;
                }
        
        return false;
        
    }


};

int main()
{   
    cout << "Hello, World!" << endl;
    PlaceFlowers test = PlaceFlowers();
    test.testPlaceFlowers();

    return 0;
    
}

