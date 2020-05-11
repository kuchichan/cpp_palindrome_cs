#ifndef IS_PALINDROME_HPP_
#define IS_PALINDROME_HPP_

#include <string>
#include <algorithm>

inline
bool isPalindrome(const std::string & text) {
  std::string temp_1 = text;
  std::string temp_2 = text;
  std::reverse(temp_1.begin(), temp_1.end());
     
  return (temp_1 == temp_2);
}

#endif // IS_PALINDROME_HPP_
