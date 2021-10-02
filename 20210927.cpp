#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:


    string longestCommonPrefix(vector<string>& strs) {//&strs ��&��ʲô��˼��
        
        int minlength = size(*strs.begin());
        for (vector<string>::iterator i = strs.begin(); i != strs.end(); i++) {
            int a = size(*i);
            if (a < minlength) {
                minlength = a;
            }
        }
        if (minlength == 0) {
            return "";
        }
        for (int i = 0; i < minlength; i++) {//the ith letter in element
            for (unsigned int j = 0; j < strs.size()-1; j++) {//the jth element in string
                 if (strs[j][i] == strs[j + 1][i]) continue;
                 else return strs[0].substr(0, i);//Ϊʲô��i������i-1��
            }
        }
        return strs[0].substr(0, minlength);
    }
};




int main() {
        Solution SolutionTest;//��solution������һ������
        vector<string> strs = { "plat","plane","plages"};
        string result = SolutionTest.longestCommonPrefix(strs);
        cout << result << endl;
        
        
        }
        



