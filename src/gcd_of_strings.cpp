#include <iostream>
#include <cassert>
using namespace std;

class GcdOfStrings {

    public: 
        void testGcdOfStrings(){
            string str1 = "ABCABC";
            string str2 = "ABC";
            string result = gcdOfStrings(str1, str2);
            cout << "Result: " << result << endl;
            assert(gcdOfStrings("ABCABC", "ABC") == "ABC");

            str1 = "ABABAB";
            str2 = "ABAB";
            result = gcdOfStrings(str1, str2);
            cout << "Result: " << result << endl;
            assert(gcdOfStrings("ABABAB", "ABAB") == "AB");

            str1 = "LEET";
            str2 = "CODE";
            result = gcdOfStrings(str1, str2);
            cout << "Result: " << result << endl;
            assert(gcdOfStrings("LEET", "CODE") == "");
        }

    

    private:
        string gcdOfStrings(string string1, string string2) {
            string result = "";
            string longest = "";

            for(size_t i = 0; i< string1.size(); i++) {                
                for (size_t j = 0; j < string2.size(); j++){
                    if (string1[i] == string2[j]){
                        if (result.find(string2[j]) == std::string::npos)
                            result += string1[i];
                        i++;
                    }
                    else {
                        if (result.size() > longest.size()){
                            longest = result;
                        }
                        result = "";
                        break;
                    }
                }
            }
            if (result.size() > longest.size()){
                longest = result;
                        }
            return longest;
            
        }
};


int main()
{
    GcdOfStrings gcdOfStrings = GcdOfStrings();
    gcdOfStrings.testGcdOfStrings();
    return 0;
}

