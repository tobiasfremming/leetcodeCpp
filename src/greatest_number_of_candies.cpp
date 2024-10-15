#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm> 

using namespace std;

class GreatestNumberOfCandies {

public:
    std::vector<bool> kidsWithCandies(std::vector<int> candies, int extraCandies) {
        int highest_candy_count = *max_element(candies.begin(), candies.end());
        std::vector<bool> canHaveMostCandies;  
        
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= highest_candy_count) {
                canHaveMostCandies.push_back(true);
            } else {
                canHaveMostCandies.push_back(false);
            }
        }
        
        return canHaveMostCandies;  
    }

    void testGreatestNumberOfCandies(){
        std::vector<int> candies = {2, 3, 5, 1, 3};
        int extraCandies = 3;
        std::vector<bool> result = kidsWithCandies(candies, extraCandies);
        std::vector<bool> correct = {true, true, true, false, true};
        printResult(result);  
        assert(result == correct);  /

        candies = {1, 1, 1, 102};
        extraCandies = 100;
        result = kidsWithCandies(candies, extraCandies);
        correct = {false, false, false, true};
        printResult(result);  // Fixed printing function
        assert(result == correct);  // Assertion for correctness
    }

    void printResult(const std::vector<bool>& result) {
        cout << "Result: ";
        for (bool val : result) {
            cout << (val ? "true" : "false") << " ";
        }
        cout << endl;
    }
};

int main() {
    GreatestNumberOfCandies test;
    test.testGreatestNumberOfCandies();  // Run the test cases
    cout << "All tests passed!" << endl;  // Indicate that all tests passed
    return 0;
}
