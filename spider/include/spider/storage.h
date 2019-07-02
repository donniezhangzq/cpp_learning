//
// Created by 张志强 on 2019-06-20.
//

#ifndef SPIDER_STORAGE_H
#define SPIDER_STORAGE_H

#include <iostream>

namespace spider {
    class Storage {
    public:
        virtual void Write(const std::string &key, const std::string &value) = 0;
        virtual std::string Read(const std::string &key) = 0;
    };
}

#endif //SPIDER_STORAGE_H
