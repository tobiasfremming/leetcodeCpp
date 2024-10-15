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
    bool placeFlowers(vector<int>& flowers, int flowersToPlace){
        int hasPlaced = 0;
        for (int i = 1; i < flowers.size() - 1; i++){
            if (flowers[i] == 0 && flowers[i-1] == 0 && flowers[i+1] == 0){
                flowers[i] = 1;
                hasPlaced += 1;
                if (hasPlaced == flowersToPlace) {
                    return true;
                }

            }
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

