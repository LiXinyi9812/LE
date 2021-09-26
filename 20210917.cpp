//#include <iostream>
//using namespace std;
//
//
//   class Solution {
//   public:
//   
//      
//       int c = 0;
//       int conv = 0;
//   
//   
//       bool isPalindrome(int x) {
//           if (x < 0) {
//               return false;
//           }
//   
//           int conv = 0;
//           int c = x;
//           while (x != 0) {
//               int pop = x % 10;
//               x /= 10;
//               conv = conv * 10 + pop;
//           }
//           return c == conv;
//       };
//   };
//
//   int main() {
//       Solution SolutionTest;//类Solution得申明一个对象
//       int result = SolutionTest.isPalindrome(12321);
//       cout <<  result << endl;  
//   }



