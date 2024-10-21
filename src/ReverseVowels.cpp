#include <iostream>

using namespace std;


class ReverseVowels {

    public:
        void testSolution() {
            string s = "hello";
            
        }


    public:
        string reverseWovels(string s) {
            vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

            string result = s;

            vector<int> indexes;
            vector<char> vowelsInString;

            for (int i = 0; i < s.size(); i++) {
                for (int j = 0; j < vowels.size(); j++) {
                    if (s[i] == vowels[j]) {
                        indexes.push_back(i);
                        vowelsInString.push_back(s[i]);    
                    }
                }
            }

            for (int i = 0; i < indexes.size(); i++) {
                result[indexes[i]] = vowelsInString[indexes.size() - i - 1];
            }
            return result;
        }







};