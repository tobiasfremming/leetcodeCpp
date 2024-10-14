
#include <iostream>
#include <cassert>

using namespace std;



class MergeAlternately {

public:
    void testMergeAlternately(){
        string word1 = "abc";
        string word2 = "pqr";
        string result = mergeAlternately(word1, word2);
        assert(mergeAlternately("abc", "pqr") == "apbqcr");

        word1 = "ab";
        word2 = "pqrs";
        result = mergeAlternately(word1, word2);
        assert(mergeAlternately("ab", "pqrs") == "apbqrs");

        word1 = "abcd";
        word2 = "pq";
        result = mergeAlternately(word1, word2);
        assert(mergeAlternately("abcd", "pq") == "apbqcd");
    }


public:
    string mergeAlternately(string word1, string word2) {
        size_t word1_size = word1.size();
        size_t word2_size = word2.size();
        size_t i = 0;
        size_t j = 0;
        string result = "";
        while (i < word1_size && j < word2_size){
            result += word1[i++];
            result += word2[j++];
        }
        
        while (i < word1_size){
            result += word1[i];
            i++;
        }

        while (j < word2_size){
            result += word2[j];
            j++;
        }
        return result;

        
    }
};


int main()
{
    cout << "Hello, World!" << endl;
    MergeAlternately solutions = MergeAlternately();
    solutions.testMergeAlternately();

    return 0;
}