#include <string>
#include <iostream>
#include <map>
using namespace std;


 

    //20210920

class Solution {
public:

    string I;
    string V;
    string X;
    string L;
    string C;
    string D;
    string M;

    int romanToInt(string s) {

        map < string, int> RomanDictionary;

        RomanDictionary.insert(pair<string, int>(I, 1));
        RomanDictionary.insert(pair<string, int>(V, 5));
        RomanDictionary.insert(pair<string, int>(X, 10));
        RomanDictionary.insert(pair<string, int>(L, 50));
        RomanDictionary.insert(pair<string, int>(C, 100));
        RomanDictionary.insert(pair<string, int>(D, 500));
        RomanDictionary.insert(pair<string, int>(M, 1000));


        int ans = 0;
        int value = 0;
        for (int i = 0; i < s.length(); i++) {
            char a = s[i];
            int value = RomanDictionary[a];
            if (i < (s.length() - 1) && RomanDictionary[s[i + 1]]) {
                ans -= value;
            }
            else {
                ans += value;
            }
            return ans;
        }

    }
};

 int main() {
            Solution SolutionTest;//类solution得申明一个对象
            int result = SolutionTest.romanToInt("VI");
            cout << result << endl;
        }