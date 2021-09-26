//#include <string>
//
//using namespace std;

////20210915
//class Solution0915 {
//public:
//   
//    int x;
//    int rev;
//
//int reverse(int x) {
//    int rev = 0;
//    while (x != 0) { //while x inequal to 0
//        int pop = x % 10; //create a var to store the last number
//        x /= 10; //create a var to store the rest numbers
//        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) return 0; //judge if overflow
//        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
//        rev = rev * 10 + pop; //push every last number forward and add the new number(pop)
//    }
//    return rev;
    //}
    //
    //};
    //int main()
    //{
    //    Solution0915 Solution112;
    //    int rev = Solution112.reverse(112);
    //    cout << "20210915" << rev << endl;
    //    //看看怎么使用随意输入一个数字，然后输出反向数字