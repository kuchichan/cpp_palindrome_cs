#ifndef IS_PALINDROME_TEST_HPP_
#define IS_PALINDROME_TEST_HPP_

#include <gtest/gtest.h>
#include "is_palindrome.hpp"

TEST(IsPalindromeTests, isPalindrome) {
  ASSERT_FALSE(isPalindrome("Ala ma kota"));
  ASSERT_TRUE(isPalindrome("ala"));
  ASSERT_TRUE(isPalindrome("kajak"));
  ASSERT_TRUE(isPalindrome(""));
  ASSERT_TRUE(isPalindrome("neveroddoreven"));
  ASSERT_FALSE(isPalindrome("abacada"));
}

#endif // IS_PALINDROME_TEST_HPP_
