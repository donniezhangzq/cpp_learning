//
// Created by 张志强 on 2019-07-01.
//

#ifndef SPIDER_FILE_H
#define SPIDER_FILE_H

#include <sys/stat.h>

namespace spider {

int make_dirs(const char *dir, mode_t mode);

}

#endif //SPIDER_FILE_H
