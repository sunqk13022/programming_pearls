#include "cppjieba/Jieba.hpp"
#include "gtest/gtest.h"

#include <iostream>

using namespace cppjieba;

TEST(JiebaTest, Test1) {
  Jieba jieba("../dict/jieba.dict.utf8",
      "../dict/hmm_model.utf8", "../dict/user.dict.utf8");

  vector<string> words;
  string result;
  jieba.Cut("他来到了网易杭研大厦", words);
  result << words;
  ASSERT_EQ("[\"他\", \"来到\", \"了\", \"网易\", \"杭研\", \"大厦\"]", result);

  jieba.Cut("我来自北京邮电大学。", words, false);
  result << words;
  ASSERT_EQ("[\"我\", \"来自\", \"北京邮电大学\", \"。\"]", result);
  
  std::cout << result << std::endl;
  
}
