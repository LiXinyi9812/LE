#include <string>
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int minlength;


    int Min_str_length(vector<string>& strs) {//find the min length of the element in strs required
        int minlength = size(*strs.begin());
        for (vector<string>::iterator i = strs.begin(); i != strs.end(); i++) {
            int a = size(*i);
            if (a < minlength) {
                minlength = a;
            }
            return minlength;
        }
    }



    //string longestCommonPrefix(vector<string>& strs) {//&strs 的&是什么意思？
    //    int j = 0;
    //    vector<string> v;//store the jth letter of each element in strs
    //    vector<string> p;//store every possible prefix
    //    int Min_str_length(vector<string>&strs);
    //    int minlength = Min_str_length(strs);
    //    while (j != minlength) {//j means the position index of each element in strs
    //        for (vector<string>::iterator i = strs.begin(); i != strs.end(); i++) {//i means the ith element in strs
    //            v.push_back(i[j]);//store the jth letter of each element in strs
    //        }
    //        int k = 0;//the kth letter in v
    //        while (v[k] == v[k + 1] && k < (size(strs) - 1)) {//try to find out if every element in v is the same
    //            k++;
    //        }
    //        if (k == (size(strs) - 1)) {//use the value of k to justify if every element in v is the same, if same, k shoule equal to (size(strs) - 1)
    //            p.push_back(v[0]);//if true, push the letter to p
    //            v.clear();//and clear v to continue next for loop
    //        }
    //        else {
    //            break;//if not true, stop all while loop
    //        }
    //        j++;
    //        return 0;
    //    }


    //    while (p.begin() != p.end()) {//print prefix

    //        cout << *p.begin() << endl;
    //        p.begin()++;
    //    }
    //}
};




int main() {
        Solution SolutionTest;//类solution得申明一个对象
        vector<string> strs;
        strs.push_back("plat");
        strs.push_back("plane");
        strs.push_back("plages");
        SolutionTest.Min_str_length(strs);
        

      
        }
        



    //容器在函数中的调用问题