//
// Created by 张志强 on 2019-06-25.
//
#include "utils/file.h"

#include <string.h>
#include <unistd.h>
#include <cstddef>

namespace spider {

int make_dirs(const char *dir, mode_t mode) {
  if (dir == nullptr || *dir == '\0') {
    return -1;
  }

  const char *p = strrchr(dir, '/');

  if (p != nullptr) {
    char parent_dir[4096] = {0};
    strncpy(parent_dir, dir, p - dir);
    if (access(parent_dir, F_OK) != 0) {
      make_dirs(parent_dir, mode);
    }
  }

  if (access(dir, F_OK) != 0) {
    if (mkdir(dir, mode) != 0) {
      return -1;
    }
  }

  return 0;
}

}