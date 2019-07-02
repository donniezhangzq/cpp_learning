//
// Created by 张志强 on 2019-06-27.
//
#include "utils/file.h"
#include "utils/testharness.h"

namespace spider {
class FileTest {};

TEST(FileTest, DirNotExistIssue) {
  const std::string notexist_dir = "/tmp/xxx";
  const std::string exist_dir = "/tmp/test_spider";
  const std::string err_dir = "*$@#%T#$";

  ASSERT_EQ(0, spider::make_dirs(notexist_dir.c_str(), 0644));
  ASSERT_EQ(0, spider::make_dirs(exist_dir.c_str(), 0644));
  ASSERT_EQ(-1, spider::make_dirs(err_dir.c_str(), 0644));
}

} // namespace spider

int main(int argc, char** argv) {
  return spider::test::RunAllTests();
}